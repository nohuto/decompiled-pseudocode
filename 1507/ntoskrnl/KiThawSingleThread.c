/*
 * XREFs of KiThawSingleThread @ 0x14000A190
 * Callers:
 *     KeThawProcess @ 0x14000989C (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x14000BA84 (KeForceResumeProcess.c)
 * Callees:
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiThawSingleThread(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char v4; // si
  __int64 result; // rax

  v3 = 0;
  v4 = a3;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 736), 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
      result = *(unsigned int *)(a2 + 736);
    }
    while ( (result & 0x80u) != 0LL || _interlockedbittestandset((volatile signed __int32 *)(a2 + 736), 7u) );
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) != 0 || v4 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xDu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(a3) = v4;
      result = KiResumeThread(a2, a1, a3);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)(a2 + 736), 0xFFFFFF7F);
  return result;
}
