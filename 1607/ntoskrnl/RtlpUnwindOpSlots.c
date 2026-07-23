/*
 * XREFs of RtlpUnwindOpSlots @ 0x1400B1C9C
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F0A0 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x1400B0FB8 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400B1AE0 (RtlpUnwindEpilogue.c)
 *     RtlpVirtualUnwind @ 0x1400F125C (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400F2B50 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1400F34B0 (RtlUnwindEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(-1073741569);
  result = RtlpUnwindOpSlotTable[v1];
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
