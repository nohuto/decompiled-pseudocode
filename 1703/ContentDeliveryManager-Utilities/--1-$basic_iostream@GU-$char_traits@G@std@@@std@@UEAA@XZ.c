/*
 * XREFs of ??1?$basic_iostream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18003CCCC
 * Callers:
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$1 @ 0x180072151 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_180072151.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_iostream<unsigned short>::~basic_iostream<unsigned short,std::char_traits<unsigned short>>(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 32) + 4LL) + a1 - 32) = &std::basic_iostream<unsigned short>::`vftable';
  v2 = *(int *)(*(_QWORD *)(a1 - 32) + 4LL);
  *(_DWORD *)(v2 + a1 - 36) = v2 - 32;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 16) + 4LL) + a1 - 16) = &std::basic_ostream<unsigned short>::`vftable';
  v3 = *(int *)(*(_QWORD *)(a1 - 16) + 4LL);
  *(_DWORD *)(v3 + a1 - 20) = v3 - 16;
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 32) + 4LL) + a1 - 32) = &std::basic_istream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 32);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 36) = *(_DWORD *)(result + 4) - 24;
  return result;
}
