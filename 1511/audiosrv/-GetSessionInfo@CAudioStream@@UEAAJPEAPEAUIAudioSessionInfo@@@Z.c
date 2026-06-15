/*
 * XREFs of ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x1800206B0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18002A9E0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002EB94 (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002F824 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::GetSessionInfo(CAudioStream *this, struct IAudioSessionInfo **a2)
{
  unsigned int v2; // edi
  __int64 v5; // rsi

  v2 = 0;
  if ( a2 )
  {
    v5 = *((_QWORD *)this + 7);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 7));
    *a2 = (struct IAudioSessionInfo *)*((_QWORD *)this + 7);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
