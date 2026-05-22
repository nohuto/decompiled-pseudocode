/*
 * XREFs of _std::operator__char_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x1800A0461
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1800209E4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::operator__char_std::char_traits_char__std::allocator_char____::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::string::~string(*(_QWORD *)(a2 + 64));
  }
}
