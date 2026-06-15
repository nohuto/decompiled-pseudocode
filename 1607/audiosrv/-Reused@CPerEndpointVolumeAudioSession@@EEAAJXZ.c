/*
 * XREFs of ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x180003000
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800104D0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Reused(CPerEndpointVolumeAudioSession *this)
{
  return CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL);
}
