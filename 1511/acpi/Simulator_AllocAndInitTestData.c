/*
 * XREFs of Simulator_AllocAndInitTestData @ 0x1C0042344
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C0042778 (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C00429F4 (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0042AE8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C0042BB4 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C0042C54 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C0088680 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 */

PVOID Simulator_AllocAndInitTestData()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x44415341u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x50uLL);
  return v1;
}
