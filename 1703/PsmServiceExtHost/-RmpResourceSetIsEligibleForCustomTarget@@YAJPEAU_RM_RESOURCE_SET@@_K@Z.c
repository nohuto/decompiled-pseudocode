/*
 * XREFs of ?RmpResourceSetIsEligibleForCustomTarget@@YAJPEAU_RM_RESOURCE_SET@@_K@Z @ 0x18002D83C
 * Callers:
 *     ?RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z @ 0x1800187E0 (-RmpResourceSetRemoveRecipient@@YAXPEAU_RM_RESOURCE_SET@@0K@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x18002D920 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 * Callees:
 *     ?RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z @ 0x180004C50 (-RmpCommitValuesSubtract@@YAJ_K0PEA_K@Z.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z @ 0x180010B7C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@QEAAJ_KE@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall RmpResourceSetIsEligibleForCustomTarget(struct _RM_RESOURCE_SET *a1, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rbx
  struct _RM_ACTIVITY_HOST **v5; // r9
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  RmpCommitValuesSubtract(a2, *((_QWORD *)a1 + 11), &v7);
  v3 = 0;
  v4 = 0LL;
  if ( !*((_DWORD *)a1 + 26) )
    return 2147747081LL;
  while ( 1 )
  {
    if ( (int)RmpEmPriorityCompare(
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8 * v4) + 40LL) + 1680LL),
                101) > 0 )
      v3 = 1;
    result = ExecutionModel::ResourceSet::HasMemoryForFGSharing(v5, v7);
    if ( (int)result < 0 )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *((_DWORD *)a1 + 26) )
    {
      if ( !v3 )
        return 2147747081LL;
      return 0LL;
    }
  }
  return result;
}
