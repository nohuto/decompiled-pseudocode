/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x14071BB84
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x14071C79C (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x14071C928 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdlEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  struct _MDL *PagesForMdl; // rax
  __int64 v9; // rbx
  __int64 Size; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  PagesForMdl = (struct _MDL *)pXdvMmAllocatePagesForMdlEx(a1, a2, a3, a4, a5, a6);
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
