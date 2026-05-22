/*
 * XREFs of ??A?$unordered_map@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@U?$hash@UtagInputRoutingInfo@@@3@U?$equal_to@UtagInputRoutingInfo@@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@@std@@QEAAAEAV?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@1@AEBUtagInputRoutingInfo@@@Z @ 0x18006A384
 * Callers:
 *     ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z @ 0x180069210 (-PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBX_K@Z.c)
 *     ?PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z @ 0x180069360 (-PostInputMessage@InputDeliveryServer@@UEAAJPEBUtagInputRoutingInfo@@PEBUKeyboardEvent@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x18006ADF0 (--$_Insert@AEAU-$pair@$$CBUtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VI.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUtagInputRoutingInfo@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUtagInputRoutingInfo@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006B6A0 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBUtagInputRoutingInfo@@@2@V-$tuple@$$V@2@@.c)
 */

__int64 *__fastcall std::unordered_map<tagInputRoutingInfo,std::unique_ptr<InputTarget>>::operator[](
        _QWORD *a1,
        unsigned int *a2)
{
  __int64 v2; // r11
  unsigned int v4; // r9d
  __int64 v6; // r10
  unsigned __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 *i; // rax
  __int64 *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[3];
  v4 = *a2;
  v6 = a2[1];
  v7 = a1[6] & (v6 | ((unsigned __int64)*a2 << 32));
  v8 = (__int64 *)a1[1];
  v9 = 2 * v7;
  for ( i = *(__int64 **)(v2 + 8 * v9); ; i = (__int64 *)*i )
  {
    if ( *(__int64 **)(v2 + 8 * v9) == v8 )
      v11 = v8;
    else
      v11 = **(__int64 ***)(v2 + 8 * v9 + 8);
    if ( i == v11 )
      goto LABEL_11;
    if ( *((_DWORD *)i + 4) == v4 && *((_DWORD *)i + 5) == (_DWORD)v6 )
      break;
  }
  if ( v4 != *((_DWORD *)i + 4) || (_DWORD)v6 != *((_DWORD *)i + 5) )
LABEL_11:
    i = v8;
  if ( i == v8 )
  {
    v17 = a2;
    v12 = *v8;
    v13 = std::_List_buy<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<tagInputRoutingInfo const &>,std::tuple<>>(
            (_DWORD)v8,
            *v8,
            *(_QWORD *)(*v8 + 8),
            v4,
            (__int64)&v17);
    v14 = a1[2];
    if ( v14 == 0x38E38E38E38E38DLL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v14 + 1;
    *(_QWORD *)(v12 + 8) = v13;
    **(_QWORD **)(v13 + 8) = v13;
    std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::_Insert<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>(
      a1,
      v16,
      *(_QWORD *)a1[1] + 16LL,
      *(_QWORD *)a1[1]);
    i = (__int64 *)v16[0];
  }
  return i + 8;
}
