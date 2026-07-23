/*
 * XREFs of KeGetCurrentStackPointer @ 0x14015E0C0
 * Callers:
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x14004EF40 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400EEEF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     PnprGetStackLimits @ 0x1401D02B8 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140211548 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x14022944C (EtwpTraceStackWalk.c)
 *     MmVerifierTrimMemory @ 0x140701908 (MmVerifierTrimMemory.c)
 *     ViDeadlockAnalyze @ 0x140714A9C (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
