/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSetProxy@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180005040
 * Callers:
 *     <none>
 * Callees:
 *     ??$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_ResourceSetPropertyType@@K@Z012K@Z @ 0x180005D50 (--$RpcCall@P6AJPEAX_KW4_ResourceSetPropertyType@@K@ZPEAX_KW41@K@Shared@DevPlat@@YAJP6AJPEAX_KW4_.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetProxy::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSetProxy *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2
    || (result = DevPlat::Shared::RpcCall<long (*)(void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long),void *,unsigned __int64,enum _ResourceSetPropertyType,unsigned long>(
                   (_DWORD)this,
                   *((_QWORD *)this + 2),
                   *((_QWORD *)this + 3),
                   5,
                   *(_DWORD *)a2),
        (int)result >= 0) )
  {
    if ( a3 )
      return 2147500033LL;
  }
  return result;
}
