/*
 * XREFs of GreGetRasterizerCaps @ 0x1C02B3A40
 * Callers:
 *     NtGdiGetRasterizerCaps @ 0x1C02A74B0 (NtGdiGetRasterizerCaps.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRasterizerCaps(_WORD *a1)
{
  __int16 v1; // r8
  __int64 result; // rax

  HIBYTE(v1) = 0;
  if ( a1 )
  {
    *a1 = 6;
    a1[1] = gppdevTrueType != 0LL ? 2 : 0;
    LOBYTE(v1) = gcTrueTypeFonts != 0;
    a1[1] = (gppdevTrueType != 0LL ? 2 : 0) | v1;
    result = 1LL;
    a1[2] = gusLanguageID;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  return result;
}
