/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18012F8B8
 * Callers:
 *     ?ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS@@@Z @ 0x1800F698C (-ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSF.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012F6F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180064F60 (-NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAngle(CComponentTransform3D *this, float a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = 0;
  if ( *((double *)this + 27) != a2 )
  {
    *((double *)this + 27) = a2;
    CResource::NotifyOnChanged(this, 0, 0LL);
    v4 = CPropertyChangeResource::NotifyFloatPropertyChanged(this, 12LL, a2);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x143u);
  }
  return v2;
}
