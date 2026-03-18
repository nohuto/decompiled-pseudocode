/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1C001ED30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0008E10 (WPP_RECORDER_SF_q.c)
 *     Controller_InUseByDebugger @ 0x1C0009E10 (Controller_InUseByDebugger.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C001DD20 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C001EE4C (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 */

__int64 __fastcall Controller_LPEEnterExitCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        _QWORD *Context)
{
  unsigned int v4; // ebx
  __int64 v6; // rax

  v4 = 0;
  if ( Value && ValueLength == 4 )
  {
    v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( v6 )
    {
      v4 = -1073741811;
      WPP_RECORDER_SF_q(Context[8], 2u, 3u, 0xEDu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, *Context);
    }
    else if ( *Value )
    {
      WPP_RECORDER_SF_q(Context[8], 4u, 3u, 0xEFu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, *Context);
      if ( (unsigned __int8)Controller_InUseByDebugger(Context) )
        Controller_ReleaseWdfPowerReferenceForDebugger(Context);
    }
    else
    {
      WPP_RECORDER_SF_q(Context[8], 4u, 3u, 0xEEu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, *Context);
      if ( (unsigned __int8)Controller_InUseByDebugger(Context) )
        Controller_AcquireWdfPowerReferenceForDebugger(Context);
    }
  }
  else
  {
    v4 = -1073741811;
    WPP_RECORDER_SF_q(Context[8], 2u, 3u, 0xECu, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, *Context);
  }
  return v4;
}
