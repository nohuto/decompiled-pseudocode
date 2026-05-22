/*
 * XREFs of ??1PropertyMap@Input@@UEAA@XZ @ 0x18001166C
 * Callers:
 *     ??_GPropertyMap@Input@@UEAAPEAXI@Z @ 0x180011600 (--_GPropertyMap@Input@@UEAAPEAXI@Z.c)
 *     ??_EDisplayBinding@@UEAAPEAXI@Z @ 0x180019750 (--_EDisplayBinding@@UEAAPEAXI@Z.c)
 *     ??1DWMInputTarget@@UEAA@XZ @ 0x180019E4C (--1DWMInputTarget@@UEAA@XZ.c)
 *     _DWMInputTarget::_DWMInputTarget_::_1_::dtor$2 @ 0x18009FD26 (_DWMInputTarget--_DWMInputTarget_--_1_--dtor$2.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAXXZ @ 0x1800182E4 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTrait@U_GUID@@@3@V-$.c)
 *     ?Dispose@PropertyMap@Input@@UEAAXXZ @ 0x180027F80 (-Dispose@PropertyMap@Input@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Input::PropertyMap::~PropertyMap(char **this)
{
  *this = (char *)&Input::PropertyMap::`vftable';
  Input::PropertyMap::Dispose((Input::PropertyMap *)this);
  std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::clear(this + 4);
  std::_Deallocate(this[4], 1uLL, 0x38uLL);
  *this = (char *)&Input::PropertyNode::`vftable';
}
