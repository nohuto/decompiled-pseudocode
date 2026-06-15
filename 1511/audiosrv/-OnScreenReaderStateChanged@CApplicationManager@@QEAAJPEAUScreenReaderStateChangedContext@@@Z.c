/*
 * XREFs of ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x18009EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001F254 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     WPP_SF_Sddd @ 0x18008DBC4 (WPP_SF_Sddd.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x18009D4E8 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z @ 0x18009FCB0 (-ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z.c)
 *     ConvertDbToEngineVolume @ 0x1800A8F6C (ConvertDbToEngineVolume.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnScreenReaderStateChanged(
        CApplicationManager *this,
        struct ScreenReaderStateChangedContext *a2)
{
  const wchar_t *v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  unsigned int v9; // edi
  LPCRITICAL_SECTION v11; // [rsp+48h] [rbp-30h] BYREF
  char v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+80h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+10h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v13 = 0;
  v14 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = L"Enabled";
    if ( !*((_DWORD *)a2 + 2) )
      v4 = L"Disabled";
    WPP_SF_Sddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x32u,
      (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
      v4);
  }
  v5 = *((unsigned int *)a2 + 3);
  if ( (int)v5 > 0 )
    v5 = 0LL;
  v6 = -24;
  if ( (int)v5 > -24 )
    v6 = v5;
  *((_DWORD *)a2 + 3) = v6;
  v7 = ConvertDbToEngineVolume(v5);
  v8 = TsSessionIdScreenReaderStateChanged(
         *(_DWORD *)(*(_QWORD *)a2 + 172LL),
         *(_DWORD *)(*(_QWORD *)a2 + 168LL),
         *((_DWORD *)a2 + 2),
         v7,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x33u,
        (__int64)&WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        v8);
    }
  }
  else
  {
    CProcess::ApplyStreamClassPolicyGains((CProcess *)(*(_QWORD *)a2 + 16LL), *((_DWORD *)a2 + 2) == 0, &v14);
    if ( v13 || v14 )
      CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)this, *(_DWORD *)(*(_QWORD *)a2 + 172LL), 3u);
  }
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return v9;
}
