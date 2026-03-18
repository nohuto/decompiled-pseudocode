/*
 * XREFs of ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002392C
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001B5F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETSCALE@@@Z @ 0x180023DC8 (-ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180023EFC (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetScale(CComponentTransform3D *this, float a2, float a3, float a4)
{
  unsigned int v4; // edi
  int v7; // eax
  _DWORD v8[4]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  if ( *((float *)this + 62) != a2 || *((float *)this + 63) != a3 || *((float *)this + 64) != a4 )
  {
    *((float *)this + 62) = a2;
    *((float *)this + 63) = a3;
    *((float *)this + 64) = a4;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    *(float *)v8 = a2;
    *(float *)&v8[1] = a3;
    *(float *)&v8[2] = a4;
    v7 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x16u, (const struct D2DVector3 *)v8);
    v4 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x159u);
    else
      CResource::InvalidateAnimationSources(this, 0x16u);
  }
  return v4;
}
