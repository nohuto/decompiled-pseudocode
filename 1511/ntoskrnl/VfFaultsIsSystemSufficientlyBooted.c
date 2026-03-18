/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x1406C4E84
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x1406CFEE4 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC (VerifierMmMapLockedPagesSpecifyCache.c)
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
    ++dword_1406E02BC;
    return (unsigned int)ViSystemSufficientlyBooted;
  }
  else
  {
    ViSystemSufficientlyBooted = 1;
  }
  return result;
}
