/*
 * XREFs of ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x180015F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800053A0 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D444 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnBCMStartupGracePeriodExpired(CApplicationManager *this, const wchar_t ***a2)
{
  const wchar_t **v4; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Fu, &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids, v4[2]);
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod(v4);
  CApplicationManager::ApplyPBMPolicy(this, (struct CApplication *)v4, 209);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
