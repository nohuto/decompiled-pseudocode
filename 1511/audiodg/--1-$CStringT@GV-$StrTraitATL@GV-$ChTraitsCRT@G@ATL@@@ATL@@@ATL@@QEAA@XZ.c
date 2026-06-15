/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x140026B18
 * Callers:
 *     _CSystemAudioDeviceCollection::Add_::_1_::dtor$1 @ 0x14001AAA6 (_CSystemAudioDeviceCollection--Add_--_1_--dtor$1.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x14001AAB8 (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  ATL::CStringData::Release((ATL::CStringData *)(*a1 - 24LL));
}
