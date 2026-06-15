/*
 * XREFs of ?OnTsSessionDisplayStateChanged@CApplicationManager@@QEAAJPEAUSessionDisplayStateChangedContext@@@Z @ 0x180014080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800128D4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnTsSessionDisplayStateChanged(
        CApplicationManager *this,
        struct SessionDisplayStateChangedContext *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !*((_DWORD *)this + 4) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x37u,
        &WPP_719a5be54ec33420ebdafeb185f33b54_Traceguids,
        *(_DWORD *)a2);
    }
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)this, *(_DWORD *)a2, 3u);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
