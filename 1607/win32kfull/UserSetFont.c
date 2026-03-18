/*
 * XREFs of UserSetFont @ 0x1C00B8F28
 * Callers:
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00B9B2C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 * Callees:
 *     CreateFontFromWinIni @ 0x1C00B8F88 (CreateFontFromWinIni.c)
 *     GreMarkDeletableFont @ 0x1C00B919C (GreMarkDeletableFont.c)
 */

__int64 __fastcall UserSetFont(__int64 a1, __int64 a2, __int64 a3, struct HLFONT__ **a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  struct HLFONT__ *v7; // rcx

  result = CreateFontFromWinIni();
  v6 = result;
  if ( result )
  {
    v7 = *a4;
    if ( *a4 && v7 != (struct HLFONT__ *)gdpiSystem && v7 != (struct HLFONT__ *)gdpi96 )
    {
      GreMarkDeletableFont(v7);
      GreDeleteObject(*a4);
    }
    *a4 = (struct HLFONT__ *)v6;
    return 1LL;
  }
  return result;
}
