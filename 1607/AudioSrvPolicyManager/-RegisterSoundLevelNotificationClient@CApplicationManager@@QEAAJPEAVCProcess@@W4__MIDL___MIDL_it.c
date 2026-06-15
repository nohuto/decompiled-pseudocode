/*
 * XREFs of ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180011DE4
 * Callers:
 *     PbmRegisterPlaybackManagerNotifications @ 0x180018750 (PbmRegisterPlaybackManagerNotifications.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000EBFC (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterSoundLevelNotificationClient(__int64 a1, struct CProcess *a2, int a3)
{
  CApplicationManager *v5; // rbx
  int v6; // ebx
  const GUID *v7; // r8
  const GUID *v8; // r9
  UINT32 v10; // [rsp+28h] [rbp-39h]
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-21h] BYREF
  char v14; // [rsp+48h] [rbp-19h]
  __int64 v15; // [rsp+50h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  const char *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]

  v15 = -2LL;
  v5 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = CApplicationManager::Register(v5, a2);
  v11 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v6);
      v6 = v11;
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v17 = "__FUNC__";
      v18 = 9;
      v19 = 0;
      v12 = 617;
      v20 = &v12;
      v21 = 4;
      v22 = 0;
      v23 = &v11;
      v24 = 4;
      v25 = 0;
      TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v7, v8, v10, &pData);
      v6 = v11;
    }
  }
  else
  {
    CProcess::RegisteredForSoundLevelNotifications((__int64)a2, 1, a3);
    v6 = v11;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
