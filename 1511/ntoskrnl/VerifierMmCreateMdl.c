/*
 * XREFs of VerifierMmCreateMdl @ 0x1406CFBE4
 * Callers:
 *     <none>
 * Callees:
 *     MmCreateMdl @ 0x1400FDF78 (MmCreateMdl.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 */

PMDL __fastcall VerifierMmCreateMdl(PMDL MemoryDescriptorList, PVOID Base, SIZE_T Length)
{
  PMDL Mdl; // rax
  PMDL v8; // rbx
  __int64 Size; // rdx

  if ( !MemoryDescriptorList && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  Mdl = pXdvMmCreateMdl(MemoryDescriptorList, Base, Length);
  v8 = Mdl;
  if ( KeGetCurrentIrql() <= 2u )
  {
    Size = 48LL;
    if ( Mdl )
      Size = Mdl->Size;
    if ( VfPoolTraces )
      ViPoolLogStackTrace((__int64)Mdl, Size);
  }
  return v8;
}
