/*
 * XREFs of ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011C70 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180011DE4 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180011F48 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800120AC (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x1800121F8 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180014FC0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18000AE50 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z @ 0x18001356C (-GetApplication@CApplicationManager@@QEAAJPEBGKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x180013A04 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014C04 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsMuted@@YAHK@Z @ 0x18001C530 (-TsSessionIdIsMuted@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::Register(CApplicationManager *this, struct CProcess *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  int Application; // ebx
  UINT32 cData; // [rsp+28h] [rbp-59h]
  int v9; // [rsp+38h] [rbp-49h] BYREF
  int v10; // [rsp+3Ch] [rbp-45h] BYREF
  struct CApplication *v11; // [rsp+40h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-39h] BYREF
  char v13; // [rsp+50h] [rbp-31h]
  __int64 v14; // [rsp+58h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  const char *v16; // [rsp+88h] [rbp+7h]
  int v17; // [rsp+90h] [rbp+Fh]
  int v18; // [rsp+94h] [rbp+13h]
  int *v19; // [rsp+98h] [rbp+17h]
  int v20; // [rsp+A0h] [rbp+1Fh]
  int v21; // [rsp+A4h] [rbp+23h]
  int *v22; // [rsp+A8h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+33h]

  v14 = -2LL;
  v9 = 0;
  v11 = 0LL;
  v10 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_QWORD *)a2 + 28) )
  {
    Application = CApplicationManager::GetApplication(
                    this,
                    *((const unsigned __int16 **)a2 + 23),
                    *((_DWORD *)a2 + 43),
                    &v11,
                    1,
                    &v10);
    v9 = Application;
    if ( Application < 0 || (Application = CApplication::LinkProcess(v11, a2), v9 = Application, Application < 0) )
    {
      if ( !v10 )
        goto LABEL_9;
      CApplicationManager::RemoveApplication(this, &v11);
    }
    else if ( (unsigned int)TsSessionIdIsMuted(*((_DWORD *)a2 + 43)) )
    {
      CApplicationManager::SilenceAndRevokePLMExemption(this, v11);
    }
  }
  Application = v9;
LABEL_9:
  if ( Application < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x16u,
        &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids,
        Application);
      Application = v9;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v16 = "__FUNC__";
      v17 = 9;
      v18 = 0;
      v10 = 841;
      v19 = &v10;
      v20 = 4;
      v21 = 0;
      v22 = &v9;
      v23 = 4;
      v24 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v4, v5, cData, &pData);
      Application = v9;
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Application;
}
