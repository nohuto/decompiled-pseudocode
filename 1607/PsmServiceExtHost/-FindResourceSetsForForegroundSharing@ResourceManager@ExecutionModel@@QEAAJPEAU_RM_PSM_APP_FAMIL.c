/*
 * XREFs of ?FindResourceSetsForForegroundSharing@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_APP_FAMILY@@_KPEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@@Z @ 0x18002C118
 * Callers:
 *     ?GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetInfo@2@PEAVResourceSet@2@PEAV?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@KPEBGPEAT_RM_SID@@KPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@6@PEA_K@Z @ 0x18002C298 (-GenerateSharedResourceSetListAndAcquire@ResourceManager@ExecutionModel@@QEAAJPEAU_ResourceSetIn.c)
 * Callees:
 *     ?GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAAPEAVResourceSet@2@XZ @ 0x18002C628 (-GetForeground@ModernActivationResourceInfo@ExecutionModel@@QEAAPEAVResourceSet@2@XZ.c)
 *     ?push_front@?$list@PEAVResourceSet@ExecutionModel@@V?$allocator@PEAVResourceSet@ExecutionModel@@@utl@@@utl@@QEAA_NAEBQEAVResourceSet@ExecutionModel@@@Z @ 0x18002D6C0 (-push_front@-$list@PEAVResourceSet@ExecutionModel@@V-$allocator@PEAVResourceSet@ExecutionModel@@.c)
 *     ?HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z @ 0x18003571C (-HasMemoryForFGSharing@ResourceSet@ExecutionModel@@AEAAJ_KE@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::FindResourceSetsForForegroundSharing(
        ExecutionModel::ResourceSet *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  _QWORD *i; // rdi
  __int64 v7; // rbx
  ExecutionModel::ResourceSet *Foreground; // rax
  bool v9; // zf
  __int64 result; // rax
  ExecutionModel::ResourceSet *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  for ( i = (_QWORD *)(a2 + 560); ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    v7 = *(i - 1);
    Foreground = ExecutionModel::ModernActivationResourceInfo::GetForeground(*(ExecutionModel::ModernActivationResourceInfo **)(v7 + 608));
    v9 = *(_DWORD *)(v7 + 592) == 2;
    v11 = Foreground;
    if ( v9 )
    {
      if ( Foreground )
      {
        result = ExecutionModel::ResourceSet::HasMemoryForFGSharing(Foreground, a3, 1u);
        if ( (int)result < 0 )
          return result;
        if ( !(unsigned __int8)utl::list<ExecutionModel::ResourceSet *,utl::allocator<ExecutionModel::ResourceSet *>>::push_front(
                                 a4,
                                 &v11) )
          break;
      }
    }
  }
  return 2147942414LL;
}
