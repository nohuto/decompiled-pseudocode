/*
 * XREFs of ObSetDirectoryDeviceMap @ 0x1404A7D9C
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1404A7BCC (SeGetTokenDeviceMap.c)
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
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall ObSetDirectoryDeviceMap(_QWORD *a1, void *a2)
{
  NTSTATUS result; // eax
  PVOID v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  int v7; // ebp
  unsigned __int64 *v8; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  PVOID v13; // rcx
  __int64 v14; // rax
  void ***v15; // rdx
  PVOID v16; // r8
  PVOID v17; // rdx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  unsigned __int64 v20; // rtt
  int v21; // ebx
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a2, 2u, ObpDirectoryObjectType, 0, &Object, 0LL);
  if ( result < 0 )
    return result;
  v4 = Object;
  if ( (*((_DWORD *)Object + 86) & 4) != 0 )
  {
    v21 = -1073741811;
LABEL_28:
    ObfDereferenceObject(v4);
    return v21;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6D44624Fu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v21 = -1073741670;
    goto LABEL_28;
  }
  memset(PoolWithTag, 0, 0x40uLL);
  *((_DWORD *)v6 + 6) = 1;
  *v6 = v4;
  v7 = ObOpenObjectByPointer(v4, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)v6 + 2);
  if ( v7 < 0 )
  {
    ObfDereferenceObject(v4);
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v8 = 0LL;
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v22);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v10 = (unsigned __int64 *)(v22 + 120);
    v11 = KeAbPreAcquire(v22 + 120, 0LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v11, (ULONG_PTR)v10);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    v13 = Object;
    v14 = *((_QWORD *)Object + 38);
    if ( v14 )
    {
      v8 = v6;
      v6 = (_QWORD *)*((_QWORD *)Object + 38);
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 24));
      v15 = (void ***)v22;
      v13 = Object;
    }
    else
    {
      v15 = (void ***)v22;
      *((_QWORD *)Object + 38) = v6;
      v16 = **v15;
      if ( v13 != v16 )
        v6[1] = v16;
    }
    v17 = **v15;
    if ( v13 != v17 )
      v6[1] = v17;
    _m_prefetchw(v10);
    v18 = *v10;
    if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v19 = v18 - 16;
    else
      v19 = 0LL;
    if ( (v18 & 2) != 0 || (v20 = *v10, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v10, v19, v18)) )
      ExfReleasePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    PsDereferenceMonitorContextServerSilo(v22);
    if ( v8 )
    {
      v7 = ObpCloseHandle(v8[2], 0);
      ObfDereferenceObject(Object);
      ExFreePoolWithTag(v8, 0);
    }
    if ( a1 )
      *a1 = v6;
  }
  return v7;
}
