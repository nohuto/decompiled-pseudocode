/*
 * XREFs of __tailMerge_AVRT_dll @ 0x140019480
 * Callers:
 *     __imp_load_AvRevertMmThreadCharacteristics @ 0x140019460 (__imp_load_AvRevertMmThreadCharacteristics.c)
 *     __imp_load_AvQuerySystemResponsiveness @ 0x140019500 (__imp_load_AvQuerySystemResponsiveness.c)
 *     __imp_load_AvSetMmThreadPriority @ 0x140019520 (__imp_load_AvSetMmThreadPriority.c)
 *     __imp_load_AvSetMmThreadCharacteristicsA @ 0x140019540 (__imp_load_AvSetMmThreadCharacteristicsA.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x140016D30 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_AVRT_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_AVRT_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
