/*
 * XREFs of VmFlushTb @ 0x14025B4C4
 * Callers:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     KeFlushEntireTb @ 0x140203DB8 (KeFlushEntireTb.c)
 * Callees:
 *     VmpFlushTb @ 0x14025B680 (VmpFlushTb.c)
 */

struct _KTHREAD *__fastcall VmFlushTb(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rcx

  result = KeGetCurrentThread();
  v3 = a1;
  v4 = result->ApcState.Process[2].ActiveProcessors.Bitmap[11];
  if ( v4 )
    return (struct _KTHREAD *)VmpFlushTb(v4, (unsigned int)v3, a2, v3);
  return result;
}
