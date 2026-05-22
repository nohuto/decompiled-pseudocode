/*
 * XREFs of ?UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z @ 0x180030A90
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84 (--1ControllerProcessor@@MEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180031400 (-erase@-$_Hash@V-$_Umap_traits@KPEAVControllerProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U-$eq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::UnregisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  unsigned __int64 i; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // r8
  __int64 *v9; // r9
  __int64 *v10; // rax
  char *v11; // rdi
  __int64 *v12; // rax
  char **v13; // rax
  char *v14; // rcx
  char *v15; // rbx
  char *v16; // r8
  char *v18; // [rsp+40h] [rbp+8h] BYREF
  int v19; // [rsp+48h] [rbp+10h]

  v19 = a2;
  v2 = (_QWORD *)((char *)this + 24);
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v3 = 0x100000001B3LL * (*((unsigned __int8 *)&v19 + i) ^ (unsigned __int64)v3);
  v5 = v3 & v2[6];
  v6 = v2[3];
  v7 = *(__int64 **)(v6 + 16 * v5);
  v8 = 2 * v5;
  v9 = v7;
  while ( 1 )
  {
    if ( v9 == (__int64 *)v2[1] )
      v10 = (__int64 *)v2[1];
    else
      v10 = **(__int64 ***)(v6 + 8 * v8 + 8);
    if ( v7 == v10 )
      goto LABEL_18;
    if ( *((_DWORD *)v7 + 4) == a2 )
      break;
    v7 = (__int64 *)*v7;
  }
  v11 = (char *)v7;
  while ( 1 )
  {
    v12 = v9 == (__int64 *)v2[1] ? (__int64 *)v2[1] : **(__int64 ***)(v6 + 8 * v8 + 8);
    if ( v7 == v12 || a2 != *((_DWORD *)v7 + 4) )
      break;
    v7 = (__int64 *)*v7;
  }
  if ( v11 == (char *)v7 )
  {
LABEL_18:
    v7 = (__int64 *)v2[1];
    v11 = (char *)v7;
  }
  v18 = v11;
  v13 = (char **)v2[1];
  if ( v11 == *v13 && v7 == (__int64 *)v13 )
  {
    v14 = *v13;
    *v13 = (char *)v13;
    *(_QWORD *)(v2[1] + 8LL) = v2[1];
    v2[2] = 0LL;
    if ( v14 != (char *)v2[1] )
    {
      do
      {
        v15 = *(char **)v14;
        std::_Deallocate(v14, 1uLL, 0x20uLL);
        v14 = v15;
      }
      while ( v15 != (char *)v2[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      v2,
      8LL);
  }
  else
  {
    while ( v11 != (char *)v7 )
    {
      v16 = v11;
      v11 = *(char **)v11;
      std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::erase(
        v2,
        &v18,
        v16);
    }
  }
  return 0LL;
}
