/*
 * XREFs of ?EnsureScaledFontAndGetDimensions@@YAXPEAUHFONT__@@PEAPEAU1@HHPEAH2@Z @ 0x1C01E93E8
 * Callers:
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01E9540 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     ?CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z @ 0x1C01E9280 (-CreateScaledFont@@YAHPEAUHFONT__@@PEAPEAU1@HH@Z.c)
 */

void __fastcall EnsureScaledFontAndGetDimensions(HBRUSH a1, HFONT *a2, __int64 a3, INT a4, int *a5, int *a6)
{
  __int64 v7; // rbx

  if ( !*a2 && (unsigned int)CreateScaledFont(a1, a2, a3, a4) && a5 )
  {
    if ( a6 )
    {
      v7 = GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), (__int64)*a2);
      *a5 = GetCharDimensions(*(_QWORD *)(gpDispInfo + 32LL), 0LL, a6);
      GreSelectFont(*(_QWORD *)(gpDispInfo + 32LL), v7);
    }
  }
}
