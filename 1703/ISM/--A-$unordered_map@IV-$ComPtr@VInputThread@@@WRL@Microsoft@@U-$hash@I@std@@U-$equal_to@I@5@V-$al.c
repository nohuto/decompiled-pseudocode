/*
 * XREFs of ??A?$unordered_map@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBI@Z @ 0x18006A19C
 * Callers:
 *     ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180069450 (-OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 *     ?OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z @ 0x180069A48 (-OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x18006AFF0 (--$_Insert@AEAU-$pair@$$CBIV-$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V-$_List_unchecked_iter.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006B664 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 */

__int64 *__fastcall std::unordered_map<unsigned int,Microsoft::WRL::ComPtr<InputThread>>::operator[](
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 *j; // rax
  __int64 *v13; // rdx
  __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD v19[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = v4 & a1[6];
  v8 = a1[3];
  v9 = 2 * v7;
  v10 = 2 * v7;
  v11 = (__int64 *)a1[1];
  for ( j = *(__int64 **)(v8 + 8 * v9); ; j = (__int64 *)*j )
  {
    v13 = *(__int64 **)(v8 + 8 * v10) == v11 ? (__int64 *)a1[1] : **(__int64 ***)(v8 + 8 * v10 + 8);
    if ( j == v13 )
      break;
    if ( *((_DWORD *)j + 4) == *a2 )
      goto LABEL_12;
  }
  j = (__int64 *)a1[1];
LABEL_12:
  if ( j == v11 )
  {
    v14 = *v11;
    v15 = *v11;
    v20 = a2;
    v16 = std::_List_buy<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (_DWORD)v11,
            v15,
            *(_QWORD *)(v14 + 8),
            v10,
            (__int64)&v20);
    v17 = a1[2];
    if ( v17 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v17 + 1;
    *(_QWORD *)(v14 + 8) = v16;
    **(_QWORD **)(v16 + 8) = v16;
    std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>::_Insert<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>>>>(
      a1,
      v19,
      *(_QWORD *)a1[1] + 16LL,
      *(_QWORD *)a1[1]);
    j = (__int64 *)v19[0];
  }
  return j + 3;
}
