/*
 * XREFs of ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x1800A1A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001C754 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_Sddd @ 0x18009033C (WPP_SF_Sddd.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x1800A02FC (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ConvertDbToEngineVolume @ 0x1800A154C (ConvertDbToEngineVolume.c)
 *     ?ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z @ 0x1800A2A20 (-ApplyStreamClassPolicyGains@CProcess@@UEAAXHPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::OnScreenReaderStateChanged(
        CApplicationManager *this,
        struct ScreenReaderStateChangedContext *a2)
{
  const wchar_t *v4; // r9
  int v5; // ecx
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v4 = L"Enabled";
    if ( !*((_DWORD *)a2 + 2) )
      v4 = L"Disabled";
    WPP_SF_Sddd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x31u,
      (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      v4);
  }
  v5 = *((_DWORD *)a2 + 3);
  if ( v5 > 0 )
    v5 = 0;
  v6 = -24;
  if ( v5 > -24 )
    v6 = v5;
  *((_DWORD *)a2 + 3) = v6;
  v7 = ConvertDbToEngineVolume((float)v6);
  v8 = TsSessionIdScreenReaderStateChanged(
         *(_DWORD *)(*(_QWORD *)a2 + 172LL),
         *(_DWORD *)(*(_QWORD *)a2 + 168LL),
         *((_DWORD *)a2 + 2),
         v7,
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x32u,
        (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
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
