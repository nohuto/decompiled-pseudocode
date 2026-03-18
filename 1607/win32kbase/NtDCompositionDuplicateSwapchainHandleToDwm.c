/*
 * XREFs of NtDCompositionDuplicateSwapchainHandleToDwm @ 0x1C00E3750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtDCompositionDuplicateSwapchainHandleToDwm(char *a1, size_t Size)
{
  return DCompositionSendDwmLpcMessage(a1, Size);
}
