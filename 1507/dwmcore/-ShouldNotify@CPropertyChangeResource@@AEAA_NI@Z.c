/*
 * XREFs of ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x18005D488
 * Callers:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x18005D4AC (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x18005D4DC (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x18005D520 (-ShouldNotify@CNotificationResource@@IEAA_NXZ.c)
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
