/*
 * XREFs of ?DesktopPlaneSplitEnabled@COverlayContext@@AEAA_NXZ @ 0x1800FB6F4
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18007EBB0 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall COverlayContext::DesktopPlaneSplitEnabled(COverlayContext *this)
{
  _BOOL8 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( CCommonRegistryData::m_fEnableDesktopPlaneSplit && *((_DWORD *)this + 23) > 2u && *((_DWORD *)this + 24) > 2u )
  {
    v2 = *((_QWORD *)this + 9);
    if ( *(_DWORD *)(v2 + 256) == 1297040209 )
      return *(_DWORD *)(v2 + 252) >= 2000;
  }
  return result;
}
