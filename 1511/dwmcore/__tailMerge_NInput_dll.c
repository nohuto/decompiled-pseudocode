/*
 * XREFs of __tailMerge_NInput_dll @ 0x1800BB590
 * Callers:
 *     __imp_load_DestroyInteractionContext @ 0x1800BB570 (__imp_load_DestroyInteractionContext.c)
 *     __imp_load_StopInteractionContext @ 0x1800BB610 (__imp_load_StopInteractionContext.c)
 *     __imp_load_ProcessPointerFramesInteractionContext @ 0x1800BB630 (__imp_load_ProcessPointerFramesInteractionContext.c)
 *     __imp_load_CreateInteractionContext @ 0x1800BB650 (__imp_load_CreateInteractionContext.c)
 *     __imp_load_ResetInteractionContext @ 0x1800BB670 (__imp_load_ResetInteractionContext.c)
 *     __imp_load_SetPropertyInteractionContext @ 0x1800BB690 (__imp_load_SetPropertyInteractionContext.c)
 *     __imp_load_SetInteractionConfigurationInteractionContext @ 0x1800BB6B0 (__imp_load_SetInteractionConfigurationInteractionContext.c)
 *     __imp_load_RegisterOutputCallbackInteractionContext @ 0x1800BB6D0 (__imp_load_RegisterOutputCallbackInteractionContext.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B3CD0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_NInput_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_NInput_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
