/*
 * XREFs of RtlpGetStackLimits @ 0x14004F390
 * Callers:
 *     RtlWalkFrameChain @ 0x14004F2A0 (RtlWalkFrameChain.c)
 *     IoGetStackLimits @ 0x14004F360 (IoGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1400F4D00 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1400F5660 (RtlUnwindEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x14021171C (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1407018D8 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1407133FC (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14004F3C0 (KeQueryCurrentStackInformation.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // [rsp+40h] [rbp+18h] BYREF

  result = KeQueryCurrentStackInformation(&v3, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
