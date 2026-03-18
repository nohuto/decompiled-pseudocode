/*
 * XREFs of VerifierMmAllocateMappingAddress @ 0x14071B938
 * Callers:
 *     <none>
 * Callees:
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmAllocateMappingAddress(__int64 a1, unsigned int a2)
{
  __int64 MappingAddress; // rax
  __int64 v6; // rbx

  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  MappingAddress = pXdvMmAllocateMappingAddress(a1, a2);
  v6 = MappingAddress;
  if ( VfPoolTraces )
    ViPoolLogStackTrace(MappingAddress, a1);
  return v6;
}
