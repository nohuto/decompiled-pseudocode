/*
 * XREFs of ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x180151494
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180151530 (-SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CCompositionSpotLight::SetOuterConeColor(
        CCompositionSpotLight *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  if ( *((float *)this + 62) != a2
    || *((float *)this + 63) != a3
    || *((float *)this + 64) != a4
    || *((float *)this + 65) != a5 )
  {
    *((float *)this + 62) = a2;
    *((float *)this + 63) = a3;
    *((float *)this + 64) = a4;
    *((float *)this + 65) = a5;
    CResource::NotifyOnChanged(this, 0, 0LL);
    CResource::InvalidateAnimationSources(this, 12);
  }
}
