/*
 * XREFs of ?ParseFontLinkEntry@@YA_NPEAGPEAUFontLinkData@@@Z @ 0x1C0060CFC
 * Callers:
 *     bAddFlEntry @ 0x1C00608E8 (bAddFlEntry.c)
 *     bDeleteFlEntry @ 0x1C0289B84 (bDeleteFlEntry.c)
 * Callees:
 *     ?ParseFontScaleFactor@@YA_NPEBGPEAJ@Z @ 0x1C0063FFC (-ParseFontScaleFactor@@YA_NPEBGPEAJ@Z.c)
 */

char __fastcall ParseFontLinkEntry(unsigned __int16 *a1, struct FontLinkData *a2)
{
  unsigned __int16 *v3; // rbx
  wchar_t *v4; // rbx
  wchar_t *v5; // rbx
  wchar_t *v7; // rsi
  wchar_t *v8; // rsi

  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *(_QWORD *)a2 = a1;
  v3 = &a1[wcscspn(a1, L",")];
  if ( !*v3 )
    return 1;
  *v3 = 0;
  v4 = &v3[wcsspn(v3 + 1, L" ") + 1];
  if ( !iswdigit(*v4) )
  {
    *((_QWORD *)a2 + 1) = v4;
    v5 = &v4[wcscspn(v4, L",")];
    if ( !*v5 )
      return 1;
    *v5 = 0;
    v4 = &v5[wcsspn(v5 + 1, L" ") + 1];
  }
  v7 = &v4[wcscspn(v4, L",")];
  if ( *v7 )
  {
    *v7 = 0;
    v8 = &v7[wcsspn(v7 + 1, L" ") + 1];
    if ( ParseFontScaleFactor(v4, (int *)a2 + 4) && ParseFontScaleFactor(v8, (int *)a2 + 5) )
      return 1;
  }
  return 0;
}
