/*
 * XREFs of ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01E8DB8
 * Callers:
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E8F1C (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E8C50 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

void __fastcall EnsureScaledFontAndGetDimensions(HSURF a1, HFONT *a2, __int64 a3, INT a4, int *a5, int *a6)
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
