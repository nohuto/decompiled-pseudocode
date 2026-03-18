/*
 * XREFs of ??$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z @ 0x1C007EEE0
 * Callers:
 *     ?CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C007EC7C (-CitpContextStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z @ 0x1C007EEF8 (-CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z.c)
 */

void __fastcall CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(struct _CIT_BITMAP *a1, struct _CIT_BITMAP *a2)
{
  CitpBitmapInitialize(a1, a2, uMultiplier);
}
