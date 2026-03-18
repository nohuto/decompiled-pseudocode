/*
 * XREFs of RtlpCaptureContext @ 0x14018B540
 * Callers:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlpWalkFrameChain @ 0x14001D740 (RtlpWalkFrameChain.c)
 *     RtlRaiseException @ 0x140246A34 (RtlRaiseException.c)
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 * Callees:
 *     <none>
 */

void RtlpCaptureContext()
{
  JUMPOUT(0x14018B5BALL);
}
