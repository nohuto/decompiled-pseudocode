/*
 * XREFs of ??1?$map@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180078458
 * Callers:
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$16 @ 0x1800A2FC9 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$16.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$2 @ 0x1800A2FD5 (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$2.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x18007AF0C (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$shared_ptr@VSpatialInteractionController@SpatialInteractionD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::map<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>::~map<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>(
        char **a1)
{
  std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::_Erase(
    a1,
    *((_QWORD *)*a1 + 1));
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  std::_Deallocate(*a1, 1uLL, 0x38uLL);
}
