/*
 * XREFs of AccessHlprFree @ 0x18001A148
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x1800199CC (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 *     QuerySecurityDescriptorValue @ 0x180019E50 (QuerySecurityDescriptorValue.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001A034 (QueryTransientObjectSecurityDescriptor.c)
 *     GetNormalizedObjectPath @ 0x18001A310 (GetNormalizedObjectPath.c)
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
