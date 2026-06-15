/*
 * XREFs of _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$1 @ 0x180049BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180046DB8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  LPVOID v4; // rax
  unsigned __int64 v5; // rcx

  v3 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 120) = v3;
  v4 = 0LL;
  v5 = v3 + 1;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFFLL || (v4 = operator new(2 * v5)) == 0LL )
      std::_Xbad_alloc();
  }
  *(_QWORD *)(a2 + 136) = v4;
  return &loc_18004F5B5;
}
