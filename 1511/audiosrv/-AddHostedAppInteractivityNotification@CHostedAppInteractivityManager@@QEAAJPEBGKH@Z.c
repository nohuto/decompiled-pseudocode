/*
 * XREFs of ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBGKH@Z @ 0x180066F64
 * Callers:
 *     ?DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z @ 0x18003904C (-DestroyPickerHostContext@PickerHostContextManager@@YAXPEAVCPickerHostContext@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180037190 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBGKPEAPEAVCHostedApp.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z @ 0x180066DFC (-OnInteractivityNotification@CHostedAppInteractivity@@QEAAXHPEAH0@Z.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z @ 0x180066E58 (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBGKH@Z.c)
 *     ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x180066F18 (-RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CHostedAppInteractivityManager::AddHostedAppInteractivityNotification(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4)
{
  CHostedAppInteractivityManager *v7; // rcx
  int CumulativeHostedAppInteractivity; // ebx
  CHostedAppInteractivityManager *v9; // rcx
  int v10; // edi
  int v12; // [rsp+20h] [rbp-30h] BYREF
  CHostedAppInteractivity *v13[2]; // [rsp+28h] [rbp-28h] BYREF
  LPCRITICAL_SECTION v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  int v17; // [rsp+74h] [rbp+24h]

  v17 = HIDWORD(this);
  v13[1] = (CHostedAppInteractivity *)-2LL;
  v13[0] = 0LL;
  v12 = 0;
  v16 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v14, &stru_1800E6430);
  CumulativeHostedAppInteractivity = CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
                                       v7,
                                       a2,
                                       a3,
                                       (void ***)v13);
  if ( CumulativeHostedAppInteractivity < 0 )
    goto LABEL_9;
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
      goto LABEL_9;
  }
  if ( !v10 )
    CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(v9, (void **)v13[0]);
  if ( CumulativeHostedAppInteractivity < 0 )
  {
LABEL_9:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_ec06d0f298c71c199f72f747d2c93494_Traceguids,
        CumulativeHostedAppInteractivity);
    }
  }
  if ( v15 )
    ATL::CCritSecLock::Unlock(&v14);
  return (unsigned int)CumulativeHostedAppInteractivity;
}
