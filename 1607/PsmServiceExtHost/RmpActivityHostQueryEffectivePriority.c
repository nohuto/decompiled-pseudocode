/*
 * XREFs of RmpActivityHostQueryEffectivePriority @ 0x18002F2D0
 * Callers:
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpEmPriorityCompare @ 0x180014E6C (RmpEmPriorityCompare.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     ?GetEffectivePriority@ResourceSet@ExecutionModel@@QEBA?AW4Enum@Priority@2@_K@Z @ 0x1800283C0 (-GetEffectivePriority@ResourceSet@ExecutionModel@@QEBA-AW4Enum@Priority@2@_K@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryEffectivePriority(__int64 a1, unsigned __int64 a2, int *a3)
{
  int EffectivePriority; // ebx
  struct ExecutionModel::ResourceSet *i; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r11d
  struct ExecutionModel::ResourceSet *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  EffectivePriority = 101;
  v11[1] = (struct ExecutionModel::ResourceSet *)2;
  v11[0] = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(a1, 2, 0);
  for ( i = RmpActivityHostEnumerateResourceSetGetNext(v11); i; i = RmpActivityHostEnumerateResourceSetGetNext(v11) )
  {
    if ( EffectivePriority >= (int)ExecutionModel::ResourceSet::GetEffectivePriority((__int64)i, a2) )
      EffectivePriority = ExecutionModel::ResourceSet::GetEffectivePriority(v8, v7);
  }
  if ( (int)RmpEmPriorityCompare(EffectivePriority, 100) >= 0 )
    *a3 = EffectivePriority;
  else
    return (unsigned int)-1073740759;
  return v9;
}
