/*
 * XREFs of VerifierMmAllocateNodePagesForMdlEx @ 0x14071B988
 * Callers:
 *     <none>
 * Callees:
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140710BB0 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140710DF0 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x14071C79C (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x14071C928 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocateNodePagesForMdlEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
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
