/*
 * XREFs of ?AddVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x18000F45C
 * Callers:
 *     AudioVolumeAddMasterVolumeNotification @ 0x18003A180 (AudioVolumeAddMasterVolumeNotification.c)
 * Callees:
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::AddVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, this, a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 8));
}
