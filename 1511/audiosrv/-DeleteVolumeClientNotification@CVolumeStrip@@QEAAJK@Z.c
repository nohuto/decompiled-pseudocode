/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x18000F40C
 * Callers:
 *     AudioVolumeDeleteMasterVolumeNotification @ 0x18003A670 (AudioVolumeDeleteMasterVolumeNotification.c)
 * Callees:
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_209d1f8e26de95f2e61304f36bddda66_Traceguids, this, a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::RemoveInterface((LPCRITICAL_SECTION)((char *)this + 8));
}
