/*
 * XREFs of ??1CExpansionVector@ATL@@QEAA@XZ @ 0x140035E74
 * Callers:
 *     _ATL::CRegObject::_CRegObject_::_1_::dtor$0 @ 0x140035F2A (_ATL--CRegObject--_CRegObject_--_1_--dtor$0.c)
 * Callees:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140036D4C (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CExpansionVector::~CExpansionVector(ATL::CExpansionVector *this)
{
  ATL::CExpansionVector::ClearReplacements(this);
  ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::~CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>((__int64)this);
}
