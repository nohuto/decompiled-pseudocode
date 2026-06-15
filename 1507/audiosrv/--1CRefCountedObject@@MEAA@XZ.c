/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x180044AC4
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$0 @ 0x1800454B6 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$0.c)
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x18004653B (_CApplication--CApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::CApplicationManager_::_1_::dtor$0 @ 0x1800481A8 (_CApplicationManager--CApplicationManager_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$0 @ 0x180084923 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$0.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$0 @ 0x1800A12D3 (_CApplicationManager--_CApplicationManager_--_1_--dtor$0.c)
 *     _CApplication::_CApplication_::_1_::dtor$0 @ 0x1800A2939 (_CApplication--_CApplication_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
