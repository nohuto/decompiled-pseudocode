/*
 * XREFs of RtlpCaptureContext @ 0x140166F00
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     RtlRaiseException @ 0x140211E04 (RtlRaiseException.c)
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x140166F7ALL);
}
