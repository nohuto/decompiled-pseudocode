/*
 * XREFs of VerifierMmFreePagesFromMdl @ 0x14071BE44
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViMmValidateIrql @ 0x14071C928 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmFreePagesFromMdl(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  v4 = -(__int64)*(unsigned int *)(a1 + 40);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, v4);
  return pXdvMmFreePagesFromMdl(a1, v2, v3, v4);
}
