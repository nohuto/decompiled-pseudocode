/*
 * XREFs of ndisVerifierInjectResourceFailure @ 0x1C0060388
 * Callers:
 *     ndisVerifierAllocateMemory @ 0x1C005FFE0 (ndisVerifierAllocateMemory.c)
 *     ndisVerifierAllocateMemoryWithTag @ 0x1C00600C0 (ndisVerifierAllocateMemoryWithTag.c)
 *     ndisVerifierAllocatePacketPool @ 0x1C0060240 (ndisVerifierAllocatePacketPool.c)
 *     ndisVerifierAllocatePacketPoolEx @ 0x1C0060290 (ndisVerifierAllocatePacketPoolEx.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ndisVerifierInjectResourceFailure()
{
  unsigned __int8 result; // al

  if ( (ndisVerifierLevel & 4) == 0 )
    return 0;
  result = VerifierSystemSufficientlyBooted;
  if ( !VerifierSystemSufficientlyBooted )
  {
    if ( MEMORY[0xFFFFF78000000014] <= VerifierRequiredTimeSinceBoot.QuadPart + KeBootTime.QuadPart )
    {
      result = VerifierSystemSufficientlyBooted;
    }
    else
    {
      result = 1;
      VerifierSystemSufficientlyBooted = 1;
    }
  }
  if ( result != 1 || (MEMORY[0xFFFFF78000000320] & 7) != 0 )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)&ndisVeriferFailedAllocations);
  return result;
}
