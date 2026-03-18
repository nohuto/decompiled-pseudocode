/*
 * XREFs of ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E9280
 * Callers:
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01E93E8 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9540 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0018888 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C0042130 (GreExtGetObjectW.c)
 *     GreSetLFONTOwner @ 0x1C00CDC80 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(HBRUSH a1, HFONT *a2, __int64 a3, INT a4)
{
  unsigned __int8 v4; // bl
  HFONT FontIndirectW; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  INT a; // [rsp+20h] [rbp-88h] BYREF
  INT v12; // [rsp+24h] [rbp-84h]

  v4 = 0;
  *a2 = 0LL;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, (unsigned __int16 *)&a) )
  {
    a = EngMulDiv(a, a4, 96);
    v12 = EngMulDiv(v12, a4, 96);
    FontIndirectW = (HFONT)GreCreateFontIndirectW((__int64)&a);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      LOBYTE(v8) = 10;
      HmgMarkUndeletable(FontIndirectW, v8);
      GreSetLFONTOwner((__int64)*a2, 0, v9);
      return 1;
    }
  }
  return v4;
}
