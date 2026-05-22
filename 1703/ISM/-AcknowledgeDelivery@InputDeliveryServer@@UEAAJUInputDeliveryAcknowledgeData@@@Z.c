/*
 * XREFs of ?AcknowledgeDelivery@InputDeliveryServer@@UEAAJUInputDeliveryAcknowledgeData@@@Z @ 0x180069F40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18006A480 (-erase@-$_Hash@V-$_Umap_traits@IV-$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V-$_Uhash_compare@I.c)
 *     ?AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z @ 0x18006C754 (-AcknowledgeDelivery@InputQueue@@QEAAJPEAUInputDeliveryAcknowledgeData@@@Z.c)
 */

__int64 __fastcall InputDeliveryServer::AcknowledgeDelivery(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r8
  unsigned __int64 i; // r9
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  __int64 *j; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  v2 = a1 + 30;
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v5 = *((unsigned __int8 *)&v15 + i);
    v3 = 0x100000001B3LL * (v5 ^ v3);
  }
  v6 = v3 & a1[36];
  v7 = a1[33];
  v8 = (const char *)(2 * v6);
  for ( j = *(__int64 **)(v7 + 16 * v6); ; j = (__int64 *)*j )
  {
    v10 = *(_QWORD *)(v7 + 8LL * (_QWORD)v8) == a1[31] ? (__int64 *)a1[31] : **(__int64 ***)(v7 + 8LL * (_QWORD)v8 + 8);
    if ( j == v10 )
      break;
    if ( (_DWORD)a2 == *((_DWORD *)j + 4) )
      goto LABEL_12;
  }
  j = (__int64 *)a1[31];
LABEL_12:
  if ( j != (__int64 *)a1[31] )
  {
    v11 = j[3];
    if ( *(_BYTE *)(v11 + 16) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x43,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputacknowledge.cpp",
        v8);
      JUMPOUT(0x18006A030LL);
    }
    InputQueue::AcknowledgeDelivery(*(InputQueue **)(v11 + 24), (struct InputDeliveryAcknowledgeData *)&v15);
    *(_BYTE *)(v11 + 16) = 1;
    std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
      v2,
      &v14,
      j);
  }
  return 0LL;
}
