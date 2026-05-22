/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@IUViewHeirarchyEntry@ViewHeirarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18006E358
 * Callers:
 *     ?OnRemoved@ViewHeirarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18006DA70 (-OnRemoved@ViewHeirarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?OnClear@ViewHeirarchy@@UEAAJPEAUIMessageList@@@Z @ 0x18006DD00 (-OnClear@ViewHeirarchy@@UEAAJPEAUIMessageList@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHeirarchy::ViewHeirarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>,0>>::clear(
        _QWORD *a1)
{
  char **v2; // rax
  char *v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rcx

  v2 = (char **)a1[1];
  v3 = *v2;
  *v2 = (char *)v2;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  if ( v3 != (char *)a1[1] )
  {
    do
    {
      v4 = *(__int64 **)v3;
      v5 = *((_QWORD *)v3 + 3);
      if ( v5 )
      {
        *((_QWORD *)v3 + 3) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      std::_Deallocate(v3, 1uLL, 0x28uLL);
      v3 = (char *)v4;
    }
    while ( v4 != (__int64 *)a1[1] );
  }
  return std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
           a1,
           8LL);
}
