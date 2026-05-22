/*
 * XREFs of ?Get@PropertyDefinitions@@SAJPEAPEAV1@@Z @ 0x180029490
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180027368 (-CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z.c)
 *     ?Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x1800275E0 (-Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180029524 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@XZ @ 0x18002A7F4 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U-$KeyCompareTrait.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PropertyDefinitions::Get(struct PropertyDefinitions **a1)
{
  struct PropertyDefinitions *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = PropertyDefinitions::s_this;
  result = (unsigned int)PropertyDefinitions::s_hrThis;
  if ( !PropertyDefinitions::s_this && PropertyDefinitions::s_hrThis == 1 )
  {
    v2 = (struct PropertyDefinitions *)operator new((unsigned int)((_DWORD)PropertyDefinitions::s_this + 32));
    *(_QWORD *)v2 = 0LL;
    *((_QWORD *)v2 + 1) = 0LL;
    *(_QWORD *)v2 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Buyheadnode(v4);
    *((_QWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 2) = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Buyheadnode(v5);
    PropertyDefinitions::s_this = v2;
    result = 0LL;
    PropertyDefinitions::s_hrThis = 0;
  }
  if ( (int)result >= 0 )
    *a1 = v2;
  return result;
}
