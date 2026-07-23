/*
 * XREFs of RtlpUnwindOpSlots @ 0x180088E54
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800326C0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800349B0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x180036EE0 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1800A5BD4 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
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
