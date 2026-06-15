/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180032CCC
 * Callers:
 *     ??0CDeviceGraphStore@@QEAA@XZ @ 0x180032C48 (--0CDeviceGraphStore@@QEAA@XZ.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = std::_Allocate(1uLL, 0x48uLL);
  try
  {
    if ( result )
      *result = result;
    if ( result != (_QWORD *)-8LL )
      result[1] = result;
    if ( result != (_QWORD *)-16LL )
      result[2] = result;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x48uLL);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
