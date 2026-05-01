/*
 * XREFs of memset_0 @ 0x1800066EC
 * Callers:
 *     RmpBindToRmRpcServer @ 0x180001CF0 (RmpBindToRmRpcServer.c)
 *     RmResourceLimitsInitialize @ 0x180004C40 (RmResourceLimitsInitialize.c)
 *     RmResourceSetPropertiesInitialize @ 0x180009990 (RmResourceSetPropertiesInitialize.c)
 *     RmpClientConnectionInitialize @ 0x180009BE4 (RmpClientConnectionInitialize.c)
 *     RmpClientCallbackGenerateLastMessage @ 0x180009D8C (RmpClientCallbackGenerateLastMessage.c)
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEBU_GUID@@PEA_NPEAUIResourceSet@3@PEAPEAU63@@Z @ 0x18000B0C0 (-AcquireResourceSet@ResourceManagerClientProxy@@UEAAJPEAU_ResourceSetInfo@Execution_ea_18000B0C0.c)
 *     ?ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ @ 0x18000C7B0 (-ResetExternalResourcePriorities@ResourceSetClientProxy@@UEAAJXZ.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18000CE40 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
