/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x1406CF880
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateMappingAddress @ 0x1404E8208 (MmAllocateMappingAddress.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 */

PVOID __fastcall VerifierMmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  PVOID MappingAddress; // rax
  PVOID v6; // rbx

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  MappingAddress = pXdvMmAllocateMappingAddress(NumberOfBytes, PoolTag);
  v6 = MappingAddress;
  if ( VfPoolTraces )
    ViPoolLogStackTrace((__int64)MappingAddress, NumberOfBytes);
  return v6;
}
