/*
 * XREFs of MiUpdatePfnProtection @ 0x140224EF8
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140031070 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiSanitizePfnProtection @ 0x14005E6A0 (MiSanitizePfnProtection.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v8; // r9

  v3 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( *(__int64 *)(a2 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) );
  }
  result = MiSanitizePfnProtection(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1F, a3);
  *(_QWORD *)(a2 + 16) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(32 * result)) & 0x3E0;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
