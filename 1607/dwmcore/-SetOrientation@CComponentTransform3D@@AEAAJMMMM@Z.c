/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x180023864
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001B5F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x180023D20 (-ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x180149520 (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  unsigned int v5; // edi
  unsigned int v8; // edx
  int v9; // eax
  _DWORD v10[12]; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  if ( *((float *)this + 65) != a2
    || *((float *)this + 66) != a3
    || *((float *)this + 67) != a4
    || *((float *)this + 68) != a5 )
  {
    *((float *)this + 65) = a2;
    *((float *)this + 66) = a3;
    *((float *)this + 67) = a4;
    *((float *)this + 68) = a5;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    *(float *)v10 = a2;
    *(float *)&v10[1] = a3;
    *(float *)&v10[2] = a4;
    *(float *)&v10[3] = a5;
    v9 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(this, v8, (const struct D2DQuaternion *)v10);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x17Bu);
    else
      CResource::InvalidateAnimationSources(this, 0x14u);
  }
  return v5;
}
