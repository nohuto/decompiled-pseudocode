/*
 * XREFs of ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800398A8
 * Callers:
 *     ??$_Buynode@U?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@@Z @ 0x180038BB8 (--$_Buynode@U-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@@-$_.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800538BC (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180053AE8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(_QWORD *a1)
{
  _QWORD *v2; // rdx
  _QWORD *v3; // rcx

  v2 = operator new(0x60uLL);
  if ( !v2 )
    std::_Xbad_alloc();
  try
  {
    *v2 = *a1;
    if ( v2 != (_QWORD *)-8LL )
      v2[1] = *a1;
    v3 = v2 + 2;
    if ( v2 != (_QWORD *)-16LL )
      *v3 = *a1;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>::deallocate(
      (__int64)v3,
      v2);
    throw;
  }
  return v2;
}
