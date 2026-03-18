/*
 * XREFs of VerifierMmAllocateNodePagesForMdlEx @ 0x14075339C
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x140076D90 (MmAllocateNodePagesForMdlEx.c)
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1407463EC (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x14074657C (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x1407540D8 (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x140754258 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocateNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7)
{
  struct _MDL *NodePagesForMdl; // rax
  __int64 v10; // rbx
  __int64 Size; // rdi
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  ViMmValidateIrql(0LL);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  NodePagesForMdl = (struct _MDL *)pXdvMmAllocateNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7);
  v10 = (__int64)NodePagesForMdl;
  if ( NodePagesForMdl )
  {
    Size = NodePagesForMdl->Size;
    VfFillAllocatePagesForMdl(NodePagesForMdl);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(v10 + 40));
  }
  else
  {
    Size = 48LL;
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v10, Size);
  return v10;
}
