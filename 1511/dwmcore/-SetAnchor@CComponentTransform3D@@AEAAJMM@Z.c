/*
 * XREFs of ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18012F398
 * Callers:
 *     ?ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCOMPONENTS@@@Z @ 0x1800F698C (-ProcessSetComponents@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSF.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012F6F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180064DD0 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CComponentTransform3D::SetAnchor(CComponentTransform3D *this, double a2, double a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  unsigned __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((double *)this + 18) != *(float *)&a2 || *((double *)this + 19) != *(float *)&a3 )
  {
    *((double *)this + 18) = *(float *)&a2;
    *((double *)this + 19) = *(float *)&a3;
    CResource::NotifyOnChanged(this, 0, 0LL);
    v7 = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
    v5 = CPropertyChangeResource::NotifyVector2PropertyChanged(this, 19LL, (const struct D2DVector2 *)&v7);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xBCu);
  }
  return v3;
}
