/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18012F594
 * Callers:
 *     ?ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS@@@Z @ 0x1800F698C (-ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSF.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012F6F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x18012C6CC (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  unsigned int v5; // edi
  __int64 v7; // rdx
  int v8; // eax
  _DWORD v10[12]; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  if ( *((double *)this + 20) != a2
    || *((double *)this + 21) != a3
    || *((double *)this + 22) != a4
    || *((double *)this + 23) != a5 )
  {
    *((double *)this + 20) = a2;
    *((double *)this + 21) = a3;
    *((double *)this + 23) = a5;
    *((double *)this + 22) = a4;
    CResource::NotifyOnChanged(this, 0, 0LL);
    *(float *)v10 = a2;
    *(float *)&v10[1] = a3;
    *(float *)&v10[2] = a4;
    *(float *)&v10[3] = a5;
    v8 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(this, v7, (const struct D2DQuaternion *)v10);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x12Fu);
  }
  return v5;
}
