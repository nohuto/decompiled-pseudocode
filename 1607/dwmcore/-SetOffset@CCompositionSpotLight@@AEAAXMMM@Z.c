/*
 * XREFs of ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1801513DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180151530 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CCompositionSpotLight::SetOffset(CCompositionSpotLight *this, float a2, float a3, float a4)
{
  if ( *((float *)this + 50) != a2 || *((float *)this + 51) != a3 || *((float *)this + 52) != a4 )
  {
    *((float *)this + 50) = a2;
    *((float *)this + 51) = a3;
    *((float *)this + 52) = a4;
    CResource::NotifyOnChanged(this, 0, 0LL);
    CResource::InvalidateAnimationSources(this, 9);
  }
}
