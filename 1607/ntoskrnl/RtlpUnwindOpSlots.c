/*
 * XREFs of RtlpUnwindOpSlots @ 0x1400B3E1C
 * Callers:
 *     RtlpWalkFrameChain @ 0x14004F520 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x1400B3138 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400B3C60 (RtlpUnwindEpilogue.c)
 *     RtlpVirtualUnwind @ 0x1400F340C (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400F4D00 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1400F5660 (RtlUnwindEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
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
