/*
 * XREFs of ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180064DAC
 * Callers:
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180064DD0 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180064E8C (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180064F60 (-NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x18012C5E0 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x18012C6CC (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x180065004 (-ShouldNotify@CNotificationResource@@IEAA_NXZ.c)
 */

unsigned __int8 __fastcall CPropertyChangeResource::ShouldNotify(CPropertyChangeResource *this)
{
  bool ShouldNotify; // al
  unsigned int v2; // edx
  __int64 v3; // rcx
  char v4; // r8
  int v6; // eax

  ShouldNotify = CNotificationResource::ShouldNotify(this);
  v4 = 0;
  if ( ShouldNotify )
  {
    v6 = *(_DWORD *)(v3 + 48);
    return _bittest(&v6, v2);
  }
  return v4;
}
