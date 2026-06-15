/*
 * XREFs of ?IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z @ 0x180021D90
 * Callers:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800044A0 (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowsPolicyManager::IsAnAlwaysAudibleStreamType(CWindowsPolicyManager *this, int a2)
{
  return a2 == 14 || a2 == 17;
}
