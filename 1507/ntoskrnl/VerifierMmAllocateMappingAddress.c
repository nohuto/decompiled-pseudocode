/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x14075334C
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateMappingAddress @ 0x1405622E0 (MmAllocateMappingAddress.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
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
