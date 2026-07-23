/*
 * XREFs of RtlWalkFrameChain @ 0x14004EE20
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401B6A18 (HvpViewMapUnpinForFileOffset.c)
 *     KiDpcWatchdogCaptureStack @ 0x1401D1C3C (KiDpcWatchdogCaptureStack.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224D8C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x14022944C (EtwpTraceStackWalk.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404D26F4 (PoDiagCaptureUsermodeStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14004EF10 (RtlpGetStackLimits.c)
 *     RtlpWalkFrameChain @ 0x14004F0A0 (RtlpWalkFrameChain.c)
 *     MmCanThreadFault @ 0x1400511A0 (MmCanThreadFault.c)
 *     KeGetCurrentStackPointer @ 0x14015E0C0 (KeGetCurrentStackPointer.c)
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
