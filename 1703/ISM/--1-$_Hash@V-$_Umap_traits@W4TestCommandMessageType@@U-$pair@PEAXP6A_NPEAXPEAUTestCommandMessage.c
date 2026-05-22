/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18000A280
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180005DF8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ??1?$unordered_map@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@U?$hash@W4TestCommandMessageType@@@3@U?$equal_to@W4TestCommandMessageType@@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@@std@@QEAA@XZ @ 0x180009DDC (--1-$unordered_map@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHead.c)
 *     _dynamic_atexit_destructor_for__TestCommandHost::m_instance___0 @ 0x1800A3CF0 (_dynamic_atexit_destructor_for__TestCommandHost--m_instance___0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::~_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>(
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
      std::_Deallocate(v4, 1uLL, 0x28uLL);
      v4 = v5;
    }
    while ( v5 != *(char **)(a1 + 8) );
  }
  std::_Deallocate(*(char **)(a1 + 8), 1uLL, 0x28uLL);
}
