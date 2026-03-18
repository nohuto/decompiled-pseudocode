/*
 * XREFs of VerifierMmCreateMdl @ 0x1407536B0
 * Callers:
 *     <none>
 * Callees:
 *     MmCreateMdl @ 0x1400627F4 (MmCreateMdl.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
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
