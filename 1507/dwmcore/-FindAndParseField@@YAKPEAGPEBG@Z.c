/*
 * XREFs of ?FindAndParseField@@YAKPEAGPEBG@Z @ 0x180149170
 * Callers:
 *     ?GetChipSetInfo@@YAKXZ @ 0x1801491F4 (-GetChipSetInfo@@YAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindAndParseField(unsigned __int16 *a1, const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  wchar_t *v3; // rax
  wchar_t *v4; // rax
  wchar_t *v5; // rdi
  wchar_t *v6; // rax
  wchar_t *v7; // rsi

  v2 = 0;
  v3 = wcsstr(a1, a2);
  if ( v3 )
  {
    v4 = wcschr(v3, 0x5Fu);
    v5 = v4;
    if ( v4 )
    {
      v6 = wcschr(v4 + 1, 0x26u);
      v7 = v6;
      if ( v6 )
      {
        *v6 = 0;
        v2 = wcstol(v5 + 1, 0LL, 16);
        *v7 = 38;
      }
    }
  }
  return v2;
}
