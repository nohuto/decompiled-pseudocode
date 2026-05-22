/*
 * XREFs of ??4PropertyMap@Input@@UEAAAEAVPropertyNode@1@AEBV21@@Z @ 0x180027CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x1800182E4 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x180028F40 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareT.c)
 */

__int64 __fastcall Input::PropertyMap::operator=(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r9
  _QWORD *v8; // rdx
  __int64 **v9; // rcx
  __int64 *i; // rax
  __int64 v11; // rax
  __int64 j; // rcx
  char v14; // [rsp+30h] [rbp+8h]

  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
    v4 = (_QWORD *)(a2 + 32);
    v5 = (_QWORD *)(a1 + 32);
    if ( a1 + 32 != a2 + 32 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::clear((_QWORD *)(a1 + 32));
      v6 = *v5;
      LOBYTE(v7) = v14;
      *(_QWORD *)(v6 + 8) = std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_nodes<std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Copy_tag>(
                              a1 + 32,
                              *(_QWORD *)(*v4 + 8LL),
                              *v5,
                              v7);
      *(_QWORD *)(a1 + 40) = v4[1];
      v8 = (_QWORD *)*v5;
      v9 = *(__int64 ***)(*v5 + 8LL);
      if ( *((_BYTE *)v9 + 25) )
      {
        *v8 = v8;
        *(_QWORD *)(*v5 + 16LL) = *v5;
      }
      else
      {
        for ( i = *v9; !*((_BYTE *)i + 25); i = (__int64 *)*i )
          v9 = (__int64 **)i;
        *v8 = v9;
        v11 = *(_QWORD *)(*v5 + 8LL);
        for ( j = *(_QWORD *)(v11 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          v11 = j;
        *(_QWORD *)(*v5 + 16LL) = v11;
      }
    }
  }
  return a1;
}
