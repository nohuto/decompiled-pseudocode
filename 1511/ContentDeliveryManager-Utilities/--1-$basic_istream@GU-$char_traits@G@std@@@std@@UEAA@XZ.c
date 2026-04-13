/*
 * XREFs of ??1?$basic_istream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1800124AC
 * Callers:
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$1 @ 0x18002909C (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allo_ea_18002909C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_istream<unsigned short>::~basic_istream<unsigned short,std::char_traits<unsigned short>>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 24) + 4LL) + a1 - 24) = &std::basic_istream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 24);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 28) = *(_DWORD *)(result + 4) - 24;
  return result;
}
