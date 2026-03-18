/*
 * XREFs of ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x18012FBA8
 * Callers:
 *     ?ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS@@@Z @ 0x1800F698C (-ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSF.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012F6F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x18012C5E0 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetTransformMatrix(CComponentTransform3D *this, const struct D2DMatrix *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx

  *(_OWORD *)((char *)this + 248) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 264) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 280) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 296) = *((_OWORD *)a2 + 3);
  CResource::NotifyOnChanged(this, 0, 0LL);
  v5 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(this, v4, a2);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x155u);
  return v6;
}
