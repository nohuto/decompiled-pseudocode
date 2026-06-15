/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003B740
 * Callers:
 *     ServicePowerEvent @ 0x18003C720 (ServicePowerEvent.c)
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x18006862C (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     WPP_SF_s @ 0x180069EBC (WPP_SF_s.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x180094CC4 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 */

__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v2; // ebx
  bool v4; // zf
  int v6; // esi
  unsigned __int8 v7; // di
  CMonitorManager *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  const char *v12; // r9
  _WORD v13[2]; // [rsp+20h] [rbp-50h] BYREF
  char v14; // [rsp+24h] [rbp-4Ch]
  __int128 v15; // [rsp+38h] [rbp-38h]
  int v16; // [rsp+4Ch] [rbp-24h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  RPC_STATUS Status; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 0;
  v4 = Uuid1[1].Data1 == 4;
  Status = 0;
  if ( v4 && UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v6 = *(_DWORD *)&Uuid1[1].Data2;
    v7 = -1;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x25u,
        (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
        v6);
    }
    if ( v6 )
    {
      if ( (unsigned int)(v6 - 1) <= 1 )
        v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    if ( _MonitorManager )
      CMonitorManager::OnPowerStateChanged(v8, v7);
  }
  else if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x26u,
        (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
        *(_DWORD *)&Uuid1[1].Data2);
    }
    return CAudioSrv::ProcessAwayModeStateChange(this, *(_DWORD *)&Uuid1[1].Data2 != 0);
  }
  else
  {
    v10 = *(_QWORD *)&Uuid1->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&Uuid1->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v10 = *(_QWORD *)Uuid1->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v10 && Uuid1[1].Data1 == 4 )
    {
      EnterCriticalSection(&g_csVadList);
      memcpy_0(&v21, &Uuid1[1].Data2, Uuid1[1].Data1);
      g_bLowPowerEpoch = v21 != 0;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v12 = "exited";
        if ( !v21 )
          v12 = "entered";
        WPP_SF_s(*((_QWORD *)WPP_GLOBAL_Control + 2), v21 != 0, v11, v12);
      }
      if ( g_u32AEWMILogLevel >= 3 )
      {
        memset_0(v13, 0, 0x40uLL);
        v16 = 0x20000;
        v13[0] = 72;
        v19 = v21;
        v15 = AEWMIGUID_AUDIOSRV;
        v14 = 3;
        v17 = 0LL;
        v18 = 0;
        EtwLogTraceEvent(g_hAEWMITraceHandle, v13);
      }
      UpdateOffloadPowerRequest();
      LeaveCriticalSection(&g_csVadList);
    }
  }
  return v2;
}
