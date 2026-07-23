/*
 * XREFs of KeAreAllApcsDisabled @ 0x14004EDE0
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140086AA0 (PnpIsSafeToExamineUserModeTeb.c)
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x140720CBC (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
