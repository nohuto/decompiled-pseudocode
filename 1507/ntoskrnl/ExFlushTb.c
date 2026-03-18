/*
 * XREFs of ExFlushTb @ 0x140264FB0
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
 *     <none>
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  __int64 v5; // rcx

  result = KeGetCurrentThread();
  if ( a3 != 1 )
    return (struct _KTHREAD *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64))HalIommuDispatch[0] + 10))(
                                ExpSvmIommuSystemContext,
                                a1,
                                a2);
  v5 = *(_QWORD *)&result->ApcState.Process[2].ActiveProcessors.Count;
  if ( v5 )
    return (struct _KTHREAD *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64))HalIommuDispatch[0] + 9))(
                                v5,
                                a1,
                                a2);
  return result;
}
