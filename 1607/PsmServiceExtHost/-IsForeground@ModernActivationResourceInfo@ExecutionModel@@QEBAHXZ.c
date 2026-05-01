/*
 * XREFs of ?IsForeground@ModernActivationResourceInfo@ExecutionModel@@QEBAHXZ @ 0x18002CA1C
 * Callers:
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18002CA88 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 */

__int64 __fastcall ExecutionModel::ModernActivationResourceInfo::IsForeground(
        ExecutionModel::ModernActivationResourceInfo *this)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  __int64 v3; // rax
  __int64 result; // rax
  struct ExecutionModel::ResourceSet *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)this;
  v5[1] = (struct ExecutionModel::ResourceSet *)2;
  v5[0] = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(v1, 2, 0);
  while ( 1 )
  {
    result = (__int64)RmpActivityHostEnumerateResourceSetGetNext(v5);
    if ( !result )
      break;
    if ( (*(_BYTE *)(result + 1458) & 0x40) == 0 )
    {
      v2 = *(int *)(result + 1416);
      if ( (unsigned int)v2 > 0x29 )
        continue;
      v3 = 0x24704100001LL;
      if ( !_bittest64(&v3, v2) )
        continue;
    }
    return 1LL;
  }
  return result;
}
