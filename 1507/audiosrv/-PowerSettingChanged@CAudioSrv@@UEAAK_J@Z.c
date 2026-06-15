/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003A1E0
 * Callers:
 *     ServicePowerEvent @ 0x18003A0FC (ServicePowerEvent.c)
 * Callees:
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x180069ACC (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     WPP_SF_s @ 0x18006B1A8 (WPP_SF_s.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x180097464 (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
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
    v8 = *(CMonitorManager **)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x25u,
        (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x26u,
        (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
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
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v12 = "exited";
        if ( !v21 )
          v12 = "entered";
        WPP_SF_s(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v21 != 0, v11, v12);
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
