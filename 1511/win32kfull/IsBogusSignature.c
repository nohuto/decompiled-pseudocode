/*
 * XREFs of IsBogusSignature @ 0x1C0150500
 * Callers:
 *     vFillIFICharsets @ 0x1C0012E80 (vFillIFICharsets.c)
 *     vFill_IFIMETRICS @ 0x1C00130A4 (vFill_IFIMETRICS.c)
 * Callees:
 *     bContainGlyphSet @ 0x1C000B734 (bContainGlyphSet.c)
 */

_BOOL8 __fastcall IsBogusSignature(int a1, __int64 a2)
{
  _BOOL8 result; // rax
  const wchar_t *v5; // rbx
  __int64 v6; // rbx

  result = 1;
  if ( (a1 & 0x20000) != 0
    || *(_WORD *)(a2 + 312) != 2
    || (v6 = *(_QWORD *)(a2 + 88), !bContainGlyphSet(0xFF71u, v6))
    || !bContainGlyphSet(0xFF72u, v6)
    || !bContainGlyphSet(0xFF73u, v6)
    || !bContainGlyphSet(0xFF74u, v6)
    || !bContainGlyphSet(0xFF75u, v6) )
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
