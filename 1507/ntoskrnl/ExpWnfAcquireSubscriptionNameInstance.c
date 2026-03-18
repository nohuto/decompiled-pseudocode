/*
 * XREFs of ExpWnfAcquireSubscriptionNameInstance @ 0x140563650
 * Callers:
 *     ExQueryWnfStateData @ 0x140563580 (ExQueryWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionNameInstance(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r9
  struct _EX_RUNDOWN_REF *v9; // rcx
  struct _EX_RUNDOWN_REF *v10; // rcx
  unsigned __int64 v11; // rtt

  v5 = 0LL;
  v6 = (unsigned __int64 *)(PsInitialSystemProcess[2].Affinity.Bitmap[19] + 80);
  v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v9 = *(struct _EX_RUNDOWN_REF **)(a2 + 48);
  if ( v9 )
  {
    v10 = v9 + 1;
    _m_prefetchw(v10);
    v11 = v10->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 == _InterlockedCompareExchange64((volatile signed __int64 *)v10, v11 + 2, v11)
      || ExfAcquireRundownProtection(v10) )
    {
      v5 = *(_QWORD *)(a2 + 48);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  return v5;
}
