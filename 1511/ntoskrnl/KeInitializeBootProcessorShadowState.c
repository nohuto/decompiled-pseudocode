/*
 * XREFs of KeInitializeBootProcessorShadowState @ 0x1403B105C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KiShadowProcessorAllocation @ 0x1403B19D4 (KiShadowProcessorAllocation.c)
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
