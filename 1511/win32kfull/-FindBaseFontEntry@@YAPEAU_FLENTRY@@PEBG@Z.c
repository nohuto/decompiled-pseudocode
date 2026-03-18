/*
 * XREFs of ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00184CC
 * Callers:
 *     vLinkEudcPFEsWorker @ 0x1C000F40C (vLinkEudcPFEsWorker.c)
 *     bAddFlEntry @ 0x1C0019CB8 (bAddFlEntry.c)
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0119E0C (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 *     bDeleteFlEntry @ 0x1C028B16C (bDeleteFlEntry.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C028BBC0 (NtGdiGetEudcTimeStampEx.c)
 * Callees:
 *     <none>
 */

struct _FLENTRY *__fastcall FindBaseFontEntry(wchar_t *Str1)
{
  char *i; // rbx
  char *v3; // rdi
  const wchar_t *v4; // rdx
  const wchar_t *v5; // rcx

  for ( i = (char *)off_1C031E848; ; i = *(char **)i )
  {
    v3 = 0LL;
    if ( i == (char *)&off_1C031E848 )
      break;
    v4 = (const wchar_t *)(i + 32);
    v3 = i;
    if ( *((_WORD *)i + 16) == 64 )
      v4 = (const wchar_t *)(i + 34);
    v5 = Str1;
    if ( *Str1 == 64 )
      v5 = Str1 + 1;
    if ( !_wcsicmp(v5, v4) )
      break;
  }
  return (struct _FLENTRY *)v3;
}
