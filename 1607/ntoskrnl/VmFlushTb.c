/*
 * XREFs of VmFlushTb @ 0x140223B0C
 * Callers:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14012CDD0 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x14013D530 (KeFlushEntireTb.c)
 * Callees:
 *     VmpFlushTb @ 0x140223DB0 (VmpFlushTb.c)
 */

struct _KTHREAD *VmFlushTb()
{
  struct _KTHREAD *result; // rax
  volatile LONG *v1; // rcx

  result = KeGetCurrentThread();
  v1 = (volatile LONG *)result->ApcState.Process[2].ActiveProcessors.Bitmap[14];
  if ( v1 )
    return (struct _KTHREAD *)VmpFlushTb(v1);
  return result;
}
