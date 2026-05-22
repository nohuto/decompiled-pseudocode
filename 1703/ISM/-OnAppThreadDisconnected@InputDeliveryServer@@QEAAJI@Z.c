/*
 * XREFs of ?OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z @ 0x180069A48
 * Callers:
 *     ?OnPeerDisconnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x18006B6F0 (-OnPeerDisconnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??A?$unordered_map@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBI@Z @ 0x18006A19C (--A-$unordered_map@IV-$ComPtr@VInputThread@@@WRL@Microsoft@@U-$hash@I@std@@U-$equal_to@I@5@V-$al.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18006A2B4 (-erase@-$_Hash@V-$_Umap_traits@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_dele.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18006A480 (-erase@-$_Hash@V-$_Umap_traits@IV-$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V-$_Uhash_compare@I.c)
 *     ?GetThread@InputTarget@@QEBA?AV?$ComPtr@VInputThread@@@WRL@Microsoft@@XZ @ 0x18006BBFC (-GetThread@InputTarget@@QEBA-AV-$ComPtr@VInputThread@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::OnAppThreadDisconnected(InputDeliveryServer *this, int a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 *v12; // r9
  __int64 *v13; // rax
  char *v14; // rdi
  __int64 *v15; // rax
  char **v16; // rax
  char *v17; // rbx
  char *v18; // rdi
  __int64 v19; // rcx
  char *v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  __int64 Thread; // rax
  __int64 v24; // r9
  bool v25; // di
  char *v26; // rcx
  __int64 v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  char *v31; // [rsp+60h] [rbp+30h] BYREF
  int v32; // [rsp+68h] [rbp+38h] BYREF
  char v33; // [rsp+70h] [rbp+40h] BYREF

  v32 = a2;
  v3 = (_QWORD *)((char *)this + 392);
  v4 = (_QWORD *)std::unordered_map<unsigned int,Microsoft::WRL::ComPtr<InputThread>>::operator[](
                   (char *)this + 392,
                   &v32);
  v5 = (_QWORD *)*v4;
  if ( *v4 )
    (*(void (__fastcall **)(_QWORD))(*v5 + 8LL))(*v4);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v32 + i) ^ (unsigned __int64)v6);
  v8 = v6 & v3[6];
  v9 = v3[3];
  v10 = *(__int64 **)(v9 + 16 * v8);
  v11 = 2 * v8;
  v12 = v10;
  while ( 1 )
  {
    if ( v12 == (__int64 *)v3[1] )
      v13 = (__int64 *)v3[1];
    else
      v13 = **(__int64 ***)(v9 + 8 * v11 + 8);
    if ( v10 == v13 )
      goto LABEL_20;
    if ( *((_DWORD *)v10 + 4) == v32 )
      break;
    v10 = (__int64 *)*v10;
  }
  v14 = (char *)v10;
  while ( 1 )
  {
    v15 = v12 == (__int64 *)v3[1] ? (__int64 *)v3[1] : **(__int64 ***)(v9 + 8 * v11 + 8);
    if ( v10 == v15 || v32 != *((_DWORD *)v10 + 4) )
      break;
    v10 = (__int64 *)*v10;
  }
  if ( v14 == (char *)v10 )
  {
LABEL_20:
    v10 = (__int64 *)v3[1];
    v14 = (char *)v10;
  }
  v31 = v14;
  v16 = (char **)v3[1];
  if ( v14 == *v16 && v10 == (__int64 *)v16 )
  {
    v17 = *v16;
    *v16 = (char *)v16;
    *(_QWORD *)(v3[1] + 8LL) = v3[1];
    v3[2] = 0LL;
    if ( v17 != (char *)v3[1] )
    {
      do
      {
        v18 = *(char **)v17;
        v19 = *((_QWORD *)v17 + 3);
        if ( v19 )
        {
          *((_QWORD *)v17 + 3) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        std::_Deallocate(v17, 1uLL, 0x20uLL);
        v17 = v18;
      }
      while ( v18 != (char *)v3[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      v3,
      8LL);
  }
  else
  {
    while ( v14 != (char *)v10 )
    {
      v20 = v14;
      v14 = *(char **)v14;
      std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
        v3,
        &v31,
        v20);
    }
  }
  v21 = (_QWORD *)*((_QWORD *)this + 42);
  v22 = (_QWORD *)*v21;
  if ( (_QWORD *)*v21 != v21 )
  {
    do
    {
      Thread = InputTarget::GetThread(v22[8], &v31);
      v25 = *(_DWORD *)(*(_QWORD *)Thread + 16LL) == v32;
      v26 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v26 + 16LL))(v26);
      }
      if ( v25 )
        v22 = *(_QWORD **)std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::erase(
                            (char *)this + 328,
                            &v33,
                            v22,
                            v24);
      else
        v22 = (_QWORD *)*v22;
    }
    while ( v22 != *((_QWORD **)this + 42) );
  }
  v27 = v5[3];
  if ( v27 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v27 + 8LL))(v5[3]);
  v28 = (_QWORD *)*((_QWORD *)this + 34);
  v29 = (_QWORD *)*v28;
  if ( (_QWORD *)*v28 != v28 )
  {
    do
    {
      if ( *(_QWORD *)(v29[3] + 24LL) == v27 )
        v29 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
                            (char *)this + 264,
                            &v31,
                            v29);
      else
        v29 = (_QWORD *)*v29;
    }
    while ( v29 != *((_QWORD **)this + 34) );
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return 0LL;
}
