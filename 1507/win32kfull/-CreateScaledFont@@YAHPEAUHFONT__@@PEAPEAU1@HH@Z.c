/*
 * XREFs of ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E8C50
 * Callers:
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01E8DB8 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8F1C (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0014EE0 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C005684C (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00FCA30 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(HSURF a1, HFONT *a2, __int64 a3, INT a4)
{
  unsigned __int8 v4; // bl
  HFONT FontIndirectW; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  INT a; // [rsp+20h] [rbp-88h] BYREF
  INT v12; // [rsp+24h] [rbp-84h]

  v4 = 0;
  *a2 = 0LL;
  if ( (unsigned int)GreExtGetObjectW(a1, 92, (unsigned __int16 *)&a) )
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
