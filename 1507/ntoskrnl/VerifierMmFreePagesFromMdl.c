/*
 * XREFs of VerifierMmFreePagesFromMdl @ 0x14075384C
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     ViMmValidateIrql @ 0x140754258 (ViMmValidateIrql.c)
 */

void __fastcall VerifierMmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -(__int64)MemoryDescriptorList->ByteCount);
  pXdvMmFreePagesFromMdl(MemoryDescriptorList);
}
