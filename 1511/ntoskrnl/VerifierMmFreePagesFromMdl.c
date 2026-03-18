/*
 * XREFs of VerifierMmFreePagesFromMdl @ 0x1406CFD80
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViMmValidateIrql @ 0x1406D078C (ViMmValidateIrql.c)
 */

void __fastcall VerifierMmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -(__int64)MemoryDescriptorList->ByteCount);
  pXdvMmFreePagesFromMdl(MemoryDescriptorList);
}
