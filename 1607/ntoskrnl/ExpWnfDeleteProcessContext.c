/*
 * XREFs of ExpWnfDeleteProcessContext @ 0x1404AD754
 * Callers:
 *     ExWnfExitProcess @ 0x14045FD9C (ExWnfExitProcess.c)
 *     ExpWnfCreateProcessContext @ 0x1404BB634 (ExpWnfCreateProcessContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteSubscription @ 0x1404ADB5C (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteNameInstance @ 0x1404AE36C (ExpWnfDeleteNameInstance.c)
 */

void __fastcall ExpWnfDeleteProcessContext(unsigned __int64 *P, int a2)
{
  unsigned __int64 *v2; // rdi
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  _QWORD *v7; // r14
  volatile signed __int64 *v8; // rdi
  _BYTE *v9; // rax
  _BYTE *v10; // rbp
  _QWORD *v11; // r14
  _BYTE *v12; // rax
  signed __int8 v13; // cf
  _BYTE *v14; // rdi
  unsigned __int64 **v15; // r8
  PVOID *v16; // rdx
  void *v17; // rcx
  _QWORD *v18; // rbp
  _BYTE *v19; // rax
  _BYTE *v20; // rbp
  _QWORD *v21; // rbp
  __int64 v22; // r8
  _BYTE *v23; // rax
  _BYTE *v24; // rbp

  v2 = P + 10;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(P + 10), 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    v6[26] |= 1u;
  v7 = P + 11;
  while ( (_QWORD *)*v7 != v7 )
  {
    v18 = (_QWORD *)*v7;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*v7 - 16LL));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v2);
    KeAbPostRelease((ULONG_PTR)v2);
    ExpWnfDeleteSubscription(v18 - 3);
    v19 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v2, 0LL, 0);
    v20 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
      ExfAcquirePushLockExclusiveEx(v2, v19, (ULONG_PTR)v2);
    if ( v20 )
      v20[26] |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  v8 = (volatile signed __int64 *)(P + 7);
  v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 14, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 7, v9, (ULONG_PTR)(P + 7));
  if ( v10 )
    v10[26] |= 1u;
  v11 = P + 8;
  while ( (_QWORD *)*v11 != v11 )
  {
    v21 = (_QWORD *)*v11;
    ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*v11 - 128LL));
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
    KeAbPostRelease((ULONG_PTR)(P + 7));
    ExpWnfNotifyNameSubscribers((__int64)(v21 - 17), 0x10u, 0, 0);
    LOBYTE(v22) = 1;
    ExpWnfDeleteNameInstance(*(v21 - 11), v21 - 17, v22);
    v23 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(P + 7), 0LL, 0);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx(P + 7, v23, (ULONG_PTR)(P + 7));
    if ( v24 )
      v24[26] |= 1u;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)P + 7);
  KeAbPostRelease((ULONG_PTR)(P + 7));
  if ( a2 )
  {
    v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpWnfProcessesListLock, 0LL, 0);
    v13 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v14 = v12;
    if ( v13 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v12, (ULONG_PTR)&ExpWnfProcessesListLock);
    if ( v14 )
      v14[26] |= 1u;
    v15 = (unsigned __int64 **)P[2];
    v16 = (PVOID *)P[3];
    if ( v15[1] != P + 2 || *v16 != P + 2 )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = (unsigned __int64 *)v16;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    v17 = (void *)P[16];
    if ( v17 )
      ObfDereferenceObject(v17);
    ExFreePoolWithTag(P, 0x20666E57u);
  }
}
