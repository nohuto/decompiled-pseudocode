/*
 * XREFs of ?OnTsSessionDisplayStateChanged@CApplicationManager@@QEAAJPEAUSessionDisplayStateChangedContext@@@Z @ 0x1800A1C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001C754 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnTsSessionDisplayStateChanged(
        CApplicationManager *this,
        struct SessionDisplayStateChangedContext *a2)
{
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  if ( !*((_DWORD *)this + 4) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x33u,
        (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        *(_DWORD *)a2);
    }
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)this, *(_DWORD *)a2, 3u);
  }
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
  return 0LL;
}
