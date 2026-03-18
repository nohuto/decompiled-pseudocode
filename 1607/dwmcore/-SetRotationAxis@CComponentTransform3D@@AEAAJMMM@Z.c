/*
 * XREFs of ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x1800239E4
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001B5F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z @ 0x180023D90 (-ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRAN.c)
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x18001AC88 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180023EFC (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAxis(CComponentTransform3D *this, float a2, float a3, float a4)
{
  const struct D2DVector3 *v4; // rsi
  unsigned int v5; // edi
  int v8; // eax

  v4 = (CComponentTransform3D *)((char *)this + 236);
  v5 = 0;
  if ( *((float *)this + 59) != a2 || *((float *)this + 60) != a3 || *((float *)this + 61) != a4 )
  {
    *((float *)this + 60) = a3;
    *((float *)this + 61) = a4;
    *(float *)v4 = a2;
    D3DXVec3Normalize((CComponentTransform3D *)((char *)this + 236), (CComponentTransform3D *)((char *)this + 236));
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v8 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 0x15u, v4);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x13Au);
    else
      CResource::InvalidateAnimationSources(this, 0x15u);
  }
  return v5;
}
