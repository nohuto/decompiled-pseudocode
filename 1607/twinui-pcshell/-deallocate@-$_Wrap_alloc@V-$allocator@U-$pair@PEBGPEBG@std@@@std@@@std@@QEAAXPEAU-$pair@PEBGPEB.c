/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$pair@PEBGPEBG@std@@@std@@@std@@QEAAXPEAU?$pair@PEBGPEBG@2@_K@Z @ 0x1800085C0
 * Callers:
 *     _std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::_Reallocate_::_1_::catch$0 @ 0x18003097A (_std--vector_std--pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr6_ea_18003097A.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::pair<unsigned short const *,unsigned short const *>>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rax
  unsigned __int64 v4; // rdx

  if ( a3 > 0xFFFFFFFFFFFFFFFLL )
  {
    _o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
  }
  if ( 16 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) != 0 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    v3 = (char *)*((_QWORD *)a2 - 1);
    if ( v3 >= a2 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    v4 = a2 - v3;
    if ( v4 < 8 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    if ( v4 > 0x27 )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    a2 = v3;
  }
  operator delete(a2);
}
