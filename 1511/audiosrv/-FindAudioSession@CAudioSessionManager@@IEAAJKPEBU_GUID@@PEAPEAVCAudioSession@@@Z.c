/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x18007A5B4
 * Callers:
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x18007B214 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800025A8 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x18007A760 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        int a2,
        const struct _GUID *a3,
        struct CAudioSession **a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  struct CAudioSession *v8; // rsi
  __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // rbp

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
        ;
        i = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
              (char *)this + 64,
              v11) )
  {
    v11 = i;
    if ( !i )
      break;
    v8 = *(struct CAudioSession **)(i + 80);
    if ( v8 && (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 108) + 48LL))(*((_QWORD *)v8 + 108)) == a2 )
    {
      v10 = *((_QWORD *)v8 + 101) - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
      if ( !v10 )
        v10 = *((_QWORD *)v8 + 102) - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
      if ( !v10 )
      {
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v8 + 8LL))(v8);
        break;
      }
    }
    v8 = 0LL;
  }
  LeaveCriticalSection(v4);
  *a4 = v8;
  return v8 == 0LL ? 0x80070002 : 0;
}
