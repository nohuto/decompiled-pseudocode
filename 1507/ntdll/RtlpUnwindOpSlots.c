/*
 * XREFs of RtlpUnwindOpSlots @ 0x18009326C
 * Callers:
 *     RtlVirtualUnwind @ 0x180011740 (RtlVirtualUnwind.c)
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlpWalkFrameChain @ 0x1800126E0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180013890 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180014200 (RtlUnwindEx.c)
 *     RtlpUnwindEpilogue @ 0x18009306C (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
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
