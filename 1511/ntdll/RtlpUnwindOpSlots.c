/*
 * XREFs of RtlpUnwindOpSlots @ 0x180003788
 * Callers:
 *     RtlpWalkFrameChain @ 0x180032E80 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180034C40 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1800355D0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036970 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x1800370C0 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1800A4880 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
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
