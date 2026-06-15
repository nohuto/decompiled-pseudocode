/*
 * XREFs of ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18009F164
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x18009E200 (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F7FC (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x1800A0C90 (-SetHasSmtcSubscription@CProcess@@UEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetSmtcSubscriptionState(
        __int64 a1,
        struct CProcess *a2,
        int a3,
        unsigned int a4)
{
  CApplicationManager *v7; // rbx
  int v8; // ebx
  LPCRITICAL_SECTION v10; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v7 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v10,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  if ( a3 < 2 )
  {
    v8 = CApplicationManager::Register(v7, a2);
    if ( v8 >= 0 )
    {
      CProcess::SetHasSmtcSubscription((char *)a2 + 16, (unsigned int)a3, a4);
      goto LABEL_9;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids, v8);
  }
LABEL_9:
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return (unsigned int)v8;
}
