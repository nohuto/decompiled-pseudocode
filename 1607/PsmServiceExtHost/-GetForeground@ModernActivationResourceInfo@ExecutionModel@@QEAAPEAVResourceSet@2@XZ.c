/*
 * XREFs of ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAAPEAVResourceSet@2@XZ @ 0x18002C628
 * Callers:
 *     ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x18002C118 (-FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMIL.c)
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x1800073E0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x180017280 (RmpActivityHostEnumerateResourceSetGetNext.c)
 */

struct ExecutionModel::ResourceSet *__fastcall ExecutionModel::ModernActivationResourceInfo::GetForeground(
        ExecutionModel::ModernActivationResourceInfo *this)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  struct ExecutionModel::ResourceSet *Next; // rax
  struct ExecutionModel::ResourceSet *v5; // r11
  struct ExecutionModel::ResourceSet *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)this;
  v7[1] = (struct ExecutionModel::ResourceSet *)3;
  v7[0] = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(v1, 3, 0);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext(v7);
    v5 = Next;
    if ( !Next )
      return 0LL;
    if ( (*((_BYTE *)Next + 1458) & 0x40) != 0 )
      break;
    v2 = *((int *)Next + 354);
    if ( (unsigned int)v2 <= 0x29 )
    {
      v3 = 0x24704100001LL;
      if ( _bittest64(&v3, v2) )
        break;
    }
  }
  return v5;
}
