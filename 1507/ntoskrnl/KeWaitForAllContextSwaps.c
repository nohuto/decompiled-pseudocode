/*
 * XREFs of KeWaitForAllContextSwaps @ 0x1401FFAE8
 * Callers:
 *     MmOutSwapProcess @ 0x14011029C (MmOutSwapProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeWaitForAllContextSwaps(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // dx
  __int64 result; // rax

  v2 = 0;
  while ( 1 )
  {
    v3 = *(_WORD *)(a1 + 272);
    v4 = 0;
    if ( !v3 )
      break;
    while ( 1 )
    {
      result = v4;
      if ( *(_QWORD *)(a1 + 8LL * v4 + 280) )
        break;
      if ( ++v4 >= v3 )
        return result;
    }
    if ( (++v2 & HvlLongSpinCountMask) != 0
      || (result = (unsigned int)HvlEnlightenments, (HvlEnlightenments & 0x40) == 0) )
    {
      _mm_pause();
    }
    else
    {
      result = HvlNotifyLongSpinWait(v2);
    }
  }
  return result;
}
