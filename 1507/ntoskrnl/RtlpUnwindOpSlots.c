/*
 * XREFs of RtlpUnwindOpSlots @ 0x14001D3DC
 * Callers:
 *     RtlpUnwindEpilogue @ 0x140005800 (RtlpUnwindEpilogue.c)
 *     RtlpVirtualUnwind @ 0x14001B25C (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x14001BBB0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x14001C500 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x14001D740 (RtlpWalkFrameChain.c)
 *     RtlVirtualUnwind @ 0x14012E39C (RtlVirtualUnwind.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
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
