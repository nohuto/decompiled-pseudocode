/*
 * XREFs of _TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor$6 @ 0x180030CE8
 * Callers:
 *     <none>
 * Callees:
 *     ??1_bstr_t@@QEAA@XZ @ 0x180008E8C (--1_bstr_t@@QEAA@XZ.c)
 */

void __fastcall TaskbarLayoutParser::ParsePinnedAppNode_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 192) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 192) &= ~2u;
    _bstr_t::~_bstr_t((_bstr_t *)(a2 + 72));
  }
}
