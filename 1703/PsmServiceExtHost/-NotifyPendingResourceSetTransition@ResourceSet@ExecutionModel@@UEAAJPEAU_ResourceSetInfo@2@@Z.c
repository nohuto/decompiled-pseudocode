/*
 * XREFs of ?NotifyPendingResourceSetTransition@ResourceSet@ExecutionModel@@UEAAJPEAU_ResourceSetInfo@2@@Z @ 0x180033E50
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180004C50 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z @ 0x18001B27C (-RmpActivityHostPublishCommitLimit@@YAJPEAU_RM_ACTIVITY_HOST@@_KK@Z.c)
 *     ?RmpResourceSetGetTarget@@YA_KPEAU_RM_RESOURCE_SET@@@Z @ 0x18002D808 (-RmpResourceSetGetTarget@@YA_KPEAU_RM_RESOURCE_SET@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::NotifyPendingResourceSetTransition(
        struct _RM_RESOURCE_SET **this,
        struct ExecutionModel::_ResourceSetInfo *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 Target; // rax
  unsigned __int64 v6; // rdx
  int v7; // ebx
  struct _RM_ACTIVITY_HOST *v8; // r9
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 34) )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    if ( *((_BYTE *)this + 12) )
    {
      Target = RmpResourceSetGetTarget(this[173]);
      v6 = *((_QWORD *)a2 + 3);
      if ( v6 <= Target )
      {
        RmpCommitValuesSubtract(Target, v6, &v10);
        v7 = RmpCommitValuesSubtract(*((_QWORD *)this[174] + 125), v10, &v11);
        if ( v7 < 0 || (v7 = RmpActivityHostPublishCommitLimit(v8, v11, 0), v7 < 0) )
          v4 = v7 | 0x10000000;
        else
          v4 = 0;
      }
      else
      {
        v4 = -2147024809;
      }
    }
    else
    {
      v4 = -2147220216;
    }
    RtlLeaveCriticalSection(&RmpGlobalLock);
  }
  else
  {
    return (unsigned int)-2147467263;
  }
  return v4;
}
