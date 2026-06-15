/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800303F0
 * Callers:
 *     ServicePowerEvent @ 0x180030324 (ServicePowerEvent.c)
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180052B70 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_s @ 0x180054398 (WPP_SF_s.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x18007DA74 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned __int8 v6; // di
  CMonitorManager *v7; // rcx
  __int64 v9; // rax
  _BOOL8 v10; // r8
  _BOOL8 v11; // rdx
  CAudioSession *v12; // rcx
  const char *v13; // r9
  LPCRITICAL_SECTION v14; // [rsp+30h] [rbp-21h] BYREF
  char v15; // [rsp+38h] [rbp-19h]
  _QWORD v16[12]; // [rsp+48h] [rbp-9h] BYREF
  RPC_STATUS Status; // [rsp+C0h] [rbp+6Fh] BYREF
  unsigned int v18; // [rsp+C8h] [rbp+77h] BYREF

  v4 = 0;
  Status = 0;
  if ( !Uuid1 )
    return 13LL;
  if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v5 = *(_DWORD *)&Uuid1[1].Data2;
    v6 = -1;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, v5);
    }
    if ( v5 )
    {
      if ( v5 - 1 <= 1 )
        v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    if ( _MonitorManager )
      CMonitorManager::OnPowerStateChanged(v7, v6);
  }
  else if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids,
        *(unsigned int *)&Uuid1[1].Data2);
    }
    return CAudioSrv::ProcessAwayModeStateChange(this, *(_DWORD *)&Uuid1[1].Data2 != 0);
  }
  else
  {
    v9 = *(_QWORD *)&Uuid1->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&Uuid1->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v9 = *(_QWORD *)Uuid1->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v9 && Uuid1[1].Data1 == 4 )
    {
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v14, &g_csVadList);
      memcpy_0(&v18, &Uuid1[1].Data2, Uuid1[1].Data1);
      v11 = v18 != 0;
      g_bLowPowerEpoch = v18 != 0;
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v13 = "exited";
        if ( !v18 )
          v13 = "entered";
        WPP_SF_s(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v10, v13, -2LL);
      }
      if ( g_u32AEWMILogLevel >= 4 )
      {
        memset(v16, 0, 0x40uLL);
        LOWORD(v16[0]) = 72;
        HIDWORD(v16[5]) = 0x20000;
        *(_OWORD *)&v16[3] = AEWMIGUID_AUDIOSRV;
        WORD2(v16[0]) = 1027;
        v16[6] = 0LL;
        LODWORD(v16[7]) = 0;
        v16[8] = v18;
        EtwLogTraceEvent(g_hAEWMITraceHandle, v16);
      }
      UpdateOffloadPowerRequest((__int64)v12, v11, v10);
      if ( v15 )
        ATL::CCritSecLock::Unlock(&v14);
    }
  }
  return v4;
}
