/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1C001B580
 * Callers:
 *     <none>
 * Callees:
 *     Controller_InUseByDebugger @ 0x1C0008488 (Controller_InUseByDebugger.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x1C001A510 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1C001B6A0 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
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
      WPP_RECORDER_SF_q(Context[8], 2u, 3u, 0xEFu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, *Context);
    }
    else if ( *Value )
    {
      WPP_RECORDER_SF_q(Context[8], 4u, 3u, 0xF1u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, *Context);
      if ( (unsigned __int8)Controller_InUseByDebugger(Context) )
        Controller_ReleaseWdfPowerReferenceForDebugger(Context);
    }
    else
    {
      WPP_RECORDER_SF_q(Context[8], 4u, 3u, 0xF0u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, *Context);
      if ( (unsigned __int8)Controller_InUseByDebugger(Context) )
        Controller_AcquireWdfPowerReferenceForDebugger(Context);
    }
  }
  else
  {
    v4 = -1073741811;
    WPP_RECORDER_SF_q(Context[8], 2u, 3u, 0xEEu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, *Context);
  }
  return v4;
}
