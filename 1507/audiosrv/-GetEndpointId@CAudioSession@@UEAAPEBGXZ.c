/*
 * XREFs of ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180010D00
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180010340 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioSession::GetEndpointId(CAudioSession *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 79);
}
