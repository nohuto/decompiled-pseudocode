/*
 * XREFs of _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$18 @ 0x1800A034D
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch_18(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  size_t v5; // rcx
  void *v6; // rax

  v3 = *(_QWORD *)(a2 + 104);
  *(_QWORD *)(a2 + 104) = v3;
  v4 = v3 + 1;
  if ( v3 != -1 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFFLL )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    v5 = 2 * v4;
    if ( v5 < 0x1000 )
    {
      v4 = (unsigned __int64)operator new(v5);
    }
    else
    {
      if ( v5 + 39 < v5 )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v6 = operator new(v5 + 39);
      v4 = ((unsigned __int64)v6 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
      *(_QWORD *)(v4 - 8) = v6;
    }
  }
  *(_QWORD *)(a2 + 120) = v4;
  return &loc_180021BEA;
}
