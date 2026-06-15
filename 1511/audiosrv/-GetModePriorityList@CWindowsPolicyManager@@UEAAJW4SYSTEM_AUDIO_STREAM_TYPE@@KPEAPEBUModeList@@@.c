/*
 * XREFs of ?GetModePriorityList@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@KPEAPEBUModeList@@@Z @ 0x18001B8D0
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetModePriorityList(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // rcx

  if ( !a2 )
  {
    if ( a3 < 0x15 )
      goto LABEL_3;
    return 2147942487LL;
  }
  if ( a2 != 1 || a3 >= 0x15 )
    return 2147942487LL;
LABEL_3:
  if ( !a4 )
    return 2147500035LL;
  if ( a2 )
    v4 = (__int64)*(&off_1800C6AE0 + a3);
  else
    v4 = (__int64)*(&off_1800B8CB0 + a3);
  *a4 = v4;
  return 0LL;
}
