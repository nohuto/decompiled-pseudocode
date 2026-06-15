/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x18000A22C
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x180025288 (_CApplication--CApplication_--_1_--dtor$0.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180025319 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CApplicationManager::CreateInstance_::_1_::dtor$1 @ 0x180025753 (_CApplicationManager--CreateInstance_--_1_--dtor$1.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180025765 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CEndpointVolumeState::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180025A84 (_CEndpointVolumeState--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _TsSessionIdAddEndpointVolumeReference_::_1_::dtor$1 @ 0x180025D3E (_TsSessionIdAddEndpointVolumeReference_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
