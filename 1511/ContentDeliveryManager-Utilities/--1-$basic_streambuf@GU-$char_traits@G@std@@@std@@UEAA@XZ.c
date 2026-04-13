/*
 * XREFs of ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180012218
 * Callers:
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$5 @ 0x1800290AC (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allo_ea_1800290AC.c)
 * Callees:
 *     ??_Glocale@std@@QEAAPEAXI@Z @ 0x180014870 (--_Glocale@std@@QEAAPEAXI@Z.c)
 */

void **__fastcall std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1)
{
  void **result; // rax
  std::locale *v2; // rcx

  result = &std::basic_streambuf<unsigned short>::`vftable';
  *a1 = &std::basic_streambuf<unsigned short>::`vftable';
  v2 = (std::locale *)a1[12];
  if ( v2 )
    return (void **)std::locale::`scalar deleting destructor'(v2, 1u);
  return result;
}
