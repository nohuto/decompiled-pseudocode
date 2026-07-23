/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x140018490
 * Callers:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401B25EC (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401B26F4 (CcReferenceFileOffset.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
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
