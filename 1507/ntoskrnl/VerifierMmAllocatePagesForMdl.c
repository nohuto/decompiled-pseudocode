/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x1407534EC
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePagesForMdl @ 0x14013A010 (MmAllocatePagesForMdl.c)
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 *     ViMmValidateIrql @ 0x140754258 (ViMmValidateIrql.c)
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
