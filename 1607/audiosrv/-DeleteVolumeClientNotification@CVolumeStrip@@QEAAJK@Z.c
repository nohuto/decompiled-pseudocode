/*
 * XREFs of ?DeleteVolumeClientNotification@CVolumeStrip@@QEAAJK@Z @ 0x180017DA0
 * Callers:
 *     AudioVolumeDeleteMasterVolumeNotification @ 0x18002A100 (AudioVolumeDeleteMasterVolumeNotification.c)
 * Callees:
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 */

__int64 __fastcall CVolumeStrip::DeleteVolumeClientNotification(CVolumeStrip *this, int a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), 27LL, ATL::Sids::SecurityNTAuthority.SubAuthority, this, a2);
  }
  return CLockedList<CMasterVolumeNotificationProcess,1,0>::RemoveInterface((LPCRITICAL_SECTION)((char *)this + 8));
}
