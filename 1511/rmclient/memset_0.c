/*
 * XREFs of memset_0 @ 0x1800095EC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800010F0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     RmResourceLimitsInitialize @ 0x180001390 (RmResourceLimitsInitialize.c)
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?GetResourcePolicyInformation@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x180005460 (-GetResourcePolicyInformation@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJW4RmResourceSetType@.c)
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x1800066C0 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     RmpBindToRmRpcServer @ 0x1800070C0 (RmpBindToRmRpcServer.c)
 *     ??0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x1800077B4 (--0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 *     RmResourceSetPropertiesInitialize @ 0x18000EAD0 (RmResourceSetPropertiesInitialize.c)
 *     RmTestGetResourceSetInfos @ 0x18000FB40 (RmTestGetResourceSetInfos.c)
 *     ?AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180011460 (-AddGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180011680 (-ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180011848 (-Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z.c)
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x1800118AC (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x180011C20 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800120C8 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800120F4 (RtlStringExHandleOtherFlagsW.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180013E00 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001514C (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
