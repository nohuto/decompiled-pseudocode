/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x140018534
 * Callers:
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     CcDereferenceFileOffset @ 0x1401B25EC (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1401B26F4 (CcReferenceFileOffset.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
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
