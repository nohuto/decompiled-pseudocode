/*
 * XREFs of ??1?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x140026738
 * Callers:
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x14001B890 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x14001B8A0 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x14001B8B0 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x14001B930 (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x14001B940 (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x14001B950 (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::~CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll(a1);
}
