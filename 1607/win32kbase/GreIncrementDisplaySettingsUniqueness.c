/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00C3CA0
 * Callers:
 *     ApplyPathsModality @ 0x1C0065594 (ApplyPathsModality.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00C3BB0 (DxgkEngNotifyDisplayChange.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00C8B60 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     <none>
 */

PVOID GreIncrementDisplaySettingsUniqueness()
{
  PVOID result; // rax

  result = gpGdiSharedMemory;
  if ( gpGdiSharedMemory )
  {
    _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
    return (PVOID)DisplayScenarioJournalDisplayUniquenessIncremented();
  }
  return result;
}
