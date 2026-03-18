/*
 * XREFs of DrvQueryMDEVPowerState @ 0x1C0064AF0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 *     DrvProcessMonitorEventCallback @ 0x1C00C93EC (DrvProcessMonitorEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvQueryMDEVPowerState(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // ecx
  __int64 i; // rdx
  __int64 v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rax

  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    return 1LL;
  for ( i = a1 + 32; ; i += 32LL )
  {
    v5 = *(_QWORD *)(*(_QWORD *)i + 2600LL);
    if ( !v5 )
      break;
    if ( *(int *)(v5 + 160) < 0 )
      return 0LL;
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= v3 )
      return 1LL;
  }
  v7 = WdLogNewEntry5_WdError();
  v8 = *(_QWORD *)(32 * (v2 + 1) + a1);
  *(_QWORD *)(v7 + 32) = (unsigned int)v2;
  *(_QWORD *)(v7 + 24) = v8;
  WdLogEvent5_WdError(v7);
  return 0LL;
}
