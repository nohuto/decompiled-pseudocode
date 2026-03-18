/*
 * XREFs of ObSetDeviceMap @ 0x1405BBFDC
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407E2610 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObpCloseHandle @ 0x1404A4DA0 (ObpCloseHandle.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 */

NTSTATUS __fastcall ObSetDeviceMap(_KPROCESS *a1, void *a2)
{
  _KPROCESS *Process; // r13
  NTSTATUS result; // eax
  PVOID v5; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r9
  int v9; // r15d
  unsigned __int64 *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 **v20; // rax
  void *v21; // rsi
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  unsigned __int64 v24; // rtt
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ebx
  _QWORD *v31; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  Process = a1;
  if ( !a1 )
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObReferenceObjectByHandle(a2, 2u, ObpDirectoryObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = Object;
    if ( (*((_DWORD *)Object + 86) & 4) != 0 )
    {
      v30 = -1073741811;
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
        v9 = ObOpenObjectByPointer(v5, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)v7 + 2);
        if ( v9 < 0 )
        {
          ObfDereferenceObject(v5);
          ExFreePoolWithTag(v7, 0);
        }
        else
        {
          v10 = 0LL;
          PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v31, v8);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v12 = v31 + 15;
          v14 = KeAbPreAcquire((ULONG_PTR)(v31 + 15), 0LL, 0LL, v13);
          v17 = v14;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
            ExfAcquirePushLockExclusiveEx(v12, v14, (ULONG_PTR)v12, v16);
          if ( v17 )
            *(_BYTE *)(v17 + 26) |= 1u;
          v18 = Object;
          v19 = *((_QWORD *)Object + 38);
          if ( v19 )
          {
            v10 = v7;
            v7 = (_QWORD *)*((_QWORD *)Object + 38);
            _InterlockedIncrement((volatile signed __int32 *)(v19 + 24));
          }
          else
          {
            v20 = (__int64 **)v31;
            if ( !a1 )
              *v31 = v7;
            v18[38] = v7;
            v15 = **v20;
            if ( v18 != (_QWORD *)v15 )
              v7[1] = v15;
          }
          v21 = (void *)Process[1].ActiveProcessors.Bitmap[8];
          Process[1].ActiveProcessors.Bitmap[8] = (unsigned __int64)v7;
          _m_prefetchw(v12);
          v22 = *v12;
          v23 = *v12 - 16;
          if ( (*v12 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v23 = 0LL;
          if ( (v22 & 2) != 0
            || (v24 = *v12, v24 != _InterlockedCompareExchange64((volatile signed __int64 *)v12, v23, v22)) )
          {
            ExfReleasePushLock(v12, v15);
          }
          KeAbPostRelease((ULONG_PTR)v12);
          v25 = KeGetCurrentThread();
          v26 = v25->SpecialApcDisable + 1;
          v25->SpecialApcDisable = v26;
          if ( !v26 && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
            KiCheckForKernelApcDelivery();
          PsDereferenceMonitorContextServerSilo((__int64)v31);
          if ( v10 )
          {
            v9 = ObpCloseHandle(v10[2], 0, v28, v29);
            ObfDereferenceObject(Object);
            ExFreePoolWithTag(v10, 0);
          }
          if ( v21 )
            ObfDereferenceDeviceMap(v21, v27, v28, v29);
        }
        return v9;
      }
      v30 = -1073741670;
    }
    ObfDereferenceObject(v5);
    return v30;
  }
  return result;
}
