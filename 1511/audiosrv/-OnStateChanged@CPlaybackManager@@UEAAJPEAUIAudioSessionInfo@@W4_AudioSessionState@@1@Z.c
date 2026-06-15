/*
 * XREFs of ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002F270
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001B540 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x18001D5A0 (-GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 */

__int64 __fastcall CPlaybackManager::OnStateChanged(
        CPlaybackManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  int ProcessFromSessionInfo; // eax
  struct CProcess *v6; // rbx
  struct CProcess *v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  struct CProcess *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v9 = 0LL;
    if ( a4 == AudioSessionStateExpired || a3 == AudioSessionStateExpired )
    {
      ProcessFromSessionInfo = CApplicationManager::GetProcessFromSessionInfo(this, a2, &v9);
      v6 = v9;
      if ( ProcessFromSessionInfo >= 0 )
      {
        v8 = 0;
        v7 = (struct CProcess *)((char *)v9 + 120);
        ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v7);
        if ( v8 )
          ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v7);
      }
      if ( v6 )
        CUnknown::Release(v6);
    }
  }
  return 0LL;
}
