/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x18001D188
 * Callers:
 *     AudioVolumeAddMasterVolumeNotification @ 0x180032340 (AudioVolumeAddMasterVolumeNotification.c)
 * Callees:
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      30LL,
      &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids,
      this,
      a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 8), a2);
}
