/*
 * XREFs of AccessHlprFree @ 0x180002A5C
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18000235C (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     QuerySecurityDescriptorValue @ 0x18000278C (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x180002934 (QueryTransientObjectSecurityDescriptor.c)
 *     GetNormalizedObjectPath @ 0x180002BC0 (GetNormalizedObjectPath.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall AccessHlprFree(void *a1)
{
  BOOLEAN result; // al

  if ( a1 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
