/*
 * XREFs of ExpWnfAcquireSubscriptionByName @ 0x1404ADA7C
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x1404AD9D8 (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionByName(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // rdi
  __int64 result; // rax

  v3 = (unsigned __int64 *)(a2 + 80);
  v6 = KeAbPreAcquire(a2 + 80, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, v6, (ULONG_PTR)v3);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = *(_QWORD **)(a2 + 88);
  if ( v7 == (_QWORD *)(a2 + 88) )
  {
LABEL_8:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    return 3221225524LL;
  }
  else
  {
    while ( 1 )
    {
      v8 = (struct _EX_RUNDOWN_REF *)(v7 - 3);
      if ( v7[4] == a1 )
        break;
      v7 = (_QWORD *)*v7;
      if ( v7 == (_QWORD *)(a2 + 88) )
        goto LABEL_8;
    }
    ExAcquireRundownProtection(v8 + 1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    result = 0LL;
    *a3 = v8;
  }
  return result;
}
