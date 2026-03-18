/*
 * XREFs of ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x1800F67F8
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x18005E234 (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1800F722C (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 */

char __fastcall COverlayContext::CheckPaddingCorrectness(__int64 a1, __int64 a2)
{
  char v4; // bl
  bool v5; // bp
  __int64 i; // rdi
  __int64 v7; // rcx
  struct COverlayContext::OverlayPlaneInfo *v8; // rdx
  struct COverlayContext::OverlayPlaneInfo *v9; // rcx
  __int64 v10; // r9

  v4 = 1;
  v5 = !COverlayContext::RectContainsRect((struct tagRECT *)(a2 + 52), (struct tagRECT *)(a2 + 68));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    if ( *(_DWORD *)(a2 + 212) >= *(_DWORD *)(v7 + 212) )
    {
      if ( COverlayContext::RectContainsRect((struct tagRECT *)(v7 + 52), (struct tagRECT *)(v7 + 68)) )
        continue;
      v9 = *(struct COverlayContext::OverlayPlaneInfo **)(v10 + 8 * i);
      v8 = (struct COverlayContext::OverlayPlaneInfo *)a2;
    }
    else
    {
      if ( !v5 )
        continue;
      v8 = *(struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)a1 + 8 * i);
      v9 = (struct COverlayContext::OverlayPlaneInfo *)a2;
    }
    if ( COverlayContext::PaddingsIntersectWithDestRect(v9, v8) )
      return 0;
  }
  return v4;
}
