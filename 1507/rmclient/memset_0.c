/*
 * XREFs of memset_0 @ 0x180008DF8
 * Callers:
 *     ?BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z @ 0x180001D80 (-BindToRPCServerInSession@Shared@DevPlat@@YAJPEAXPEBGKPEAPEAXK@Z.c)
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800050C0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?GetResourcePolicyInformation@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJW4RmResourceSetType@@PEAU_ResourcePolicyDetails@@@Z @ 0x180005C60 (-GetResourcePolicyInformation@ResourcePolicyStoreProxy@ExecutionModel@@UEBAJW4RmResourceSetType@.c)
 *     RmpBindToRmRpcServer @ 0x1800068A0 (RmpBindToRmRpcServer.c)
 *     ??0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ @ 0x180006ED4 (--0ResourcePolicyEngineProxy@ExecutionModel@@IEAA@XZ.c)
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x180007FE0 (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 *     RmResourceLimitsInitialize @ 0x18000E0A0 (RmResourceLimitsInitialize.c)
 *     RmResourceSetPropertiesInitialize @ 0x18000E0D0 (RmResourceSetPropertiesInitialize.c)
 *     RmTestGetResourceSetInfos @ 0x18000F210 (RmTestGetResourceSetInfos.c)
 *     ?ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z @ 0x180010AE0 (-ModifyGameConfig@GameConfigStoreClient@ExecutionModel@@UEBAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z @ 0x180010BF8 (-Cleanup_DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAXPEAU_RpcGameConfig@@@Z.c)
 *     ?GetCurrentModuleName@details@wil@@YAPEBDXZ @ 0x180010E50 (-GetCurrentModuleName@details@wil@@YAPEBDXZ.c)
 *     RtlStringExHandleFillBehindNullW @ 0x180011360 (RtlStringExHandleFillBehindNullW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x18001138C (RtlStringExHandleOtherFlagsW.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x1800130D0 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResourceSetInfo@@@Z @ 0x18001423C (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YAXPEBU_ResourceSetInfo@1@PEAURmResource.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
