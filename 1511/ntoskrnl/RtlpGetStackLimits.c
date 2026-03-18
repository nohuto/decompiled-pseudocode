/*
 * XREFs of RtlpGetStackLimits @ 0x140028310
 * Callers:
 *     RtlDispatchException @ 0x140024440 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140024DF0 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x140026150 (RtlWalkFrameChain.c)
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x1400282E0 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1401F6FB8 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1406B5AA0 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1406C73B4 (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140028340 (KeQueryCurrentStackInformation.c)
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
