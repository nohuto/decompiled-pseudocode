/*
 * XREFs of VmFlushTb @ 0x14020C224
 * Callers:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x1401C7064 (KeFlushEntireTb.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     VmpFlushTb @ 0x14020C4C4 (VmpFlushTb.c)
 */

struct _KTHREAD *VmFlushTb()
{
  struct _KTHREAD *result; // rax
  volatile LONG *v1; // rcx

  result = KeGetCurrentThread();
  v1 = (volatile LONG *)result->ApcState.Process[2].ActiveProcessors.Bitmap[12];
  if ( v1 )
    return (struct _KTHREAD *)VmpFlushTb(v1);
  return result;
}
