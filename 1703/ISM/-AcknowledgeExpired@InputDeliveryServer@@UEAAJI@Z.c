/*
 * XREFs of ?AcknowledgeExpired@InputDeliveryServer@@UEAAJI@Z @ 0x18006A040
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18006A480 (-erase@-$_Hash@V-$_Umap_traits@IV-$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V-$_Uhash_compare@I.c)
 */

__int64 __fastcall InputDeliveryServer::AcknowledgeExpired(InputDeliveryServer *this, int a2)
{
  __int64 v2; // r8
  unsigned __int64 i; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *j; // r8
  __int64 *v9; // rax
  char v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h]

  v12 = a2;
  v2 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v4 = *((unsigned __int8 *)&v12 + i);
    v2 = 0x100000001B3LL * (v4 ^ v2);
  }
  v5 = *((_QWORD *)this + 35);
  v6 = v2 & *((_QWORD *)this + 38);
  v7 = 2 * v6;
  for ( j = *(__int64 **)(v5 + 16 * v6); ; j = (__int64 *)*j )
  {
    v9 = *(_QWORD *)(v5 + 8 * v7) == *((_QWORD *)this + 33)
       ? (__int64 *)*((_QWORD *)this + 33)
       : **(__int64 ***)(v5 + 8 * v7 + 8);
    if ( j == v9 )
      break;
    if ( a2 == *((_DWORD *)j + 4) )
      goto LABEL_12;
  }
  j = (__int64 *)*((_QWORD *)this + 33);
LABEL_12:
  if ( j != *((__int64 **)this + 33) )
    std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
      (char *)this + 256,
      &v11,
      j);
  return 0LL;
}
