/*
 * XREFs of ??4PropertyMap@Input@@QEAAAEAV01@$$QEAV01@@Z @ 0x180027C50
 * Callers:
 *     ??4PropertyMap@Input@@UEAAAEAVPropertyNode@1@$$QEAV21@@Z @ 0x180027DB0 (--4PropertyMap@Input@@UEAAAEAVPropertyNode@1@$$QEAV21@@Z.c)
 *     ?MoveConstruct@PropertyMap@Input@@UEAAPEAVPropertyNode@2@XZ @ 0x1800283A0 (-MoveConstruct@PropertyMap@Input@@UEAAPEAVPropertyNode@2@XZ.c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x1800182E4 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Input::PropertyMap::operator=(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( a2 != a1 )
  {
    *(_OWORD *)(a1 + 8) = *(_OWORD *)(a2 + 8);
    Input::PropertyNode::GetDefinition((Input::PropertyNode *)a1);
    v4 = (__int64 *)(a2 + 32);
    v5 = (__int64 *)(a1 + 32);
    if ( (__int64 *)(a1 + 32) != v4 )
    {
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::clear((_QWORD *)(a1 + 32));
      v6 = *v5;
      *v5 = *v4;
      *v4 = v6;
      v7 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 40) = v4[1];
      v4[1] = v7;
    }
  }
  return a1;
}
