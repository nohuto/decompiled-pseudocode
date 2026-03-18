/*
 * XREFs of ?SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800959E0
 * Callers:
 *     ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180021780 (-SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1800957F8 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 * Callees:
 *     ?NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180023EC8 (-NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetBottomRightRadiusX(CRectangleGeometry *this, float a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( *((float *)this + 54) != a2 )
  {
    *((float *)this + 54) = a2;
    CResource::NotifyOnChanged(this, 0, 0LL);
    v5 = CPropertyChangeResource::NotifyFloatPropertyChanged(this, 11LL, a2);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x269u);
    else
      CResource::InvalidateAnimationSources(this, 11);
  }
  return v2;
}
