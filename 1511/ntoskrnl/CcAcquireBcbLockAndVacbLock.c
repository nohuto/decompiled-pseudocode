/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1400E115C
 * Callers:
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1400E0744 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401A98A8 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401A99B0 (CcReferenceFileOffset.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  unsigned __int64 *p_OldIrql; // rdi
  __int64 result; // rax
  __int64 v5; // rbx

  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  p_OldIrql = (unsigned __int64 *)&a2[1].OldIrql;
  result = KeAbPreAcquire((ULONG_PTR)p_OldIrql, 0LL, 0LL);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_OldIrql, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(p_OldIrql, result, (ULONG_PTR)p_OldIrql);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  return result;
}
