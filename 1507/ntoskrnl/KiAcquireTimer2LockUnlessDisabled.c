/*
 * XREFs of KiAcquireTimer2LockUnlessDisabled @ 0x1400F67A0
 * Callers:
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     KeDisableTimer2 @ 0x1400F451C (KeDisableTimer2.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiAcquireTimer2LockUnlessDisabled(__int64 a1)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v1);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  if ( (*(_BYTE *)(a1 + 1) & 0x20) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (*(unsigned __int8 *)(a1 + 1) >> 5) & 1;
}
