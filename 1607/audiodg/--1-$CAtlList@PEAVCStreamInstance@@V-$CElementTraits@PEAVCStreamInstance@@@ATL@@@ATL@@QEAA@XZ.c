/*
 * XREFs of ??1?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA@XZ @ 0x1400256C8
 * Callers:
 *     _CStreamGroup::_CStreamGroup_::_1_::dtor$3 @ 0x14001A640 (_CStreamGroup--_CStreamGroup_--_1_--dtor$3.c)
 *     _CStreamGroup::CStreamGroup_::_1_::dtor$3 @ 0x14001A717 (_CStreamGroup--CStreamGroup_--_1_--dtor$3.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x14001A772 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x14001A782 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x14001A792 (_CSystemAudioDeviceBase--_CSystemAudioDeviceBase_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$0 @ 0x14001A80A (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$0.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$1 @ 0x14001A81A (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$1.c)
 *     _CSystemAudioDeviceBase::CSystemAudioDeviceBase_::_1_::dtor$2 @ 0x14001A82A (_CSystemAudioDeviceBase--CSystemAudioDeviceBase_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::~CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>(
        __int64 a1)
{
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll(a1);
}
