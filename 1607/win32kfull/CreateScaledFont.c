/*
 * XREFs of CreateScaledFont @ 0x1C01DFEC4
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C01D9140 (GetScaledLogFontForDpi.c)
 *     ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01DFBD0 (-EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFC64 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C0060558 (GreCreateFontIndirectW.c)
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall CreateScaledFont(struct HLFONT__ *a1, __int64 *a2, __int64 a3, INT a4)
{
  unsigned __int8 v4; // bl
  __int64 FontIndirectW; // rax
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
    FontIndirectW = GreCreateFontIndirectW((__int64)&a);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      LOBYTE(v8) = 10;
      HmgMarkUndeletable(FontIndirectW, v8);
      GreSetLFONTOwner(*a2, 0, v9);
      return 1;
    }
  }
  return v4;
}
