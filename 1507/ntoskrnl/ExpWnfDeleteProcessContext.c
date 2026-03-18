/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x140505720
 * Callers:
 *     ExWnfExitProcess @ 0x140504364 (ExWnfExitProcess.c)
 *     ExpWnfCreateProcessContext @ 0x1405458E0 (ExpWnfCreateProcessContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteSubscription @ 0x1405059CC (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x14053F340 (ExpWnfDeleteNameInstance.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD *v10; // r14
  volatile signed __int64 *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbp
  _QWORD *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  signed __int8 v20; // cf
  __int64 v21; // rdi
  unsigned __int64 **v22; // r8
  PVOID *v23; // rdx
  void *v24; // rcx
  _QWORD *v25; // rbp
  struct _EX_RUNDOWN_REF *v26; // rcx
  unsigned __int64 v27; // rtt
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rbp
  _QWORD *v32; // rbp
  struct _EX_RUNDOWN_REF *v33; // rcx
  unsigned __int64 v34; // rtt
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // r9
  __int64 v39; // rbp

  v4 = P + 10;
  v7 = KeAbPreAcquire((ULONG_PTR)(P + 10), 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = P + 11;
  while ( (_QWORD *)*v10 != v10 )
  {
    v25 = (_QWORD *)*v10;
    v26 = (struct _EX_RUNDOWN_REF *)(*v10 - 16LL);
    _m_prefetchw(v26);
    v27 = v26->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)v26, v27 + 2, v27) )
      ExfAcquireRundownProtection(v26);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    ExpWnfDeleteSubscription(v25 - 3);
    v29 = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL, v28);
    v31 = v29;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v29, (ULONG_PTR)v4, v30);
    if ( v31 )
      *(_BYTE *)(v31 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v11 = (volatile signed __int64 *)(P + 7);
  v13 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0LL, v12);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v13, (ULONG_PTR)(P + 7), v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v16 = P + 8;
  while ( (_QWORD *)*v16 != v16 )
  {
    v32 = (_QWORD *)*v16;
    v33 = (struct _EX_RUNDOWN_REF *)(*v16 - 128LL);
    _m_prefetchw(v33);
    v34 = v33->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)v33, v34 + 2, v34) )
      ExfAcquireRundownProtection(v33);
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers((__int64)(v32 - 17), 0x10u, 0, 0LL);
    LOBYTE(v35) = 1;
    ExpWnfDeleteNameInstance(*(v32 - 11), v32 - 17, v35);
    v37 = KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0LL, v36);
    v39 = v37;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v37, (ULONG_PTR)(P + 7), v38);
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v18 = KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0LL, v17);
    v20 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v21 = v18;
    if ( v20 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v18, (ULONG_PTR)&ExpWnfProcessesListLock, v19);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    v22 = (unsigned __int64 **)P[2];
    v23 = (PVOID *)P[3];
    if ( v22[1] != P + 2 || *v23 != P + 2 )
      __fastfail(3u);
    *v23 = v22;
    v22[1] = (unsigned __int64 *)v23;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v24 = (void *)P[16];
    if ( v24 )
      ObfDereferenceObject(v24);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
