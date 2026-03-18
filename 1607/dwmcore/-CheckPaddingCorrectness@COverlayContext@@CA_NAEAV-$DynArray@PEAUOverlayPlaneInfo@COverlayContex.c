/*
 * XREFs of ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x180127BA4
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x1800B20D0 (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x180129770 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
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
  v5 = !COverlayContext::RectContainsRect((struct tagRECT *)(a2 + 60), (struct tagRECT *)(a2 + 76));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 24); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
    if ( *(_QWORD *)a2 == *(_QWORD *)v7 )
    {
      if ( *(_DWORD *)(a2 + 216) >= *(_DWORD *)(v7 + 216) )
      {
        if ( COverlayContext::RectContainsRect((struct tagRECT *)(v7 + 60), (struct tagRECT *)(v7 + 76)) )
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
  }
  return v4;
}
