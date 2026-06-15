/*
 * XREFs of ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x1800121F8
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x180018940 (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18000ED30 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180012358 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetSmtcSubscriptionState(__int64 a1, struct CProcess *a2, int a3, int a4)
{
  CApplicationManager *v7; // rbx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // ebx
  UINT32 v12; // [rsp+20h] [rbp-59h]
  int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-41h] BYREF
  char v16; // [rsp+40h] [rbp-39h]
  __int64 v17; // [rsp+48h] [rbp-31h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  const char *v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  int *v22; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]
  int *v25; // [rsp+90h] [rbp+17h]
  int v26; // [rsp+98h] [rbp+1Fh]
  int v27; // [rsp+9Ch] [rbp+23h]

  v17 = -2LL;
  v7 = g_ApplicationManager;
  v13 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a3 < 2 )
  {
    v10 = CApplicationManager::Register(v7, a2);
    v13 = v10;
    if ( v10 >= 0 )
    {
      CProcess::SetHasSmtcSubscription((__int64)a2 + 16, a3, a4);
      v10 = v13;
      goto LABEL_11;
    }
  }
  else
  {
    v10 = -2147024809;
    v13 = -2147024809;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v10);
    v10 = v13;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v19 = "__FUNC__";
    v20 = 9;
    v21 = 0;
    v14 = 791;
    v22 = &v14;
    v23 = 4;
    v24 = 0;
    v25 = &v13;
    v26 = 4;
    v27 = 0;
    TlgWrite((TraceLoggingHProvider)4, &unk_18002D869, v8, v9, v12, &pData);
    v10 = v13;
  }
LABEL_11:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v10;
}
