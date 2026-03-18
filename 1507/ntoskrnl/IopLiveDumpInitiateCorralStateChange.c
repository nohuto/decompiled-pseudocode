/*
 * XREFs of IopLiveDumpInitiateCorralStateChange @ 0x1403FF47C
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1403FEDD4 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpStartDumpDataBuffering @ 0x1403FFD70 (IopLiveDumpStartDumpDataBuffering.c)
 *     IopLiveDumpUncorralProcessors @ 0x1403FFE28 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     IopLiveDumpProcessCorralStateChange @ 0x1403FFCB8 (IopLiveDumpProcessCorralStateChange.c)
 */

__int64 __fastcall IopLiveDumpInitiateCorralStateChange(__int64 a1, __int32 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
  IopLiveDumpProcessCorralStateChange(a1, a1 + 112);
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 20);
    if ( *(_DWORD *)(a1 + 16) == (_DWORD)result )
      break;
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
  }
  return result;
}
