/*
 * XREFs of _ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______CEndpointVolumeState_____ptr64_ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits_CEndpointVolumeState_____ptr64___::NewNode_::_1_::catch$3 @ 0x180022BFF
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180021B52 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______CEndpointVolumeState_____ptr64_ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits_CEndpointVolumeState_____ptr64___::NewNode_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
