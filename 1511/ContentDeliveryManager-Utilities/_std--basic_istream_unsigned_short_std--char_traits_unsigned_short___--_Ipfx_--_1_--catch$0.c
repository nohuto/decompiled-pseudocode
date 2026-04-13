/*
 * XREFs of _std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::_Ipfx_::_1_::catch$0 @ 0x1800290EB
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180028090 (_CxxThrowException_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall std::basic_istream_unsigned_short_std::char_traits_unsigned_short___::_Ipfx_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  v2 = *(_QWORD *)(a2 + 96) + *(int *)(**(_QWORD **)(a2 + 96) + 4LL);
  v3 = *(_DWORD *)(v2 + 16) | 4;
  v4 = v3 & 0x17;
  *(_DWORD *)(v2 + 16) = v4;
  if ( (v4 & *(_DWORD *)(v2 + 20)) != 0 )
    throw;
  return &loc_180014CB3;
}
