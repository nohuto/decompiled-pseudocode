/*
 * XREFs of ?Release@CResource@@UEAAKXZ @ 0x18008DDD0
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18003AD94 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B02F0 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 * Callees:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002FA20 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 *     ??_GCRenderData@@MEAAPEAXI@Z @ 0x18004DBA0 (--_GCRenderData@@MEAAPEAXI@Z.c)
 *     ??_ECEffectGroup@@MEAAPEAXI@Z @ 0x180055F00 (--_ECEffectGroup@@MEAAPEAXI@Z.c)
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x180089FA0 (--_ECExpression@@UEAAPEAXI@Z.c)
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x18008CC30 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::Release(CResource *this)
{
  unsigned __int32 v1; // ebx
  CEffectGroup *(__fastcall *v3)(CEffectGroup *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CEffectGroup *(__fastcall **)(CEffectGroup *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CExpression::`vector deleting destructor' )
    {
      CExpression::`vector deleting destructor'(this, 1);
    }
    else if ( v3 == CRgnGeometry::`scalar deleting destructor' )
    {
      CRgnGeometry::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CPropertyBag::`scalar deleting destructor' )
    {
      CPropertyBag::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CRenderData::`scalar deleting destructor' )
    {
      CRenderData::`scalar deleting destructor'(this, 1);
    }
    else if ( v3 == CEffectGroup::`vector deleting destructor' )
    {
      CEffectGroup::`vector deleting destructor'(this, 1);
    }
    else
    {
      v3(this, 1);
    }
  }
  return v1;
}
