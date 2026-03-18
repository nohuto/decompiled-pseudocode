/*
 * XREFs of ExpWnfAcquireSubscriptionByName @ 0x140503D98
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x140503CBC (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionByName(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v7; // rdi
  __int64 v8; // r9
  _QWORD *v9; // rcx
  struct _EX_RUNDOWN_REF *v10; // rdi
  __int64 result; // rax
  unsigned __int64 v12; // rtt

  v4 = (unsigned __int64 *)(a2 + 80);
  v7 = KeAbPreAcquire(a2 + 80, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v7, (ULONG_PTR)v4, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = *(_QWORD **)(a2 + 88);
  if ( v9 == (_QWORD *)(a2 + 88) )
  {
LABEL_8:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    return 3221225524LL;
  }
  else
  {
    while ( 1 )
    {
      v10 = (struct _EX_RUNDOWN_REF *)(v9 - 3);
      if ( v9[4] == a1 )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == (_QWORD *)(a2 + 88) )
        goto LABEL_8;
    }
    _m_prefetchw(&v10[1]);
    v12 = v10[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&v10[1], v12 + 2, v12) )
      ExfAcquireRundownProtection(v10 + 1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    result = 0LL;
    *a3 = v10;
  }
  return result;
}
