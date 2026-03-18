/*
 * XREFs of VerifierMmAllocateNodePagesForMdlEx @ 0x1406CF8D0
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocateNodePagesForMdlEx @ 0x1400BC6B8 (MmAllocateNodePagesForMdlEx.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1406C4AF8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1406C4D50 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x1406D060C (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x1406D078C (ViMmValidateIrql.c)
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
