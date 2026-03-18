/*
 * XREFs of xxxAddFontResourceW @ 0x1C013B7AC
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C013B4F0 (xxxLW_LoadFonts.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C013B638 (-xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C013B7E4 (xxxClientAddFontResourceW.c)
 */

__int64 __fastcall xxxAddFontResourceW(PCWSTR SourceString, unsigned int a2, __int64 a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return xxxClientAddFontResourceW(&DestinationString, a2, a3);
}
