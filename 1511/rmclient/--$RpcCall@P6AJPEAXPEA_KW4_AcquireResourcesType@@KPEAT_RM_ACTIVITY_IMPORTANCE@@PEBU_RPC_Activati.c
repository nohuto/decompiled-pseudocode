/*
 * XREFs of ??$RpcCall@P6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_K1@ZPEAXPEA_KW41@W4RmResourceSetType@@PEAT2@PEBU3@PEAEKKKPEAW44@_KPEA_K@Shared@DevPlat@@YAJP6AJPEAXPEA_KW4_AcquireResourcesType@@KPEAT_RM_ACTIVITY_IMPORTANCE@@PEBU_RPC_ActivationId@@PEAEKKKPEAW4_ResourcePendingReason@@_K1@Z012W4RmResourceSetType@@345KKK671@Z @ 0x180005E90
 * Callers:
 *     ?DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_RM_ACTIVITY_IMPORTANCE@@PEAUIResourceSetCallback@2@PEAPEAXPEAXKKPEBU_RPC_ActivationId@@KPEAW4_ResourcePendingReason@@PEAUIResourceSet@2@PEAVResourceSetProxy@2@@Z @ 0x1800056E0 (-DoAcquireResourceSet@ResourcePolicyEngineProxy@ExecutionModel@@IEAAJW4RmResourceSetType@@PEAT_R.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64 *,enum _AcquireResourcesType,unsigned long,_RM_ACTIVITY_IMPORTANCE *,_RPC_ActivationId const *,unsigned char *,unsigned long,unsigned long,unsigned long,enum _ResourcePendingReason *,unsigned __int64,unsigned __int64 *),void *,unsigned __int64 *,enum _AcquireResourcesType,enum RmResourceSetType,_RM_ACTIVITY_IMPORTANCE *,_RPC_ActivationId const *,unsigned char *,unsigned long,unsigned long,unsigned long,enum _ResourcePendingReason *,unsigned __int64,unsigned __int64 *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  return NdrClientCall3(
           (MIDL_STUBLESS_PROXY_INFO *)&stru_180016F70,
           5u,
           0LL,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14);
}
