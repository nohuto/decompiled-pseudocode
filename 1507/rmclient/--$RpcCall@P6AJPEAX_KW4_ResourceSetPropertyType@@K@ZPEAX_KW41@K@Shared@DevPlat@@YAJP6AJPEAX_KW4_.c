/*
 * XREFs of ??$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_ResourceSetPropertyType@@K@Z012K@Z @ 0x180005D50
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSetProxy@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180005040 (-UpdateImportanceAndResourceLimits@ResourceSetProxy@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORT.c)
 *     ?SetAutoRelease@ResourceSetProxy@ExecutionModel@@UEAAX_N@Z @ 0x180005090 (-SetAutoRelease@ResourceSetProxy@ExecutionModel@@UEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long),void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 8u, 0LL, a2, a3, a4, a5);
}
