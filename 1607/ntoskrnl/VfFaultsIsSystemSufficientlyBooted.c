/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140710F24
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x14071BFC0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x14071C09C (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  __int64 result; // rax

  if ( ViSystemSufficientlyBooted )
    return 1LL;
  result = 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
  {
    ++dword_14072C264;
    return (unsigned int)ViSystemSufficientlyBooted;
  }
  else
  {
    ViSystemSufficientlyBooted = 1;
  }
  return result;
}
