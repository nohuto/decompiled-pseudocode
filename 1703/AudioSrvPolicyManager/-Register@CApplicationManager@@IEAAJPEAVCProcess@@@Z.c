/*
 * XREFs of ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011110 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800111F8 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x1800112CC (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800113A0 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x180011460 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180013950 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AB60 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x1800122B4 (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800126B8 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800134DC (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x18001A4E8 (-TsSessionIdIsMuted@@YAHK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Register(CApplicationManager *this, struct CProcess *a2)
{
  int Application; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp-10h]
  int v8; // [rsp+70h] [rbp+20h] BYREF
  struct CApplication *v9; // [rsp+78h] [rbp+28h] BYREF

  Application = 0;
  v9 = 0LL;
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_QWORD *)a2 + 28) )
  {
    Application = CApplicationManager::GetApplication(
                    this,
                    *((const unsigned __int16 **)a2 + 23),
                    *((_DWORD *)a2 + 43),
                    &v9,
                    1,
                    &v8);
    if ( Application < 0 || (Application = CApplication::LinkProcess(v9, a2), Application < 0) )
    {
      if ( v8 )
        CApplicationManager::RemoveApplication(this, &v9);
    }
    else if ( (unsigned int)TsSessionIdIsMuted(*((_DWORD *)a2 + 43)) )
    {
      CApplicationManager::SilenceAndRevokePLMExemption(this, v9);
    }
    if ( Application < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x16u,
          &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids,
          Application);
      }
      AudPolicyLogError("CApplicationManager::Register", 841, Application);
    }
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Application;
}
