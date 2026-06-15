/*
 * XREFs of ??1CRegObject@ATL@@UEAA@XZ @ 0x140035ED0
 * Callers:
 *     ??_ECRegObject@ATL@@UEAAPEAXI@Z @ 0x140036280 (--_ECRegObject@ATL@@UEAAPEAXI@Z.c)
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x1400391C4 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x140036D4C (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x140036DE0 (-ClearReplacements@CRegObject@ATL@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ATL::CRegObject::~CRegObject(ATL::CRegObject *this)
{
  ATL::CExpansionVector *v2; // rbx

  *(_QWORD *)this = &ATL::CRegObject::`vftable';
  ATL::CRegObject::ClearReplacements(this);
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  v2 = (ATL::CRegObject *)((char *)this + 8);
  ATL::CExpansionVector::ClearReplacements(v2);
  ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::~CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>((__int64)v2);
}
