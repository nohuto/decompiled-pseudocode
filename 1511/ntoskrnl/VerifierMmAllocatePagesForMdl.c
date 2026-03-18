/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x1406CFA20
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePagesForMdl @ 0x140140B0C (MmAllocatePagesForMdl.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 *     ViMmValidateIrql @ 0x1406D078C (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdl(
        PHYSICAL_ADDRESS a1,
        PHYSICAL_ADDRESS a2,
        PHYSICAL_ADDRESS a3,
        SIZE_T a4)
{
  PMDL PagesForMdl; // rax
  __int64 v7; // rbx
  __int64 Size; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  PagesForMdl = pXdvMmAllocatePagesForMdl(a1, a2, a3, a4);
  v7 = (__int64)PagesForMdl;
  if ( PagesForMdl )
  {
    Size = PagesForMdl->Size;
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, PagesForMdl->ByteCount);
  }
  else
  {
    Size = 48LL;
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v7, Size);
  return v7;
}
