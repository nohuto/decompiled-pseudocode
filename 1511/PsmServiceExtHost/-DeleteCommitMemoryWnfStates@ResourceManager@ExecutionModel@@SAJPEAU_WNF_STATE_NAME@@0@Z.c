/*
 * XREFs of ?DeleteCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAU_WNF_STATE_NAME@@0@Z @ 0x1800204B0
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000F4CC (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceManager::DeleteCommitMemoryWnfStates(
        struct _WNF_STATE_NAME *a1,
        struct _WNF_STATE_NAME *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( (int)NtDeleteWnfStateName(a1) < 0 )
  {
    return (unsigned int)-2147467259;
  }
  else
  {
    if ( (int)NtDeleteWnfStateName(a2) < 0 )
      return (unsigned int)-2147467259;
    return v3;
  }
}
