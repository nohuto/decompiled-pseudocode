/*
 * XREFs of RtlWalkFrameChain @ 0x14001D4B0
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401E0D0C (HvpViewMapUnpinForFileOffset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14025C7C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x1402603FC (EtwpTraceStackWalk.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404F449C (PoDiagCaptureUsermodeStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14001D5A0 (RtlpGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x14001D740 (RtlpWalkFrameChain.c)
 *     MmCanThreadFault @ 0x14001F4C0 (MmCanThreadFault.c)
 *     KeGetCurrentStackPointer @ 0x140182D80 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  ULONG v6; // esi
  ULONG result; // eax
  int v8; // ebp
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE || Count == -1 )
    return 0;
  v8 = (Flags & 2) == 0;
  v5 = v8 + (Flags >> 8);
  v6 = v8 + Count;
  if ( !(unsigned int)MmCanThreadFault() && (v4 & 1) != 0
    || !(unsigned __int8)RtlpGetStackLimits(&v10, v9)
    || (unsigned __int64)(KeGetCurrentStackPointer() - v10) < 0xE30 )
  {
    return 0;
  }
  result = RtlpWalkFrameChain(Callers, v6, v4, v5);
  if ( result )
    result -= v8;
  return result;
}
