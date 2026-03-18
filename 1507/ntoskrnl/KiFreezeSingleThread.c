/*
 * XREFs of KiFreezeSingleThread @ 0x1400D268C
 * Callers:
 *     KeStartThread @ 0x14000F67C (KeStartThread.c)
 *     KeFreezeProcess @ 0x1400D24F8 (KeFreezeProcess.c)
 * Callees:
 *     KiSuspendThread @ 0x14000CA68 (KiSuspendThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char result; // al

  v3 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 736), 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( (*(_DWORD *)(a2 + 736) & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)(a2 + 736), 7u) );
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xDu);
  result = KiSuspendThread(a2, a1, a3);
  if ( !result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xDu);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 736), 0xFFFFFF7F);
  return result;
}
