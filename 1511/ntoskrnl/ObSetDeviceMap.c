/*
 * XREFs of ObSetDeviceMap @ 0x140545400
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     ObpCreateDosDevicesDirectory @ 0x14076D380 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObpCloseHandle @ 0x1403F6F6C (ObpCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall ObSetDeviceMap(_KPROCESS *a1, void *a2)
{
  _KPROCESS *Process; // r13
  NTSTATUS result; // eax
  PVOID v5; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  int v8; // r14d
  unsigned __int64 *v9; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rcx
  __int64 v15; // rax
  void ***v16; // rax
  _QWORD *v17; // rdx
  void *v18; // rsi
  signed __int64 v19; // rax
  signed __int64 v20; // rcx
  unsigned __int64 v21; // rtt
  int v22; // ebx
  _QWORD *v23; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  Process = a1;
  if ( !a1 )
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObReferenceObjectByHandle(a2, 2u, ObpDirectoryObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 86) & 4) != 0 )
    {
      v22 = -1073741811;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6D44624Fu);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x40uLL);
        *((_DWORD *)v7 + 6) = 1;
        *v7 = v5;
        v8 = ObOpenObjectByPointer(v5, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)v7 + 2);
        if ( v8 < 0 )
        {
          ObfDereferenceObject(v5);
          ExFreePoolWithTag(v7, 0);
        }
        else
        {
          v9 = 0LL;
          PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v23);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v11 = v23 + 15;
          v12 = KeAbPreAcquire((ULONG_PTR)(v23 + 15), 0LL, 0LL);
          v13 = v12;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
            ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
          if ( v13 )
            *(_BYTE *)(v13 + 26) |= 1u;
          v14 = Object;
          v15 = *((_QWORD *)Object + 38);
          if ( v15 )
          {
            v9 = v7;
            v7 = (_QWORD *)*((_QWORD *)Object + 38);
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 24));
          }
          else
          {
            v16 = (void ***)v23;
            if ( !a1 )
              *v23 = v7;
            v14[38] = v7;
            v17 = **v16;
            if ( v14 != v17 )
              v7[1] = v17;
          }
          v18 = (void *)Process[1].ActiveProcessors.Bitmap[8];
          Process[1].ActiveProcessors.Bitmap[8] = (unsigned __int64)v7;
          _m_prefetchw(v11);
          v19 = *v11;
          if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
            v20 = v19 - 16;
          else
            v20 = 0LL;
          if ( (v19 & 2) != 0
            || (v21 = *v11, v21 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v20, v19)) )
          {
            ExfReleasePushLock(v11);
          }
          KeAbPostRelease((ULONG_PTR)v11);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          PsDereferenceMonitorContextServerSilo((__int64)v23);
          if ( v9 )
          {
            v8 = ObpCloseHandle(v9[2], 0);
            ObfDereferenceObject(Object);
            ExFreePoolWithTag(v9, 0);
          }
          if ( v18 )
            ObfDereferenceDeviceMap(v18);
        }
        return v8;
      }
      v22 = -1073741670;
    }
    ObfDereferenceObject(v5);
    return v22;
  }
  return result;
}
