/*
 * XREFs of IsBogusSignature @ 0x1C01582D4
 * Callers:
 *     vFill_IFIMETRICS @ 0x1C0157904 (vFill_IFIMETRICS.c)
 *     vFillIFICharsets @ 0x1C015837C (vFillIFICharsets.c)
 * Callees:
 *     bContainGlyphSet @ 0x1C02450C4 (bContainGlyphSet.c)
 */

_BOOL8 __fastcall IsBogusSignature(int a1, __int64 a2)
{
  _BOOL8 result; // rax
  const wchar_t *v5; // rbx
  __int64 v6; // rbx

  result = 1;
  if ( (a1 & 0x20000) != 0
    || *(_WORD *)(a2 + 312) != 2
    || (v6 = *(_QWORD *)(a2 + 88), !(unsigned int)bContainGlyphSet(65393LL, v6))
    || !(unsigned int)bContainGlyphSet(65394LL, v6)
    || !(unsigned int)bContainGlyphSet(65395LL, v6)
    || !(unsigned int)bContainGlyphSet(65396LL, v6)
    || !(unsigned int)bContainGlyphSet(65397LL, v6) )
  {
    if ( (a1 & 0x40000) == 0 )
      return 0;
    v5 = (const wchar_t *)(*(int *)(a2 + 372) + a2 + 352);
    if ( _wcsicmp(v5, L"Microsoft:MS Mincho:1995") )
    {
      if ( _wcsicmp(v5, L"Microsoft:MS PMincho:1995")
        && _wcsicmp(v5, L"Microsoft:MS Gothic:1995")
        && _wcsicmp(v5, L"Microsoft:MS PGothic:1995") )
      {
        return 0;
      }
    }
  }
  return result;
}
