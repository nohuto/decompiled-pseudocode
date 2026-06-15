/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x180048D14
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x18004AD12 (_CApplication--CApplication_--_1_--dtor$0.c)
 *     _CApplicationManager::CApplicationManager_::_1_::dtor$0 @ 0x18004C1E9 (_CApplicationManager--CApplicationManager_--_1_--dtor$0.c)
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$0 @ 0x18004C8A5 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$0 @ 0x18007F37B (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$0.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$0 @ 0x18009E443 (_CApplicationManager--_CApplicationManager_--_1_--dtor$0.c)
 *     _CApplication::_CApplication_::_1_::dtor$0 @ 0x18009FB01 (_CApplication--_CApplication_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
