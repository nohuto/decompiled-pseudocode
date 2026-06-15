/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z @ 0x180021DB0
 * Callers:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800044A0 (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        unsigned int a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x11 )
  {
    v2 = 147504;
    if ( _bittest(&v2, a2) )
      return 0;
  }
  return result;
}
