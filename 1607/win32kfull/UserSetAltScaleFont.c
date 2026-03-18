/*
 * XREFs of UserSetAltScaleFont @ 0x1C00B90A4
 * Callers:
 *     xxxSetNCFonts @ 0x1C00B8670 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00B9B2C (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01CD808 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C0060558 (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(struct HLFONT__ *a1, __int64 *a2)
{
  __int64 FontIndirectW; // rax
  __int64 v4; // rdx
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v7; // [rsp+24h] [rbp-74h]

  if ( !(unsigned int)GreExtGetObjectW(a1, 92, (unsigned __int16 *)&a) )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 8678LL));
  v7 = EngMulDiv(v7, 96, *(unsigned __int16 *)(gpsi + 8678LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)&a);
  *a2 = FontIndirectW;
  if ( !FontIndirectW )
    return 0LL;
  LOBYTE(v4) = 10;
  HmgMarkUndeletable(FontIndirectW, v4);
  GreSetLFONTOwner(*a2, 0LL);
  return 1LL;
}
