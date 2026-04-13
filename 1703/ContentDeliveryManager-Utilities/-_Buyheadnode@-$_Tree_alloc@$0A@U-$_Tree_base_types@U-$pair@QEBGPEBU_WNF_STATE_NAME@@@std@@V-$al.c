/*
 * XREFs of ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@XZ @ 0x180055408
 * Callers:
 *     CreativeFramework::Triggers::_dynamic_initializer_for__wellKnownWnfs__ @ 0x180001500 (CreativeFramework--Triggers--_dynamic_initializer_for__wellKnownWnfs__.c)
 *     ??0?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@1@@Z @ 0x180055304 (--0-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x18006A6D0 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_WORD *std::_Tree_alloc<0,std::_Tree_base_types<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>>::_Buyheadnode()
{
  _WORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x30uLL);
  if ( !result )
    std::_Xbad_alloc();
  try
  {
    *(_QWORD *)result = result;
    if ( result != (_WORD *)-8LL )
      *((_QWORD *)result + 1) = result;
    v1 = result + 8;
    if ( result != (_WORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      (__int64)v1,
      result);
    throw;
  }
  result[12] = 257;
  return result;
}
