/*
 * XREFs of ??1?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18007AEF8
 * Callers:
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$17 @ 0x1800A2FBD (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$17.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>::~_Tree_comp_alloc<std::_Tmap_traits<unsigned long,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<SpatialInteractionDevices::SpatialInteractionController>>>,0>>(
        char **a1)
{
  std::_Deallocate(*a1, 1uLL, 0x38uLL);
}
