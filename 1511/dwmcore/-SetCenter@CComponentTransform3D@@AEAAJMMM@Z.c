/*
 * XREFs of ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012F468
 * Callers:
 *     ?ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS@@@Z @ 0x1800F698C (-ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSF.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012F6F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180064E8C (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetCenter(CComponentTransform3D *this, float a2, float a3, float a4)
{
  unsigned int v4; // edi
  int v6; // eax
  _DWORD v8[4]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  if ( *((double *)this + 15) != a2 || *((double *)this + 16) != a3 || *((double *)this + 17) != a4 )
  {
    *((double *)this + 15) = a2;
    *((double *)this + 16) = a3;
    *((double *)this + 17) = a4;
    CResource::NotifyOnChanged(this, 0, 0LL);
    *(float *)v8 = a2;
    *(float *)&v8[1] = a3;
    *(float *)&v8[2] = a4;
    v6 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 18LL, (const struct D2DVector3 *)v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xD8u);
  }
  return v4;
}
