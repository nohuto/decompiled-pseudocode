/*
 * XREFs of ??1?$CAtlList@PEAUIAudioAppVolumePolicyChange@@V?$CElementTraits@PEAUIAudioAppVolumePolicyChange@@@ATL@@@ATL@@QEAA@XZ @ 0x18000FEF0
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$2 @ 0x18002211D (_CApplication--CApplication_--_1_--dtor$2.c)
 *     _CApplication::CApplication_::_1_::dtor$3 @ 0x18002212D (_CApplication--CApplication_--_1_--dtor$3.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800221B8 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _CApplication::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800221C8 (_CApplication--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x18002263C (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$2.c)
 *     _CApplicationManager::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x18002264C (_CApplicationManager--_scalar_deleting_destructor__--_1_--dtor$3.c)
 *     _TSSession::_TSSession_::_1_::dtor$0 @ 0x18002290A (_TSSession--_TSSession_--_1_--dtor$0.c)
 *     _TSSession::_TSSession_::_1_::dtor$1 @ 0x18002291A (_TSSession--_TSSession_--_1_--dtor$1.c)
 *     _TSSession::_TSSession_::_1_::dtor$3 @ 0x18002293D (_TSSession--_TSSession_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>(
        __int64 a1)
{
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll(a1);
}
