/*
 * XREFs of ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180011110
 * Callers:
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000DE70 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E0F8 (-AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180011548 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001167C (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterSession(
        CApplicationManager *this,
        struct CProcess *a2,
        struct IAudioSessionInfo *a3)
{
  CApplicationManager *v5; // rsi
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v5 = g_ApplicationManager;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = CApplicationManager::Register(v5, a2);
  if ( v6 >= 0 )
  {
    v6 = CProcess::AddSession(a2, a3);
    if ( v6 >= 0 )
      goto LABEL_9;
    CApplicationManager::Unregister(v5, a2);
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v6);
  }
  AudPolicyLogError("CApplicationManager::RegisterSession", 564, v6);
LABEL_9:
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
