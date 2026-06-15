/*
 * XREFs of ?IsAnAlwaysAudibleStreamType@CWindowsPolicyManager@@UEAAHK@Z @ 0x18001B890
 * Callers:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x180001554 (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowsPolicyManager::IsAnAlwaysAudibleStreamType(CWindowsPolicyManager *this, int a2)
{
  return a2 == 14 || a2 == 17;
}
