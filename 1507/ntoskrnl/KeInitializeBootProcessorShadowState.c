/*
 * XREFs of KeInitializeBootProcessorShadowState @ 0x14040188C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KiShadowProcessorAllocation @ 0x140402AA0 (KiShadowProcessorAllocation.c)
 */

__int64 KeInitializeBootProcessorShadowState()
{
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = KiShadowProcessorAllocation(CurrentPrcb, CurrentPrcb[-1].PrcbPad140[468] - 12208);
  if ( !(_DWORD)result )
    KeBugCheck(0x7Du);
  return result;
}
