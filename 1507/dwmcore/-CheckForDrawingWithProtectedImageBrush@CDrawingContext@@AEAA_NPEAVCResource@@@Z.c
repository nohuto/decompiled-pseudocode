/*
 * XREFs of ?CheckForDrawingWithProtectedImageBrush@CDrawingContext@@AEAA_NPEAVCResource@@@Z @ 0x180027BE8
 * Callers:
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18002D8C0 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083E60 (-IsOfType@CSolidColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CImageBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180085BE0 (-IsOfType@CImageBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CDrawingContext::CheckForDrawingWithProtectedImageBrush(
        CDrawingContext *this,
        struct CResource *a2,
        __int64 a3)
{
  char v3; // di
  __int64 (__fastcall *v6)(struct CResource *, __int64); // rsi
  char v7; // al

  v3 = 0;
  v6 = *(__int64 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v6 == (char *)CSolidColorBrush::IsOfType )
  {
    v7 = CSolidColorBrush::IsOfType(a2, 71LL, a3);
  }
  else if ( (char *)v6 == (char *)CImageBrush::IsOfType )
  {
    v7 = CImageBrush::IsOfType(a2, 71LL);
  }
  else
  {
    v7 = v6(a2, 71LL);
  }
  if ( v7 )
  {
    if ( *((_BYTE *)a2 + 364) )
    {
      *((_BYTE *)this + 5938) = 1;
      v3 = 1;
    }
    if ( *((_BYTE *)a2 + 365) )
    {
      *((_BYTE *)this + 5940) = 1;
      return 1;
    }
  }
  return v3;
}
