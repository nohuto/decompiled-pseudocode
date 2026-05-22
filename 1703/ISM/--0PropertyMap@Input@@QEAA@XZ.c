/*
 * XREFs of ??0PropertyMap@Input@@QEAA@XZ @ 0x180011584
 * Callers:
 *     ??0DisplayBinding@@QEAA@XZ @ 0x180019608 (--0DisplayBinding@@QEAA@XZ.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180019C5C (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x180019D80 (--0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z @ 0x180023D80 (-UpdateInputTarget@EdgeGestureTarget@@QEAAJIPEAX@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@XZ @ 0x1800187FC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTr.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
Input::PropertyMap *__fastcall Input::PropertyMap::PropertyMap(Input::PropertyMap *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  *(_QWORD *)this = &Input::PropertyNode::`vftable';
  *(_OWORD *)((char *)this + 8) = 0uLL;
  *((_QWORD *)this + 3) = 0LL;
  Input::PropertyNode::GetDefinition(this);
  *(_QWORD *)this = &Input::PropertyMap::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Buyheadnode(
                            v3,
                            v2,
                            v4);
  return this;
}
