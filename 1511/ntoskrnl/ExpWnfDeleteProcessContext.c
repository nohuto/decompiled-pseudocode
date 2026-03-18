/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x1403E1D84
 * Callers:
 *     ExWnfExitProcess @ 0x1403E3D28 (ExWnfExitProcess.c)
 *     ExpWnfCreateProcessContext @ 0x1404B2C08 (ExpWnfCreateProcessContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfDeleteSubscription @ 0x1403E2034 (ExpWnfDeleteSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteNameInstance @ 0x1404B2110 (ExpWnfDeleteNameInstance.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  volatile signed __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // r14
  __int64 v15; // rax
  signed __int8 v16; // cf
  __int64 v17; // rdi
  unsigned __int64 **v18; // r8
  PVOID *v19; // rdx
  void *v20; // rcx
  _QWORD *v21; // rbp
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rbp

  v2 = P + 10;
  v5 = KeAbPreAcquire((ULONG_PTR)(P + 10), 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = P + 11;
  while ( (_QWORD *)*v7 != v7 )
  {
    v8 = (_QWORD *)*v7;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*v7 - 16LL));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ExpWnfDeleteSubscription(v8 - 3);
    v9 = KeAbPreAcquire((ULONG_PTR)v2, 0LL, 0LL);
    v10 = v9;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v9, (ULONG_PTR)v2);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v11 = (volatile signed __int64 *)(P + 7);
  v12 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v12, (ULONG_PTR)(P + 7));
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = P + 8;
  while ( (_QWORD *)*v14 != v14 )
  {
    v21 = (_QWORD *)*v14;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*v14 - 128LL));
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers(v21 - 17, 16LL, 0LL, 0LL);
    LOBYTE(v22) = 1;
    ExpWnfDeleteNameInstance(*(v21 - 11), v21 - 17, v22);
    v23 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0LL);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v23, (ULONG_PTR)(P + 7));
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v15 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0LL);
    v16 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v17 = v15;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v15, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    v18 = (unsigned __int64 **)P[2];
    v19 = (PVOID *)P[3];
    if ( v18[1] != P + 2 || *v19 != P + 2 )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (unsigned __int64 *)v19;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v20 = (void *)P[16];
    if ( v20 )
      ObfDereferenceObject(v20);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
