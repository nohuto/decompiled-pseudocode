/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x14071BAD8
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 *     ViMmValidateIrql @ 0x14071C928 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 PagesForMdl; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  PagesForMdl = pXdvMmAllocatePagesForMdl(a1, a2, a3, a4);
  v7 = PagesForMdl;
  if ( PagesForMdl )
  {
    v8 = *(__int16 *)(PagesForMdl + 8);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(PagesForMdl + 40));
  }
  else
  {
    v8 = 48LL;
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v7, v8);
  return v7;
}
