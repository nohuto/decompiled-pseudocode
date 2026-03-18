/*
 * XREFs of KeGetCurrentStackPointer @ 0x14015DB50
 * Callers:
 *     RtlWalkFrameChain @ 0x14004F2A0 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x14004F3C0 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400F10A0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     PnprGetStackLimits @ 0x1401D048C (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14021171C (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x140229620 (EtwpTraceStackWalk.c)
 *     MmVerifierTrimMemory @ 0x1407018D8 (MmVerifierTrimMemory.c)
 *     ViDeadlockAnalyze @ 0x140714A9C (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
