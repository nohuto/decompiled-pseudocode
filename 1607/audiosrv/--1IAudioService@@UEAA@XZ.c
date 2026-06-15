/*
 * XREFs of ??1IAudioService@@UEAA@XZ @ 0x180038FC4
 * Callers:
 *     _CAudioSrv::CAudioSrv_::_1_::dtor$0 @ 0x18003BB18 (_CAudioSrv--CAudioSrv_--_1_--dtor$0.c)
 *     _CAudioSrv::_CAudioSrv_::_1_::dtor$0 @ 0x180051F69 (_CAudioSrv--_CAudioSrv_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall IAudioService::~IAudioService(IAudioService *this)
{
  *(_QWORD *)this = &IAudioService::`vftable';
}
