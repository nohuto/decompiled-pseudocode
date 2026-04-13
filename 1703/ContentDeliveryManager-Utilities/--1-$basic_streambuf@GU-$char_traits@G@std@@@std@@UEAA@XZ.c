/*
 * XREFs of ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18002D398
 * Callers:
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$3 @ 0x180071503 (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allo_ea_180071503.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$7 @ 0x180072161 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_180072161.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$5 @ 0x18007468C (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_18007468C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = (_QWORD *)a1[12];
  *a1 = &std::wstreambuf::`vftable';
  if ( v1 )
  {
    if ( *v1 )
    {
      v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
      if ( v2 )
        (**v2)(v2, 1LL);
    }
    operator delete(v1);
  }
}
