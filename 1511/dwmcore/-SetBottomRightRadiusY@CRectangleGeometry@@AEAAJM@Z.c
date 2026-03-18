/*
 * XREFs of ?SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065570
 * Callers:
 *     ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001D7F0 (-SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180065100 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 * Callees:
 *     ?NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180064F60 (-NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetBottomRightRadiusY(CRectangleGeometry *this, float a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( *((float *)this + 37) != a2 )
  {
    *((float *)this + 37) = a2;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v5 = CPropertyChangeResource::NotifyFloatPropertyChanged(this, 11LL, a2);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x255u);
  }
  return v2;
}
