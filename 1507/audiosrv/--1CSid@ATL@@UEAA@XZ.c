/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x18000A774
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18000794C (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800328E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800365AC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$2 @ 0x18004581D (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$2.c)
 *     _CAudioDGProcess::GetADGProcessSD_::_1_::dtor$3 @ 0x180045829 (_CAudioDGProcess--GetADGProcessSD_--_1_--dtor$3.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x180045865 (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x180048A64 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180067A00 (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x18006B320 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  *(_QWORD *)this = &ATL::CSid::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL));
}
