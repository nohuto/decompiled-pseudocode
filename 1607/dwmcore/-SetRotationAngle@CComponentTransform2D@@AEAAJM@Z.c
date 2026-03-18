/*
 * XREFs of ?SetRotationAngle@CComponentTransform2D@@AEAAJM@Z @ 0x1800205A8
 * Callers:
 *     ?ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@@Z @ 0x1800208A4 (-ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRA.c)
 *     ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014EB80 (-SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180023EC8 (-NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CComponentTransform2D::SetRotationAngle(CComponentTransform2D *this, float a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( *((float *)this + 42) != a2 )
  {
    *((float *)this + 42) = a2;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v5 = CPropertyChangeResource::NotifyFloatPropertyChanged(this, 0x3EBu, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x155u);
    }
    else
    {
      CResource::InvalidateAnimationSources(this, 0x3EBu);
      CResource::InvalidateAnimationSources(this, 0x3ECu);
    }
  }
  return v2;
}
