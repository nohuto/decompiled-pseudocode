/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000A2B8
 * Callers:
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$2 @ 0x180021CB1 (_CDuckingManager--OnStateChanged_--_1_--dtor$2.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$3 @ 0x180021CBD (_CDuckingManager--OnStateChanged_--_1_--dtor$3.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x180022459 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x1800225EB (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$3 @ 0x180022A15 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$3 @ 0x180022A5A (_TsSessionCreate_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$5 @ 0x180022A66 (_TsSessionCreate_--_1_--dtor$5.c)
 *     _TsSessionCreate_::_1_::dtor$7 @ 0x180022A72 (_TsSessionCreate_--_1_--dtor$7.c)
 *     _TsSessionCreate_::_1_::dtor$9 @ 0x180022A7E (_TsSessionCreate_--_1_--dtor$9.c)
 *     _TsSessionCreate_::_1_::dtor$11 @ 0x180022A8A (_TsSessionCreate_--_1_--dtor$11.c)
 *     _TsSessionCreate_::_1_::dtor$13 @ 0x180022A96 (_TsSessionCreate_--_1_--dtor$13.c)
 *     _TsSessionCreate_::_1_::dtor$15 @ 0x180022AA2 (_TsSessionCreate_--_1_--dtor$15.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1)
{
  volatile signed __int32 *v1; // rdx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  v1 = (volatile signed __int32 *)(*a1 - 24LL);
  v2 = _InterlockedExchangeAdd(v1 + 4, 0xFFFFFFFF);
  v3 = v2 <= 1;
  result = (unsigned int)(v2 - 1);
  if ( v3 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  return result;
}
