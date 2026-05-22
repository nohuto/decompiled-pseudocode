/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180031318
 * Callers:
 *     ??_GControllerNavigationManager@@UEAAPEAXI@Z @ 0x1800307A0 (--_GControllerNavigationManager@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_map@KPEAVControllerProcessor@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@@std@@QEAA@XZ @ 0x180030884 (--1-$unordered_map@KPEAVControllerProcessor@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>(
        __int64 a1)
{
  char *v2; // rcx
  char **v3; // rax
  char *v4; // rcx
  char *v5; // rbx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v2) >> 3, 8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v3 = *(char ***)(a1 + 8);
  v4 = *v3;
  *v3 = (char *)v3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v4 != *(char **)(a1 + 8) )
  {
    do
    {
      v5 = *(char **)v4;
      std::_Deallocate(v4, 1uLL, 0x20uLL);
      v4 = v5;
    }
    while ( v5 != *(char **)(a1 + 8) );
  }
  std::_Deallocate(*(char **)(a1 + 8), 1uLL, 0x20uLL);
}
