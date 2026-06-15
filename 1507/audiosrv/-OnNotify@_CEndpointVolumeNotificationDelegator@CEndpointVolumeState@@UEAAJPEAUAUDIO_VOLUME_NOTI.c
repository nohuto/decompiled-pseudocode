/*
 * XREFs of ?OnNotify@_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18009F610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::OnNotify(
        CEndpointVolumeState::_CEndpointVolumeNotificationDelegator *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)&a2->guidEventContext.Data1 - PBM_INITIATED_ENDPOINT_VOLUME_CHANGE;
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == PBM_INITIATED_ENDPOINT_VOLUME_CHANGE )
    v2 = *(_QWORD *)a2->guidEventContext.Data4 - 0x5936EC8617E85EAALL;
  if ( v2 )
  {
    if ( a2->fMasterVolume != 1.0 )
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 24LL), 1);
    if ( a2->bMuted )
      _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 1) + 28LL), 1);
  }
  return 0LL;
}
