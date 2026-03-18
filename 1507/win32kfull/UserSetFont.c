/*
 * XREFs of UserSetFont @ 0x1C0137F98
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C0137568 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 * Callees:
 *     CreateFontFromWinIni @ 0x1C0137FF8 (CreateFontFromWinIni.c)
 *     GreMarkDeletableFont @ 0x1C0138114 (GreMarkDeletableFont.c)
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
    if ( *a4 && v7 != *(struct HLFONT__ **)gdpiSystem && v7 != (struct HLFONT__ *)gdpi96 )
    {
      GreMarkDeletableFont(v7);
      GreDeleteObject(*a4);
    }
    *a4 = (struct HLFONT__ *)v6;
    return 1LL;
  }
  return result;
}
