/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x18002D818
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18000592C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z @ 0x180008D10 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBGKW4HOSTED_APP_CHANGED@@@Z.c)
 * Callees:
 *     ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180007FC8 (-OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x18002D6AC (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x18002D790 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x1800411D4 (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        unsigned __int16 *a2,
        int a3,
        int a4)
{
  CHostedAppInteractivityManager *v7; // rcx
  int CumulativeHostedAppInteractivity; // ebx
  CHostedAppInteractivityManager *v9; // rcx
  int v10; // edi
  int v12; // [rsp+20h] [rbp-30h] BYREF
  CHostedAppInteractivity *v13[2]; // [rsp+28h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  int v17; // [rsp+74h] [rbp+24h]

  v17 = HIDWORD(this);
  v13[1] = (CHostedAppInteractivity *)-2LL;
  v13[0] = 0LL;
  v12 = 0;
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&unk_1800E8430;
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v7,
                                       a2,
                                       a3,
                                       v13);
  if ( CumulativeHostedAppInteractivity < 0 )
    goto LABEL_12;
  CHostedAppInteractivity::OnInteractivityNotification(v13[0], a4, &v12, &v16);
  v10 = v16;
  if ( v12 )
  {
    CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::QueueHostedAppInteractivityChangedWorkItem(
                                         v9,
                                         a2,
                                         a3,
                                         v16);
    if ( CumulativeHostedAppInteractivity < 0 )
      goto LABEL_12;
  }
  if ( !v10 )
    CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v9, v13[0]);
  if ( CumulativeHostedAppInteractivity < 0 )
  {
LABEL_12:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        16LL,
        &WPP_2446938fd9ab7f1a8cd6a05396c644b3_Traceguids,
        (unsigned int)CumulativeHostedAppInteractivity);
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
