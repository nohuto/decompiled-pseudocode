/*
 * XREFs of ?RmpActivityHostQueryEffectivePriority@@YAJPEAU_RM_ACTIVITY_HOST@@_KPEAW4Enum@Priority@ExecutionModel@@@Z @ 0x18002E810
 * Callers:
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002E9A8 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x180004834 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180004FC0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180013C34 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryEffectivePriority(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 a2,
        enum ExecutionModel::Priority::Enum *a3)
{
  int v5; // ebx
  struct ExecutionModel::ResourceSet *Next; // rax
  unsigned int v7; // edi
  unsigned __int64 v8; // rdx
  int v9; // ecx
  __int64 First; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+2Ch] [rbp-Ch]

  v13 = 0;
  v5 = 101;
  v12 = 2;
  First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a1, 2, 0);
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  v7 = 0;
  while ( Next )
  {
    v8 = *(_QWORD *)(*((_QWORD *)Next + 174) + 968LL);
    if ( a2 > v8 )
      v9 = *((_DWORD *)Next + 341);
    else
      v9 = *((_DWORD *)Next + 340);
    if ( v5 >= v9 )
    {
      if ( a2 > v8 )
        v5 = *((_DWORD *)Next + 341);
      else
        v5 = *((_DWORD *)Next + 340);
    }
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
  }
  if ( (int)RmpEmPriorityCompare(v5, 100) >= 0 )
    *(_DWORD *)a3 = v5;
  else
    return (unsigned int)-1073740759;
  return v7;
}
