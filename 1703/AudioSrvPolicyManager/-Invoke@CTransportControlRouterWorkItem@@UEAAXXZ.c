/*
 * XREFs of ?Invoke@CTransportControlRouterWorkItem@@UEAAXXZ @ 0x18001E4A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     WPP_SF_S @ 0x180005B6C (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x1800127E0 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTransportControlRouterWorkItem::Invoke(const wchar_t **this)
{
  DWORD v2; // ebp
  const wchar_t *v3; // rsi
  struct CApplication *v4; // rdi
  _QWORD *v5; // rbx
  struct CApplication *v6; // rbp
  CApplicationManager *v7; // rcx
  int active; // eax
  int v9; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  struct TSSession *v12; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, this[2]);
  }
  v2 = *((_DWORD *)this + 2);
  v3 = this[2];
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !v3 )
    goto LABEL_21;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(v2, 0, 0LL, &v12) )
  {
    v5 = (_QWORD *)*((_QWORD *)v12 + 13);
    while ( v5 )
    {
      v6 = (struct CApplication *)v5[2];
      v5 = (_QWORD *)*v5;
      if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)v6 + 3), v3) )
      {
        v4 = v6;
        break;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( v4 )
  {
    active = CApplicationManager::HandleMediaPlaybackRequestForActiveMediaApp(v7, v4);
    v9 = active;
    if ( active < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, active);
      }
      AudPolicyLogError("CApplicationManager::HandleMediaPlaybackRequestForApp", 1551, v9);
    }
  }
  else
  {
LABEL_21:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids, v3);
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
