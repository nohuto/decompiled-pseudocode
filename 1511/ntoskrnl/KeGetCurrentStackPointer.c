/*
 * XREFs of KeGetCurrentStackPointer @ 0x140154400
 * Callers:
 *     RtlWalkFrameChain @ 0x140026150 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x140028340 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x14002C460 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     PnprGetStackLimits @ 0x1401C0F3C (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1401F6FB8 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x140211040 (EtwpTraceStackWalk.c)
 *     MmVerifierTrimMemory @ 0x1406B5AA0 (MmVerifierTrimMemory.c)
 *     ViDeadlockAnalyze @ 0x1406CCCBC (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
