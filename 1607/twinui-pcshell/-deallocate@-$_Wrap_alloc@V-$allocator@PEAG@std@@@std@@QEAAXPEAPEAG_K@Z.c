/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@PEAG@std@@@std@@QEAAXPEAPEAG_K@Z @ 0x18000C104
 * Callers:
 *     _std::vector_unsigned_short_____ptr64_std::allocator_unsigned_short_____ptr64___::_Reallocate_::_1_::catch$0 @ 0x180030DF0 (_std--vector_unsigned_short_____ptr64_std--allocator_unsigned_short_____ptr64___--_Reallocate_--.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<unsigned short *>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // rax
  unsigned __int64 v4; // rdx

  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
  if ( 8 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) != 0 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      __debugbreak();
    }
    v3 = (char *)*((_QWORD *)a2 - 1);
    if ( v3 >= a2 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      __debugbreak();
    }
    v4 = a2 - v3;
    if ( v4 < 8 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      __debugbreak();
    }
    if ( v4 > 0x27 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      __debugbreak();
    }
    a2 = v3;
  }
  operator delete(a2);
}
