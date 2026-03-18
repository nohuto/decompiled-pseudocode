/*
 * XREFs of UserSetAltScaleFont @ 0x1C00CDBB4
 * Callers:
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C00D0D74 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D696C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0018888 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     GreSetLFONTOwner @ 0x1C00CDC80 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall UserSetAltScaleFont(HBRUSH a1, __int64 *a2)
{
  __int64 FontIndirectW; // rax
  __int64 v4; // rdx
  INT a; // [rsp+20h] [rbp-78h] BYREF
  INT v7; // [rsp+24h] [rbp-74h]

  if ( !(unsigned int)GreExtGetObjectW(a1, 92LL, (unsigned __int16 *)&a) )
    return 0LL;
  a = EngMulDiv(a, 96, *(unsigned __int16 *)(gpsi + 7286LL));
  v7 = EngMulDiv(v7, 96, *(unsigned __int16 *)(gpsi + 7286LL));
  FontIndirectW = GreCreateFontIndirectW((__int64)&a);
  *a2 = FontIndirectW;
  if ( !FontIndirectW )
    return 0LL;
  LOBYTE(v4) = 10;
  HmgMarkUndeletable(FontIndirectW, v4);
  GreSetLFONTOwner(*a2, 0LL);
  return 1LL;
}
