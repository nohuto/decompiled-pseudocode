/*
 * XREFs of ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x180023690
 * Callers:
 *     ??$_Buynode@U?$pair@KH@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@$$QEAU?$pair@KH@1@@Z @ 0x1800236F0 (--$_Buynode@U-$pair@KH@std@@@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buynode0(
        _QWORD *a1,
        __int64 a2,
        bool a3)
{
  _QWORD *result; // rax

  result = std::_Allocate(1uLL, 0x28uLL, a3);
  try
  {
    if ( result )
      *result = *a1;
    if ( result != (_QWORD *)-8LL )
      result[1] = *a1;
    if ( result != (_QWORD *)-16LL )
      result[2] = *a1;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x28uLL);
    throw;
  }
  return result;
}
