/*
 * XREFs of VmFlushTb @ 0x140223CE0
 * Callers:
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B5D3C (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x14010A628 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14012C860 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012F798 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x14013CFC0 (KeFlushEntireTb.c)
 * Callees:
 *     VmpFlushTb @ 0x140223F84 (VmpFlushTb.c)
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
