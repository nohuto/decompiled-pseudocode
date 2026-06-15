/*
 * XREFs of ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180041F98
 * Callers:
 *     ??0CDeviceGraphStore@@QEAA@XZ @ 0x180041F08 (--0CDeviceGraphStore@@QEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180042E78 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *std::_Tree_alloc<0,std::_Tree_base_types<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = operator new(0x48uLL);
  if ( !result )
    std::_Xbad_alloc();
  try
  {
    *result = result;
    if ( result != (_QWORD *)-8LL )
      result[1] = result;
    if ( result != (_QWORD *)-16LL )
      result[2] = result;
  }
  catch ( ... )
  {
    operator delete(result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
