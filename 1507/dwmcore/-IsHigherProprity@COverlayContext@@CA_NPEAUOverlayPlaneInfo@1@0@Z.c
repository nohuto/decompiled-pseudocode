/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1800F7114
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@AEAAHAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800F69CC (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@AEAAHAEAV-$DynArray@PEAUOverlayPlaneIn.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x1800F7634 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsHigherProprity(
        struct COverlayContext::OverlayPlaneInfo *a1,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // si
  char v5; // r15
  char v6; // al
  char v7; // al
  char v8; // dl
  char v9; // al
  int v10; // ecx
  int v11; // edx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 80LL))(*((_QWORD *)a1 + 1));
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 80LL))(*((_QWORD *)a2 + 1));
  if ( v5 && !v6 )
    return 1;
  if ( v5 == v6 )
  {
    COverlayContext::RequiresFrontPlane(a1);
    v7 = COverlayContext::RequiresFrontPlane(a2);
    if ( v8 && !v7 )
      return 1;
    if ( v8 == v7 )
    {
      v9 = *((_BYTE *)a1 + 152);
      if ( v9 && !*((_BYTE *)a2 + 152) )
        return 1;
      if ( v9 == *((_BYTE *)a2 + 152) )
      {
        v10 = (*((_DWORD *)a1 + 19) - *((_DWORD *)a1 + 17)) * (*((_DWORD *)a1 + 20) - *((_DWORD *)a1 + 18));
        v11 = (*((_DWORD *)a2 + 19) - *((_DWORD *)a2 + 17)) * (*((_DWORD *)a2 + 20) - *((_DWORD *)a2 + 18));
        if ( v10 > v11 )
          return 1;
        if ( v10 == v11 && *((_BYTE *)a1 + 168) )
          return *((_BYTE *)a2 + 168) == 0;
      }
    }
  }
  return v4;
}
