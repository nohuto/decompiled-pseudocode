/*
 * XREFs of _std::numpunct_unsigned_short_::_Getcat_::_1_::dtor$1 @ 0x18005AC9A
 * Callers:
 *     <none>
 * Callees:
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18001B944 (--1_Locinfo@std@@QEAA@XZ.c)
 */

void __fastcall std::numpunct_unsigned_short_::_Getcat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 176) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    std::_Locinfo::~_Locinfo((std::_Locinfo *)(a2 + 40));
  }
}
