/*
 * XREFs of ??1?$unordered_map@KPEAVControllerProcessor@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@@std@@QEAA@XZ @ 0x180030884
 * Callers:
 *     _ControllerNavigationManager::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800A0E7C (_ControllerNavigationManager--_scalar_deleting_destructor__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<unsigned long,ControllerProcessor *>::~unordered_map<unsigned long,ControllerProcessor *>(
        __int64 a1)
{
  return std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::~_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>(a1);
}
