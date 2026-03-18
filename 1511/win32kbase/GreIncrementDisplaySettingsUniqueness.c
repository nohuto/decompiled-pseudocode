/*
 * XREFs of GreIncrementDisplaySettingsUniqueness @ 0x1C00B88B0
 * Callers:
 *     sub_1C0053ED0 @ 0x1C0053ED0 (sub_1C0053ED0.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00BCE70 (DrvDisplayConfigSetScaleFactorOverride.c)
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
