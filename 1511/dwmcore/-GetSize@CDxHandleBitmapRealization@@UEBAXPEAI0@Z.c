/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800325D0
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800328A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetSize@CD2DBitmap@@UEBAXPEAI0@Z @ 0x180030890 (-GetSize@CD2DBitmap@@UEBAXPEAI0@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::GetSize(
        CDxHandleBitmapRealization *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rsi
  void (__fastcall *v4)(CD2DBitmap *, unsigned int *, unsigned int *); // rbp

  v3 = *((_QWORD *)this + 43);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(CD2DBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)(v3 + 104) + 48LL);
    if ( v4 == CD2DBitmap::GetSize )
      CD2DBitmap::GetSize((CD2DBitmap *)(v3 + 104), a2, a3);
    else
      v4((CD2DBitmap *)(v3 + 104), a2, a3);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
}
