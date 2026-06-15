/*
 * XREFs of ?GetProcess@CAudioSession@@UEAAJPEAPEAUIAudioProcess@@@Z @ 0x1800289A0
 * Callers:
 *     ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x18001D5A0 (-GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002B550 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::GetProcess(CAudioSession *this, struct IAudioProcess **a2)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 108) + 8LL))(*((_QWORD *)this + 108));
    *a2 = (struct IAudioProcess *)*((_QWORD *)this + 108);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
