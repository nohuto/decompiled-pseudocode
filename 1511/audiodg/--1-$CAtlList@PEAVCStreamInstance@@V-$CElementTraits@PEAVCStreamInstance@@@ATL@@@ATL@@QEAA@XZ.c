/*
 * XREFs of ??1?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x1400268D4
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$3 @ 0x14001ACB0 (_CStreamGroup--_CStreamGroup_--_1_--dtor$3.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$3 @ 0x14001AD87 (_CStreamGroup--CStreamGroup_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x14001AE52 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x14001AE62 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x14001AE72 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x14001AEEA (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x14001AEFA (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x14001AF0A (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::~CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll(a1);
}
