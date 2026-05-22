/*
 * XREFs of _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$18 @ 0x1800A03CD
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch_18(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx
  void *v5; // rax

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = (_QWORD *)(v3 + 1);
  if ( v3 != -1 )
  {
    if ( (unsigned __int64)v4 < 0x1000 )
    {
      v4 = operator new((size_t)v4);
    }
    else
    {
      if ( v3 + 40 < (unsigned __int64)(v3 + 1) )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v5 = operator new(v3 + 40);
      v4 = (_QWORD *)(((unsigned __int64)v5 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v4 - 1) = v5;
    }
  }
  *(_QWORD *)(a2 + 120) = v4;
  return &loc_180021D1B;
}
