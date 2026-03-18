/*
 * XREFs of KeAreAllApcsDisabled @ 0x14004F260
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140007E58 (PnpIsSafeToExamineUserModeTeb.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     MmFlushVirtualMemory @ 0x1404D1998 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x140720CBC (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
