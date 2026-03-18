/*
 * XREFs of ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01DFBD0
 * Callers:
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01DFC64 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     CreateScaledFont @ 0x1C01DFEC4 (CreateScaledFont.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

void __fastcall EnsureScaledFontAndGetDimensions(HFONT a1, HFONT *a2, __int64 a3, __int64 a4, int *a5, int *a6)
{
  if ( !*a2 && (unsigned int)CreateScaledFont(a1, a2, a3, a4) && a5 )
  {
    if ( a6 )
    {
      GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
      *a5 = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, a6);
      GreSelectFontInternal(*(HDC *)(gpDispInfo + 32LL));
    }
  }
}
