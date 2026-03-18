/*
 * XREFs of ExFlushTb @ 0x14022EB0C
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B5D3C (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x14010A628 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x14012C860 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012F798 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x14013CFC0 (KeFlushEntireTb.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v5; // rcx

  result = KeGetCurrentThread();
  if ( a3 != 1 )
    return (struct _KTHREAD *)((__int64 (__fastcall *)(__int64, _QWORD, __int64))HalIommuDispatch[10])(
                                ExpSvmIommuSystemContext,
                                a1,
                                a2);
  v5 = result->ApcState.Process[2].ActiveProcessors.Bitmap[2];
  if ( v5 )
    return (struct _KTHREAD *)((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64))HalIommuDispatch[9])(
                                v5,
                                a1,
                                a2);
  return result;
}
