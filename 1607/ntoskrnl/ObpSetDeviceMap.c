/*
 * XREFs of ObpSetDeviceMap @ 0x1404CBF4C
 * Callers:
 *     SeGetTokenDeviceMap @ 0x1404885C0 (SeGetTokenDeviceMap.c)
 *     ObpSetSiloDeviceMap @ 0x14057A330 (ObpSetSiloDeviceMap.c)
 *     ObSetProcessDeviceMap @ 0x140668BF8 (ObSetProcessDeviceMap.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ObfDereferenceDeviceMap @ 0x140421318 (ObfDereferenceDeviceMap.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpCloseHandle @ 0x1404EF704 (ObpCloseHandle.c)
 */

NTSTATUS __fastcall ObpSetDeviceMap(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, _QWORD *a6)
{
  NTSTATUS result; // eax
  PVOID v9; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  NTSTATUS v12; // ebp
  void *v13; // r15
  _QWORD *v14; // rbp
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  void ***v17; // r12
  unsigned __int64 *v18; // rdi
  _BYTE *v19; // rax
  _BYTE *v20; // rsi
  _QWORD *v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rdx
  signed __int64 v24; // rax
  signed __int64 v25; // rcx
  unsigned __int64 v26; // rtt
  void *v27; // rcx
  int v28; // ebx
  PVOID Objecta; // [rsp+40h] [rbp-28h] BYREF

  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  if ( result < 0 )
    return result;
  v9 = Objecta;
  if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 86) & 4) != 0 )
  {
    v28 = -1073741811;
LABEL_37:
    ObfDereferenceObject(v9);
    return v28;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6D44624Fu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v28 = -1073741670;
    goto LABEL_37;
  }
  memset(PoolWithTag, 0, 0x48uLL);
  *((_DWORD *)v11 + 6) = 1;
  *v11 = v9;
  v12 = ObOpenObjectByPointer(v9, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)v11 + 2);
  if ( v12 < 0 )
  {
    ObfDereferenceObject(v9);
    ExFreePoolWithTag(v11, 0x6D44624Fu);
    return v12;
  }
  else
  {
    if ( Object )
    {
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      v11[8] = Object;
    }
    v13 = 0LL;
    v14 = 0LL;
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)Object);
    CurrentThread = KeGetCurrentThread();
    v17 = (void ***)ServerSiloGlobals;
    --CurrentThread->SpecialApcDisable;
    v18 = (unsigned __int64 *)(ServerSiloGlobals + 120);
    v19 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(ServerSiloGlobals + 120), 0LL, 0);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx(v18, v19, (ULONG_PTR)v18);
    if ( v20 )
      v20[26] |= 1u;
    v21 = Objecta;
    v22 = *((_QWORD *)Objecta + 38);
    if ( v22 )
    {
      v14 = v11;
      v11 = (_QWORD *)*((_QWORD *)Objecta + 38);
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 24));
    }
    else
    {
      if ( (a5 & 1) != 0 )
        *v17 = (void **)v11;
      v21[38] = v11;
      if ( (a5 & 2) != 0 )
      {
        v23 = **v17;
        if ( v21 != v23 )
          v11[1] = v23;
      }
    }
    if ( a2 )
    {
      v13 = *(void **)(a2 + 1072);
      *(_QWORD *)(a2 + 1072) = v11;
    }
    _m_prefetchw(v18);
    v24 = *v18;
    if ( (*v18 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v25 = v24 - 16;
    else
      v25 = 0LL;
    if ( (v24 & 2) != 0 || (v26 = *v18, v26 != _InterlockedCompareExchange64((volatile signed __int64 *)v18, v25, v24)) )
      ExfReleasePushLock(v18);
    KeAbPostRelease((ULONG_PTR)v18);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v14 )
    {
      ObpCloseHandle(v14[2], 0LL);
      ObfDereferenceObject(Objecta);
      v27 = (void *)v11[8];
      if ( v27 )
        ObfDereferenceObjectWithTag(v27, 0x6D44624Fu);
      ExFreePoolWithTag(v14, 0x6D44624Fu);
    }
    if ( v13 )
      ObfDereferenceDeviceMap(v13);
    if ( a6 )
      *a6 = v11;
    return 0;
  }
}
