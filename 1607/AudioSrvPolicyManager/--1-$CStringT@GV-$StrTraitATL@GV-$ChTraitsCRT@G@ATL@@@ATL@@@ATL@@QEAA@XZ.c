/*
 * XREFs of ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000A530
 * Callers:
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$2 @ 0x180024DFD (_CDuckingManager--OnStateChanged_--_1_--dtor$2.c)
 *     _CDuckingManager::OnStateChanged_::_1_::dtor$3 @ 0x180024E09 (_CDuckingManager--OnStateChanged_--_1_--dtor$3.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x180025598 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_____::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______::_1_::dtor$0 @ 0x180025735 (_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_unsigned_short___.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$3 @ 0x180025BA3 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$3.c)
 *     _TsSessionCreate_::_1_::dtor$4 @ 0x180025C1E (_TsSessionCreate_--_1_--dtor$4.c)
 *     _TsSessionCreate_::_1_::dtor$6 @ 0x180025C2A (_TsSessionCreate_--_1_--dtor$6.c)
 *     _TsSessionCreate_::_1_::dtor$8 @ 0x180025C36 (_TsSessionCreate_--_1_--dtor$8.c)
 *     _TsSessionCreate_::_1_::dtor$10 @ 0x180025C42 (_TsSessionCreate_--_1_--dtor$10.c)
 *     _TsSessionCreate_::_1_::dtor$12 @ 0x180025C4E (_TsSessionCreate_--_1_--dtor$12.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
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
