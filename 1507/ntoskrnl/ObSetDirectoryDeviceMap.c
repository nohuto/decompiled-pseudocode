/*
 * XREFs of ObSetDirectoryDeviceMap @ 0x14046213C
 * Callers:
 *     SeGetTokenDeviceMap @ 0x140461F64 (SeGetTokenDeviceMap.c)
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
 */

NTSTATUS __fastcall ObSetDirectoryDeviceMap(_QWORD *a1, void *a2)
{
  NTSTATUS result; // eax
  PVOID v4; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  NTSTATUS v7; // ebp
  __int64 v8; // r9
  _QWORD *v9; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rsi
  PVOID v16; // rcx
  __int64 v17; // rax
  __int64 **v18; // rdx
  PVOID v19; // r8
  __int64 v20; // rdx
  signed __int64 v21; // rax
  signed __int64 v22; // rcx
  unsigned __int64 v23; // rtt
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  int v26; // ebx
  __int64 v27; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a2, 2u, ObpDirectoryObjectType, 0, &Object, 0LL);
  if ( result < 0 )
    return result;
  v4 = Object;
  if ( (*((_DWORD *)Object + 86) & 4) != 0 )
  {
    v26 = -1073741811;
LABEL_30:
    ObfDereferenceObject(v4);
    return v26;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6D44624Fu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v26 = -1073741670;
    goto LABEL_30;
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
    v9 = 0LL;
    PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v27, v8);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v11 = (unsigned __int64 *)(v27 + 120);
    v13 = KeAbPreAcquire(v27 + 120, 0LL, 0LL, v12);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(v11, v13, (ULONG_PTR)v11, v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    v16 = Object;
    v17 = *((_QWORD *)Object + 38);
    if ( v17 )
    {
      v9 = v6;
      v6 = (_QWORD *)*((_QWORD *)Object + 38);
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 24));
      v18 = (__int64 **)v27;
      v16 = Object;
    }
    else
    {
      v18 = (__int64 **)v27;
      *((_QWORD *)Object + 38) = v6;
      v19 = (PVOID)**v18;
      if ( v16 != v19 )
        v6[1] = v19;
    }
    v20 = **v18;
    if ( v16 != (PVOID)v20 )
      v6[1] = v20;
    _m_prefetchw(v11);
    v21 = *v11;
    v22 = *v11 - 16;
    if ( (*v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v22 = 0LL;
    if ( (v21 & 2) != 0 || (v23 = *v11, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v22, v21)) )
      ExfReleasePushLock(v11, v20);
    KeAbPostRelease((ULONG_PTR)v11);
    v24 = KeGetCurrentThread();
    v25 = v24->SpecialApcDisable + 1;
    v24->SpecialApcDisable = v25;
    if ( !v25 && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery();
    PsDereferenceMonitorContextServerSilo(v27);
    if ( v9 )
    {
      v7 = ObpCloseHandle(v9[2], 0LL);
      ObfDereferenceObject(Object);
      ExFreePoolWithTag(v9, 0);
    }
    if ( a1 )
      *a1 = v6;
  }
  return v7;
}
