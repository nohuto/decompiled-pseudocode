/*
 * XREFs of ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015F10
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x180011700 (-GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaybackManager::OnStateChanged(
        CPlaybackManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  int ProcessFromSessionInfo; // eax
  struct CProcess *v5; // rbx
  struct CProcess *v6; // rbx
  struct CProcess *v8; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  if ( !*((_DWORD *)this + 2) )
  {
    v8 = 0LL;
    if ( a4 == AudioSessionStateExpired || a3 == AudioSessionStateExpired )
    {
      ProcessFromSessionInfo = CApplicationManager::GetProcessFromSessionInfo(this, a2, &v8);
      v5 = v8;
      if ( ProcessFromSessionInfo >= 0 )
      {
        v10 = 0;
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)v8 + 120);
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        if ( v10 )
          LeaveCriticalSection(lpCriticalSection);
      }
      if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
      {
        v6 = v8;
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v8 + 32LL))(v8);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
      }
    }
  }
  return 0LL;
}
