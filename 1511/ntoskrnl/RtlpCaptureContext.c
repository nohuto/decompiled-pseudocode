/*
 * XREFs of RtlpCaptureContext @ 0x14015BA60
 * Callers:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     RtlRaiseException @ 0x1401F7A50 (RtlRaiseException.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x14015BADALL);
}
