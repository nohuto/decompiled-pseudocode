/*
 * XREFs of ?Release@CResource@@UEAAKXZ @ 0x180048180
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x18005CE68 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??_ECTranslateTransform@@MEAAPEAXI@Z @ 0x180017F00 (--_ECTranslateTransform@@MEAAPEAXI@Z.c)
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x18003C710 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x180047E00 (--_GCAnimation@@UEAAPEAXI@Z.c)
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18004E680 (--_GCRenderData@@MEAAPEAXI@Z.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18006F8A0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CResource::Release(CResource *this)
{
  unsigned __int32 v1; // esi
  CTranslateTransform *(__fastcall *v3)(CTranslateTransform *, char); // rdi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CTranslateTransform *(__fastcall **)(CTranslateTransform *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CAnimation::`scalar deleting destructor' )
    {
      CAnimation::`scalar deleting destructor'(this, 1);
    }
    else if ( (char *)v3 == (char *)CRgnGeometry::`scalar deleting destructor' )
    {
      CRgnGeometry::`scalar deleting destructor'(this, 1u);
    }
    else if ( v3 == CEffectGroup::`vector deleting destructor' )
    {
      CEffectGroup::`vector deleting destructor'(this, 1);
    }
    else if ( (char *)v3 == (char *)CRenderData::`scalar deleting destructor' )
    {
      CRenderData::`scalar deleting destructor'(this, 1u);
    }
    else if ( v3 == CTranslateTransform::`vector deleting destructor' )
    {
      CTranslateTransform::`vector deleting destructor'(this, 1);
    }
    else
    {
      v3(this, 1);
    }
  }
  return v1;
}
