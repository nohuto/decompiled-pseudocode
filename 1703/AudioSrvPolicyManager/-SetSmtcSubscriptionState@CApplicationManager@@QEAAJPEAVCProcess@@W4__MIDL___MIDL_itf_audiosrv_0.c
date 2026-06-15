/*
 * XREFs of ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x180011460
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x180016A50 (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18000E4E0 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetSmtcSubscriptionState(__int64 a1, struct CProcess *a2, int a3, int a4)
{
  CApplicationManager *v7; // rbx
  int v8; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v7 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( a3 < 2 )
  {
    v8 = CApplicationManager::Register(v7, a2);
    if ( v8 >= 0 )
    {
      CProcess::SetHasSmtcSubscription((__int64)a2 + 16, a3, a4);
      goto LABEL_10;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v8);
  }
  AudPolicyLogError("CApplicationManager::SetSmtcSubscriptionState", 791, v8);
LABEL_10:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
