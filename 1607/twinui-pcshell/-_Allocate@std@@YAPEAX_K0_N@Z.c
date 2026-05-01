/*
 * XREFs of ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180008DF0
 * Callers:
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180008368 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reallocate@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@IEAAX_K@Z @ 0x180008650 (-_Reallocate@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@IEAAX_K@.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180009B94 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ??0?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18000B8D0 (--0-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@.c)
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18000BAD4 (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reallocate@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BDE8 (-_Reallocate@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX.c)
 *     ?_Reallocate@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@IEAAX_K@Z @ 0x18000C00C (-_Reallocate@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@.c)
 *     ?_Reallocate@?$vector@PEAGV?$allocator@PEAG@std@@@std@@IEAAX_K@Z @ 0x18000C17C (-_Reallocate@-$vector@PEAGV-$allocator@PEAG@std@@@std@@IEAAX_K@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180019F6C (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x180030A79 (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Copy_--_1_--catch$1.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$1 @ 0x180031476 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002EE60 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Allocate(unsigned __int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax
  size_t v3; // rcx
  void *v4; // rax
  void *v5; // rcx

  if ( !a1 )
    return 0LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < a1 )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  v3 = a2 * a1;
  if ( v3 < 0x1000 )
  {
    result = operator new(v3);
    if ( !result )
    {
      _o__invalid_parameter_noinfo_noreturn();
      JUMPOUT(0x180008E6ALL);
    }
  }
  else
  {
    if ( v3 + 39 < v3 )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    v4 = operator new(v3 + 39);
    v5 = v4;
    if ( !v4 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    result = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(result - 1) = v5;
  }
  return result;
}
