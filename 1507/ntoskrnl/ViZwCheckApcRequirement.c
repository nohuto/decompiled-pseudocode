/*
 * XREFs of ViZwCheckApcRequirement @ 0x1407586B8
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x140755C6C (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x140756150 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x140756F28 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x140757AA4 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1407585C0 (VfZwWriteFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViZwCheckApcRequirement(ULONG_PTR a1)
{
  ULONG_PTR v1; // r8
  unsigned __int8 CurrentIrql; // dl
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql
    || KeGetCurrentThread()->SpecialApcDisable
    || !(unsigned __int8)KeAreInterruptsEnabled()
    || (result = KeGetCurrentIrql(), (_BYTE)result) )
  {
    result = (unsigned int)ViZwBreakForIssues;
    if ( ViZwBreakForIssues )
      return VerifierBugCheckIfAppropriate(0xC4u, 0xE6uLL, v1, CurrentIrql, KeGetCurrentThread()->SpecialApcDisable);
  }
  return result;
}
