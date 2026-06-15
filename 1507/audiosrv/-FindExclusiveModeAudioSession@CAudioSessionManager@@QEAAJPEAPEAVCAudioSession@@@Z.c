/*
 * XREFs of ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x18007F48C
 * Callers:
 *     ?RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BE3C (-RetryGetSaDeviceForPackagedApp@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@P.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800924F8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSa.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000B598 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800798B0 (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ?FindNextNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@PEAV312@@Z @ 0x18007F540 (-FindNextNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

__int64 __fastcall CAudioSessionManager::FindExclusiveModeAudioSession(
        CAudioSessionManager *this,
        struct CAudioSession **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  struct CAudioSession *v5; // rdi
  __int64 i; // rax
  __int64 v7; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  for ( i = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
        ;
        i = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::FindNextNode(
              (char *)this + 64,
              v7) )
  {
    v7 = i;
    if ( !i )
      break;
    v5 = *(struct CAudioSession **)(i + 80);
    if ( v5 && (unsigned int)CAudioSession::IsExclusiveModeSession(*(CAudioSession **)(i + 80)) )
    {
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v5 + 8LL))(v5);
      break;
    }
    v5 = 0LL;
  }
  LeaveCriticalSection(v2);
  *a2 = v5;
  return v5 == 0LL ? 0x80070490 : 0;
}
