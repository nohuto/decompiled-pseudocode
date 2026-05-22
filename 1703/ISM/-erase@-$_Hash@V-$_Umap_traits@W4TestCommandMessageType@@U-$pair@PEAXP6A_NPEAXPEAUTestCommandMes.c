/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x18000A124
 * Callers:
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x180009A80 (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@Z @ 0x18000A54C (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUT_ea_18000A54C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v3; // rcx
  unsigned __int64 i; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // r9
  __int64 *v9; // r10
  __int64 *v10; // rax
  char *v11; // rdi
  __int64 *v12; // rax
  char *v13; // rax
  __int64 j; // rbp
  char **v15; // rax
  char *v16; // rcx
  char *v17; // rbx
  char *v18; // r8
  char v20; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v3 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v3);
  v5 = v3 & a1[6];
  v6 = a1[3];
  v7 = *(__int64 **)(v6 + 16 * v5);
  v8 = 2 * v5;
  v9 = v7;
  while ( 1 )
  {
    if ( v9 == (__int64 *)a1[1] )
      v10 = (__int64 *)a1[1];
    else
      v10 = **(__int64 ***)(v6 + 8 * v8 + 8);
    if ( v7 == v10 )
      goto LABEL_18;
    if ( *((_DWORD *)v7 + 4) == *a2 )
      break;
    v7 = (__int64 *)*v7;
  }
  v11 = (char *)v7;
  while ( 1 )
  {
    v12 = v9 == (__int64 *)a1[1] ? (__int64 *)a1[1] : **(__int64 ***)(v6 + 8 * v8 + 8);
    if ( v7 == v12 || *a2 != *((_DWORD *)v7 + 4) )
      break;
    v7 = (__int64 *)*v7;
  }
  if ( v11 == (char *)v7 )
  {
LABEL_18:
    v7 = (__int64 *)a1[1];
    v11 = (char *)v7;
  }
  v13 = v11;
  for ( j = 0LL; v13 != (char *)v7; v13 = *(char **)v13 )
    ++j;
  v15 = (char **)a1[1];
  if ( v11 == *v15 && v7 == (__int64 *)v15 )
  {
    v16 = *v15;
    *v15 = (char *)v15;
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    if ( v16 != (char *)a1[1] )
    {
      do
      {
        v17 = *(char **)v16;
        std::_Deallocate(v16, 1uLL, 0x28uLL);
        v16 = v17;
      }
      while ( v17 != (char *)a1[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v11 != (char *)v7 )
    {
      v18 = v11;
      v11 = *(char **)v11;
      std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
        a1,
        &v20,
        v18);
    }
  }
  return j;
}
