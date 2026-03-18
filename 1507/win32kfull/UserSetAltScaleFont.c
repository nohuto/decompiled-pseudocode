/*
 * XREFs of UserSetAltScaleFont @ 0x1C0137ED0
 * Callers:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C0137568 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x1C0137618 (xxxSetNCFonts.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D4DB0 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C005684C (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00FCA30 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(HSURF a1, __int64 *a2)
{
  __int64 FontIndirectW; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v8; // [rsp+24h] [rbp-74h]

  if ( !(unsigned int)GreExtGetObjectW(a1, 92, (unsigned __int16 *)&a) )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 7286LL));
  v8 = EngMulDiv(v8, 96, *(unsigned __int16 *)(gpsi + 7286LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)&a);
  *a2 = FontIndirectW;
  if ( !FontIndirectW )
    return 0LL;
  LOBYTE(v4) = 10;
  HmgMarkUndeletable(FontIndirectW, v4);
  GreSetLFONTOwner(*a2, 0, v5);
  return 1LL;
}
