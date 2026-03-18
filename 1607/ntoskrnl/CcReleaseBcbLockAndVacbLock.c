/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x140018910
 * Callers:
 *     CcUnmapVacbArray @ 0x140017FC0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14001872C (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x14006CF18 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401B2708 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401B2810 (CcReferenceFileOffset.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  volatile signed __int64 *p_OldIrql; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // r8
  __int64 v7; // rtt

  p_OldIrql = (volatile signed __int64 *)&a2[1].OldIrql;
  _m_prefetchw(&a2[1].OldIrql);
  v5 = *(_QWORD *)&a2[1].OldIrql;
  if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v6 = v5 - 16;
  else
    v6 = 0LL;
  if ( (v5 & 2) != 0 || (v7 = *(_QWORD *)&a2[1].OldIrql, v7 != _InterlockedCompareExchange64(p_OldIrql, v6, v5)) )
    ExfReleasePushLock(&a2[1].OldIrql);
  KeAbPostRelease((ULONG_PTR)p_OldIrql);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
