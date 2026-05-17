/*
 * XREFs of RtlpUnwindOpSlots @ 0x180088E64
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800326D0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x1800349C0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180035340 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x180036770 (RtlRaiseException.c)
 *     RtlVirtualUnwind @ 0x180036EF0 (RtlVirtualUnwind.c)
 *     RtlpUnwindEpilogue @ 0x1800A5BE0 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlpUnwindOpSlots(unsigned __int16 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = HIBYTE(a1) & 0xF;
  if ( (unsigned int)v1 >= 0xB )
    RtlRaiseStatus(3221225727LL);
  result = RtlpUnwindOpSlotTable[v1];
  if ( (_DWORD)v1 == 1 && (a1 & 0xF000u) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
