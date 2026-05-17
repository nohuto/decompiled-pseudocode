/*
 * XREFs of RtlpLockUlockAllHeapsCallback @ 0x1800D9620
 * Callers:
 *     <none>
 * Callees:
 *     RtlpUnlockHeapInternal @ 0x180044C7C (RtlpUnlockHeapInternal.c)
 *     RtlpLockHeapInternal @ 0x1800D9540 (RtlpLockHeapInternal.c)
 */

__int64 __fastcall RtlpLockUlockAllHeapsCallback(__int64 a1, __int64 a2)
{
  if ( a2 )
    RtlpLockHeapInternal(a1);
  else
    RtlpUnlockHeapInternal(a1);
  return 0LL;
}
