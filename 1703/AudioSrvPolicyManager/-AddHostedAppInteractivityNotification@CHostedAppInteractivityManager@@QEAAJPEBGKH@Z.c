/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x1800155B0
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180015258 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180017280 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800156DC (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x180015818 (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x1800158D0 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  CHostedAppInteractivityManager *v7; // rcx
  CHostedAppInteractivityManager *v8; // rcx
  int CumulativeHostedAppInteractivity; // ebx
  struct CHostedAppInteractivity *v10; // rdi
  int v11; // edx
  int v12; // esi
  BOOL v13; // r9d
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v16; // [rsp+30h] [rbp-28h]
  struct CHostedAppInteractivity *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&unk_180031D10;
  v16 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v7,
                                       a2,
                                       a3,
                                       &v17);
  if ( CumulativeHostedAppInteractivity < 0 )
    goto LABEL_13;
  v10 = v17;
  v11 = *((_DWORD *)v17 + 3);
  if ( a4 )
  {
    v8 = (CHostedAppInteractivityManager *)(unsigned int)(v11 + 1);
    *((_DWORD *)v17 + 3) = (_DWORD)v8;
  }
  else if ( v11 )
  {
    *((_DWORD *)v17 + 3) = v11 - 1;
  }
  v12 = *((_DWORD *)v10 + 3);
  v13 = v12 != 0;
  if ( (v11 != 0) == v13
    || (CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                             v8,
                                             a2,
                                             a3,
                                             v13),
        CumulativeHostedAppInteractivity >= 0) )
  {
    if ( !v12 )
      CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v8, v10);
  }
  else
  {
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        &WPP_396aba38fe233c5efaf9c5dc644ed068_Traceguids,
        CumulativeHostedAppInteractivity);
    }
    AudPolicyLogError(
      "CHostedAppInteractivityManager::AddHostedAppInteractivityNotification",
      405,
      CumulativeHostedAppInteractivity);
  }
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
