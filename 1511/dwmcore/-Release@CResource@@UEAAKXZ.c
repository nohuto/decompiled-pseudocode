/*
 * XREFs of ?Release@CResource@@UEAAKXZ @ 0x1800856B0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180083E88 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800944E8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800AB9D0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x18004E490 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x180064AB0 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_GCScaleTransform@@MEAAPEAXI@Z @ 0x180065FA0 (--_GCScaleTransform@@MEAAPEAXI@Z.c)
 *     ??_GCAnimation@@UEAAPEAXI@Z @ 0x1800850E0 (--_GCAnimation@@UEAAPEAXI@Z.c)
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18009E5A0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 */

__int64 __fastcall CResource::Release(CResource *this)
{
  unsigned __int32 v1; // esi
  CScaleTransform *(__fastcall *v3)(CScaleTransform *, char); // rdi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CScaleTransform *(__fastcall **)(CScaleTransform *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CRgnGeometry::`scalar deleting destructor' )
    {
      CRgnGeometry::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CAnimation::`scalar deleting destructor' )
    {
      CAnimation::`scalar deleting destructor'(this, 1);
    }
    else if ( (char *)v3 == (char *)CRenderData::`scalar deleting destructor' )
    {
      CRenderData::`scalar deleting destructor'(this, 1u);
    }
    else if ( v3 == CEffectGroup::`vector deleting destructor' )
    {
      CEffectGroup::`vector deleting destructor'(this, 1);
    }
    else if ( v3 == CScaleTransform::`scalar deleting destructor' )
    {
      CScaleTransform::`scalar deleting destructor'(this, 1);
    }
    else
    {
      v3(this, 1);
    }
  }
  return v1;
}
