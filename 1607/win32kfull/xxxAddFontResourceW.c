/*
 * XREFs of xxxAddFontResourceW @ 0x1C00EB04C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C00EADD0 (xxxLW_LoadFonts.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C00EAED8 (-xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z.c)
 * Callees:
 *     xxxClientAddFontResourceW @ 0x1C00EB084 (xxxClientAddFontResourceW.c)
 */

__int64 __fastcall xxxAddFontResourceW(PCWSTR SourceString, unsigned int a2, __int64 a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, SourceString);
  return xxxClientAddFontResourceW(&DestinationString, a2, a3);
}
