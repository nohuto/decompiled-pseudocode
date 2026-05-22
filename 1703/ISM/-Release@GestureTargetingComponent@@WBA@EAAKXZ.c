/*
 * XREFs of ?Release@GestureTargetingComponent@@WBA@EAAKXZ @ 0x1800055A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GestureTargetingComponent::Release(__int64 a1)
{
  return PTPProcessor::Release((PTPProcessor *)(a1 - 16));
}
