/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x1407466B0
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x1407539B0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140753A78 (VerifierMmMapLockedPagesSpecifyCache.c)
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
    ++dword_1407632BC;
    return (unsigned int)ViSystemSufficientlyBooted;
  }
  else
  {
    ViSystemSufficientlyBooted = 1;
  }
  return result;
}
