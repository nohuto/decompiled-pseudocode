/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140026994
 * Callers:
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$2 @ 0x14001B9CC (_CSystemAudioDeviceCollection--Add_--_1_--dtor$2.c)
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$1 @ 0x14001B9D8 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  ATL::CStringData::Release((ATL::CStringData *)(*a1 - 24LL));
}
