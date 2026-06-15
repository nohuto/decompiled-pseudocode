/*
 * XREFs of ?ApplySessionMuteChanges@CApplicationManager@@QEAAJPEAU_SESSIONMUTECHANGES@@@Z @ 0x180014080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180014368 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180014C04 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ApplySessionMuteChanges(
        CApplicationManager *this,
        struct _SESSIONMUTECHANGES *a2)
{
  _UNKNOWN **v4; // rcx
  int v5; // esi
  _QWORD *v6; // rbx
  struct CApplication *v7; // rdx
  unsigned int v8; // ebx
  _QWORD *v9; // rdx
  _DWORD *v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v13; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v5 = *((_DWORD *)a2 + 1);
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_D((TRACEHANDLE)v4[2], 0x2Eu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v5);
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v6 )
  {
    do
    {
      v7 = (struct CApplication *)v6[2];
      v6 = (_QWORD *)*v6;
      if ( *((_DWORD *)v7 + 29) == v5 )
        CApplicationManager::SilenceAndRevokePLMExemption(this, v7);
    }
    while ( v6 );
    v4 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  v8 = *(_DWORD *)a2;
  if ( v4 != &WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x40000000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_D((TRACEHANDLE)v4[2], 0x2Fu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v8);
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v9 )
  {
    v10 = (_DWORD *)v9[2];
    v9 = (_QWORD *)*v9;
    if ( v10[29] == v8 && !v10[125] )
    {
      v10[117] = 0;
      v10[118] = 0;
      v10[119] = 0;
      v10[120] = 0;
      v10[121] = 0;
      v10[122] = 0;
      v10[123] = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, v8);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
