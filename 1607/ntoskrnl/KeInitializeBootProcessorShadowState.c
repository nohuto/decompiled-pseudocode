/*
 * XREFs of KeInitializeBootProcessorShadowState @ 0x1403DD550
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KiShadowProcessorAllocation @ 0x1403DE0E8 (KiShadowProcessorAllocation.c)
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
