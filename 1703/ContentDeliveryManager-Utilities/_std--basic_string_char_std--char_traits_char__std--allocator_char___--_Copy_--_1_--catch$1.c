/*
 * XREFs of _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x180070B0F
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x18006A6D0 (-_Xbad_alloc@std@@YAXXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  size_t v4; // rcx
  void *v5; // rax

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = v3 + 1;
  v5 = 0LL;
  if ( v4 )
  {
    v5 = operator new(v4);
    if ( !v5 )
      std::_Xbad_alloc();
  }
  *(_QWORD *)(a2 + 120) = v5;
  return &loc_180013480;
}
