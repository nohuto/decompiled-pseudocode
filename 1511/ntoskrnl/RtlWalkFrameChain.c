/*
 * XREFs of RtlWalkFrameChain @ 0x140026150
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     HvpViewMapUnpinForFileOffset @ 0x1401AB048 (HvpViewMapUnpinForFileOffset.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14020D474 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x140211040 (EtwpTraceStackWalk.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404B50FC (PoDiagCaptureUsermodeStack.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     MmCanThreadFault @ 0x140028250 (MmCanThreadFault.c)
 *     RtlpGetStackLimits @ 0x140028310 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x140154400 (KeGetCurrentStackPointer.c)
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
