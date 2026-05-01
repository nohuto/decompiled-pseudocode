/*
 * XREFs of ??$_Uninit_copy@PEBU?$pair@PEBGPEBG@std@@PEAU12@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@YAPEAU?$pair@PEBGPEBG@0@PEBU10@0PEAU10@AEAU?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180008C70
 * Callers:
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180008368 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reallocate@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@IEAAX_K@Z @ 0x180008650 (-_Reallocate@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@IEAAX_K@.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall std::_Uninit_copy<std::pair<unsigned short const *,unsigned short const *> const *,std::pair<unsigned short const *,unsigned short const *> *,std::allocator<std::pair<unsigned short const *,unsigned short const *>>>(
        _OWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
        *a3 = *a1;
      ++a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    throw;
  }
  return a3;
}
