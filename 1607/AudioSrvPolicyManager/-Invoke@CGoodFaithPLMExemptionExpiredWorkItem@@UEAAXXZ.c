/*
 * XREFs of ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x1800213D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000B40C (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18000C3CC (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000CAB4 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGoodFaithPLMExemptionExpiredWorkItem::Invoke(CGoodFaithPLMExemptionExpiredWorkItem *this)
{
  __int64 v2; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
      *(const wchar_t **)(*((_QWORD *)this + 1) + 16LL));
  }
  v2 = *((_QWORD *)this + 1);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v4 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *(_DWORD *)(v2 + 468) == 2 )
  {
    *(_DWORD *)(v2 + 468) = 0;
    *(_DWORD *)(v2 + 472) = 0;
    *(_DWORD *)(v2 + 476) = 0;
    *(_DWORD *)(v2 + 480) = 0;
    *(_DWORD *)(v2 + 484) = 0;
    *(_DWORD *)(v2 + 488) = 0;
    *(_DWORD *)(v2 + 492) = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x17u,
      &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids,
      *(const wchar_t **)(v2 + 16));
  }
  if ( (unsigned int)CApplication::Category(v2) != 1 )
  {
    if ( !*(_DWORD *)(v2 + 112) )
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption((CApplication *)v2);
    *(_DWORD *)(v2 + 336) = 0;
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)v2, 209);
    CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)v2);
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
}
