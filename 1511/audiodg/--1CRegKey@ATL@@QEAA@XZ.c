/*
 * XREFs of ??1CRegKey@ATL@@QEAA@XZ @ 0x140035EC4
 * Callers:
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$0 @ 0x140038D3A (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$0.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$1 @ 0x140038D46 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$1.c)
 *     _ATL::CRegParser::RegisterSubkeys_::_1_::dtor$2 @ 0x140038D52 (_ATL--CRegParser--RegisterSubkeys_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CRegKey::~CRegKey(ATL::CRegKey *this)
{
  ATL::CRegKey::Close(this);
}
