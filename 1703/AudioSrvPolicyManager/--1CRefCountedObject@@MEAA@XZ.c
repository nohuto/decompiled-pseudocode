/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x180009F4C
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x180022101 (_CApplication--CApplication_--_1_--dtor$0.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18002219C (_CApplication--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CApplicationManager::CreateInstance_::_1_::dtor$1 @ 0x180022614 (_CApplicationManager--CreateInstance_--_1_--dtor$1.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x180022620 (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _CEndpointVolumeState::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800228EE (_CEndpointVolumeState--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _TsSessionIdAddEndpointVolumeReference_::_1_::dtor$1 @ 0x180022B67 (_TsSessionIdAddEndpointVolumeReference_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
