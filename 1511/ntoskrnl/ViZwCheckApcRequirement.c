/*
 * XREFs of ViZwCheckApcRequirement @ 0x1406D4AF0
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1406D20A4 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1406D2588 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x1406D3360 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1406D3EDC (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1406D49F8 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
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
