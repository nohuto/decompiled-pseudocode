/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSetProxy@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180004980
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@ZPEAX_KPEAT1@PEAU2@@Shared@DevPlat@@YAJP6AJPEAX_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z0123@Z @ 0x180004520 (--$RpcCall@P6AJPEAX_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@ZPEAX_KPEAT1@PEAU2@@.c)
 */

CLIENT_CALL_RETURN __fastcall ExecutionModel::ResourceSetProxy::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSetProxy *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  return DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,_RM_ACTIVITY_IMPORTANCE *,_RM_RESOURCE_LIMITS *),void *,unsigned __int64,_RM_ACTIVITY_IMPORTANCE *,_RM_RESOURCE_LIMITS *>(
           (__int64)this,
           *((_QWORD *)this + 2),
           *((_QWORD *)this + 3),
           (__int64)a2,
           (__int64)a3);
}
