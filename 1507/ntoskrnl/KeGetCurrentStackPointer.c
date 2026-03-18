/*
 * XREFs of KeGetCurrentStackPointer @ 0x140182D80
 * Callers:
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
 *     KeQueryCurrentStackInformation @ 0x14001D5D0 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400217C0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     PnprGetStackLimits @ 0x1401FCB00 (PnprGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140245BF8 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 *     MmVerifierTrimMemory @ 0x140735D84 (MmVerifierTrimMemory.c)
 *     ViDeadlockAnalyze @ 0x140750548 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
