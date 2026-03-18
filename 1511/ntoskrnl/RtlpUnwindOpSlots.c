/*
 * XREFs of RtlpUnwindOpSlots @ 0x1400F3634
 * Callers:
 *     RtlpVirtualUnwind @ 0x140023A90 (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x140024440 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140024DF0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x1400F0A68 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1400F34A4 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
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
