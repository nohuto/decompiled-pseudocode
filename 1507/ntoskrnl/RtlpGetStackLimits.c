/*
 * XREFs of RtlpGetStackLimits @ 0x14001D5A0
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     RtlDispatchException @ 0x14001BBB0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
 *     IoGetStackLimits @ 0x14001D570 (IoGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x14001D740 (RtlpWalkFrameChain.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140245BF8 (RtlEnoughStackSpaceForStackCapture.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1402610C8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405A8114 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405A8A4C (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 *     MmVerifierTrimMemory @ 0x140735D84 (MmVerifierTrimMemory.c)
 *     VerifierKeWaitForMultipleObjects @ 0x1407490A0 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x1407492AC (VerifierKeWaitForMultipleObjectsNoReboot.c)
 *     VerifierKeWaitForSingleObject @ 0x140749448 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeWaitForSingleObjectNoReboot @ 0x1407495C4 (VerifierKeWaitForSingleObjectNoReboot.c)
 *     ViDeadlockCheckStackLimits @ 0x140750B4C (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001D5D0 (KeQueryCurrentStackInformation.c)
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
