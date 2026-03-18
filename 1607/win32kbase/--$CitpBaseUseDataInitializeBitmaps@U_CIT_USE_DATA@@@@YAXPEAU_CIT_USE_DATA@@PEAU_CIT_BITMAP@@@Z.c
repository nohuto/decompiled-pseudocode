/*
 * XREFs of ??$CitpBaseUseDataInitializeBitmaps@U_CIT_USE_DATA@@@@YAXPEAU_CIT_USE_DATA@@PEAU_CIT_BITMAP@@@Z @ 0x1C00F557C
 * Callers:
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F85C (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     ?CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z @ 0x1C00F5F04 (-CitpBitmapInitialize@@YAXPEAU_CIT_BITMAP@@0I@Z.c)
 */

void __fastcall CitpBaseUseDataInitializeBitmaps<_CIT_USE_DATA>(struct _CIT_BITMAP *a1, struct _CIT_BITMAP *a2)
{
  CitpBitmapInitialize(a1, a2, dword_1C011E5C4);
}
