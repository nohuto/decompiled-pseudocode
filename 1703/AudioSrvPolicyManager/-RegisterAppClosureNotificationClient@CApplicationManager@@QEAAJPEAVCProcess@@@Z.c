/*
 * XREFs of ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800113A0
 * Callers:
 *     PbmRegisterAppClosureNotification @ 0x180016E80 (PbmRegisterAppClosureNotification.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterAppClosureNotificationClient(
        CApplicationManager *this,
        struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  int v4; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v3 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = CApplicationManager::Register(v3, a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v4);
    }
    AudPolicyLogError("CApplicationManager::RegisterAppClosureNotificationClient", 731, v4);
  }
  else
  {
    *((_DWORD *)a2 + 112) = 1;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v4;
}
