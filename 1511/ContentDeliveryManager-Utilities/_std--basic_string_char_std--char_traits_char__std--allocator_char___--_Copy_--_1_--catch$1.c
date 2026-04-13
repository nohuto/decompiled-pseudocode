/*
 * XREFs of _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$1 @ 0x180028814
 * Callers:
 *     <none>
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180022C48 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180022CC8 (--2@YAPEAX_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rax
  size_t v5; // rcx

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = 0LL;
  v5 = v3 + 1;
  if ( v5 )
  {
    v4 = operator new(v5);
    if ( !v4 )
      std::_Xbad_alloc();
  }
  *(_QWORD *)(a2 + 120) = v4;
  return &loc_180004C56;
}
