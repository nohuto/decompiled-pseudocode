/*
 * XREFs of ??$RpcCall@P6AJPEAX_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@ZPEAX_KPEAT1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAX_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z0123@Z @ 0x180004520
 * Callers:
 *     ?UpdateImportanceAndResourceLimits@ResourceSetProxy@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180004980 (-UpdateImportanceAndResourceLimits@ResourceSetProxy@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORT.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,_RM_ACTIVITY_IMPORTANCE *,_RM_RESOURCE_LIMITS *),void *,unsigned __int64,_RM_ACTIVITY_IMPORTANCE *,_RM_RESOURCE_LIMITS *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70, 0xDu, 0LL, a2, a3, a4, a5);
}
