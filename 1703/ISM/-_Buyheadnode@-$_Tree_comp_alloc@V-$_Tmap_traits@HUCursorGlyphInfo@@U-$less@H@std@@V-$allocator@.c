/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@XZ @ 0x180021D78
 * Callers:
 *     ??0DWMHardwareCursor@@IEAA@PEAUIInputDisplay@@@Z @ 0x18001FD7C (--0DWMHardwareCursor@@IEAA@PEAUIInputDisplay@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x50uLL);
  try
  {
    if ( result )
      *result = result;
    if ( result != (_QWORD *)-8LL )
      result[1] = result;
    v1 = result + 2;
    if ( result != (_QWORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *>>>::deallocate(
      (__int64)v1,
      (char *)result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
