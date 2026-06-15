/*
 * XREFs of ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011C70
 * Callers:
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E5C0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E7FC (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012510 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterSession(
        CApplicationManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CApplicationManager *v5; // rsi
  int v6; // ebx
  const GUID *v7; // r8
  const GUID *v8; // r9
  UINT32 v10; // [rsp+28h] [rbp-49h]
  int v11; // [rsp+38h] [rbp-39h] BYREF
  int v12; // [rsp+3Ch] [rbp-35h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-31h] BYREF
  char v14; // [rsp+48h] [rbp-29h]
  __int64 v15; // [rsp+50h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  const char *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  int *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  int *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]

  v15 = -2LL;
  v5 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = CApplicationManager::Register(v5, a2);
  v11 = v6;
  if ( v6 >= 0 )
  {
    v6 = CProcess::AddSession(a2, a3);
    v11 = v6;
    if ( v6 >= 0 )
      goto LABEL_10;
    CApplicationManager::Unregister(v5, a2);
    v6 = v11;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v6);
    v6 = v11;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v17 = "__FUNC__";
    v18 = 9;
    v19 = 0;
    v12 = 564;
    v20 = &v12;
    v21 = 4;
    v22 = 0;
    v23 = &v11;
    v24 = 4;
    v25 = 0;
    TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v7, v8, v10, &pData);
    v6 = v11;
  }
LABEL_10:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
