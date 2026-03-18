/*
 * XREFs of KiWaitForContextSwap @ 0x140021070
 * Callers:
 *     KeDeleteThread @ 0x1400210A8 (KeDeleteThread.c)
 *     KiOutSwapKernelStacks @ 0x140123398 (KiOutSwapKernelStacks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiWaitForContextSwap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  while ( 1 )
  {
    result = *(unsigned __int8 *)(a1 + 113);
    if ( !(_BYTE)result )
      break;
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
  }
  return result;
}
