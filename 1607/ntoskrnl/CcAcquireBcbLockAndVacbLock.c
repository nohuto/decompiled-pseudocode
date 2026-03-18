/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1400189B4
 * Callers:
 *     CcUnmapVacbArray @ 0x140017FC0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14001872C (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x14006CF18 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401B2708 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401B2810 (CcReferenceFileOffset.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, struct _FAST_MUTEX *a2)
{
  volatile signed __int32 *p_OldIrql; // rdi
  __int64 result; // rax
  __int64 v5; // rbx

  if ( a1 )
    ExAcquireFastMutex(a2 + 5);
  p_OldIrql = (volatile signed __int32 *)&a2[1].OldIrql;
  result = KeAbPreAcquire((ULONG_PTR)p_OldIrql);
  v5 = result;
  if ( _interlockedbittestandset64(p_OldIrql, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(p_OldIrql, result, p_OldIrql);
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 32);
    *(_BYTE *)(v5 + 26) |= 1u;
  }
  return result;
}
