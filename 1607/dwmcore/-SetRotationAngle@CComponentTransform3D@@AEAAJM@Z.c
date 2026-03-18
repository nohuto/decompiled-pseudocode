/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18002381C
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001B5F0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@@Z @ 0x180023D64 (-ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRA.c)
 * Callees:
 *     ?NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180023EC8 (-NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAngle(CComponentTransform3D *this, float a2)
{
  unsigned int v2; // edi
  int v5; // eax

  v2 = 0;
  if ( *((float *)this + 69) != a2 )
  {
    *((float *)this + 69) = a2;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v5 = CPropertyChangeResource::NotifyFloatPropertyChanged(this, 0xCu, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x192u);
    }
    else
    {
      CResource::InvalidateAnimationSources(this, 0xCu);
      CResource::InvalidateAnimationSources(this, 0xDu);
    }
  }
  return v2;
}
