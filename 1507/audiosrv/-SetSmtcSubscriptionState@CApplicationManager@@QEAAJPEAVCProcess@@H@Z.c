/*
 * XREFs of ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@H@Z @ 0x1800025F4
 * Callers:
 *     PbmSetSmtcSubscriptionState @ 0x18000557C (PbmSetSmtcSubscriptionState.c)
 * Callees:
 *     ?SetHasSmtcSubscription@CProcess@@UEAAXH@Z @ 0x180003930 (-SetHasSmtcSubscription@CProcess@@UEAAXH@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CD88 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetSmtcSubscriptionState(
        CApplicationManager *this,
        struct CProcess *a2,
        int a3)
{
  CApplicationManager *v5; // rbx
  int v6; // ebx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  v5 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v8,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24),
    a3);
  v6 = CApplicationManager::Register(v5, a2);
  if ( v6 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        20LL,
        &WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        (unsigned int)v6,
        -2);
    }
  }
  else
  {
    CProcess::SetHasSmtcSubscription((struct CProcess *)((char *)a2 + 16), a3);
  }
  if ( v8[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v8);
  return (unsigned int)v6;
}
