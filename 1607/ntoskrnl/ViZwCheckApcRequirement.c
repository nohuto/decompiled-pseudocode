/*
 * XREFs of ViZwCheckApcRequirement @ 0x140720CBC
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x14071E270 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x14071E754 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x14071F52C (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1407200A8 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x140720BC4 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14004EDE0 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

BOOLEAN __fastcall ViZwCheckApcRequirement(ULONG_PTR a1)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql || (result = KeAreAllApcsDisabled()) != 0 )
  {
    result = ViZwBreakForIssues;
    if ( ViZwBreakForIssues )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE6uLL, a1, CurrentIrql, KeGetCurrentThread()->SpecialApcDisable);
  }
  return result;
}
