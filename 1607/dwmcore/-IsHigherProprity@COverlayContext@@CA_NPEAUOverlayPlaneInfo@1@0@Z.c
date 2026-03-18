/*
 * XREFs of ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1801290E4
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129B2C (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsHigherProprity(
        struct COverlayContext::OverlayPlaneInfo *a1,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // bl
  char v5; // bp
  char v6; // al
  char v7; // al
  char v8; // dl
  char v9; // al
  int v10; // ecx
  int v11; // edx

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 2) + 104LL))(*((_QWORD *)a1 + 2));
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 104LL))(*((_QWORD *)a2 + 2));
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
      v9 = *((_BYTE *)a1 + 168);
      if ( v9 && !*((_BYTE *)a2 + 168) )
        return 1;
      if ( v9 == *((_BYTE *)a2 + 168) )
      {
        v10 = (*((_DWORD *)a1 + 21) - *((_DWORD *)a1 + 19)) * (*((_DWORD *)a1 + 22) - *((_DWORD *)a1 + 20));
        v11 = (*((_DWORD *)a2 + 21) - *((_DWORD *)a2 + 19)) * (*((_DWORD *)a2 + 22) - *((_DWORD *)a2 + 20));
        if ( v10 > v11 )
          return 1;
        if ( v10 == v11 && *((_BYTE *)a1 + 184) )
          return *((_BYTE *)a2 + 184) == 0;
      }
    }
  }
  return v4;
}
