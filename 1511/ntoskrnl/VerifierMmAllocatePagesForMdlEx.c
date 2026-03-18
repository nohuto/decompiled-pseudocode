/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x1406CFACC
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1400BC654 (MmAllocatePagesForMdlEx.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x1406D060C (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x1406D078C (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdlEx(
        PHYSICAL_ADDRESS a1,
        PHYSICAL_ADDRESS a2,
        PHYSICAL_ADDRESS a3,
        SIZE_T a4,
        MEMORY_CACHING_TYPE CacheType,
        ULONG Flags)
{
  PMDL PagesForMdl; // rax
  __int64 v9; // rbx
  __int64 Size; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  PagesForMdl = pXdvMmAllocatePagesForMdlEx(a1, a2, a3, a4, CacheType, Flags);
  v9 = (__int64)PagesForMdl;
  if ( PagesForMdl )
  {
    Size = PagesForMdl->Size;
    VfFillAllocatePagesForMdl(PagesForMdl);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(v9 + 40));
  }
  else
  {
    Size = 48LL;
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v9, Size);
  return v9;
}
