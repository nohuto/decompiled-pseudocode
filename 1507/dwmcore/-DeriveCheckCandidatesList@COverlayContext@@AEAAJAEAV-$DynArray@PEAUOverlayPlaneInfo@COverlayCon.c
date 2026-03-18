/*
 * XREFs of ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x18005E234 (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x1800DEB0C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x1800F67F8 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@AEAAHAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800F69CC (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@AEAAHAEAV-$DynArray@PEAUOverlayPlaneIn.c)
 *     ?InsertAt@?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x1800F6D9C (-InsertAt@-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@CO.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1800F7114 (-IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@AEAAXAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800F751C (-RemoveUnbackedSurfaces@COverlayContext@@AEAAXAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x1800F7634 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::DeriveCheckCandidatesList(__int64 a1, __int64 a2, bool *a3)
{
  bool v3; // bl
  bool *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r9
  unsigned int v7; // r14d
  unsigned int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // edi
  unsigned int v19; // r13d
  unsigned int v20; // r15d
  struct COverlayContext::OverlayPlaneInfo **v21; // r12
  bool v22; // cf
  char v23; // r15
  __int64 v24; // r8
  bool v25; // al
  __int64 v26; // r8
  bool v27; // di
  char v28; // al
  __int64 v29; // r8
  bool v30; // zf
  int v31; // eax
  unsigned int LowestPriorityOverlayCandidateIndex; // eax
  __int64 v33; // rcx
  char v34; // [rsp+30h] [rbp-48h]
  unsigned int v35; // [rsp+34h] [rbp-44h]
  unsigned int v36; // [rsp+38h] [rbp-40h]
  unsigned int v37; // [rsp+3Ch] [rbp-3Ch]
  __int64 v38; // [rsp+40h] [rbp-38h] BYREF
  __int128 v39; // [rsp+48h] [rbp-30h] BYREF
  __int64 v40; // [rsp+58h] [rbp-20h]
  unsigned int v41; // [rsp+60h] [rbp-18h]
  char v45; // [rsp+D8h] [rbp+60h]

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = 0;
  if ( !*(_DWORD *)(a1 + 160) )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 24) )
  {
    LowestPriorityOverlayCandidateIndex = COverlayContext::FindLowestPriorityOverlayCandidateIndex(a1, a2, a3, a1);
    DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v5, LowestPriorityOverlayCandidateIndex);
    COverlayContext::RemoveUnbackedSurfaces(v33, v5);
    goto LABEL_54;
  }
  v40 = 0LL;
  v41 = 0;
  v9 = 0;
  v37 = 0;
  v10 = 0;
  v36 = 0;
  v11 = 0;
  v35 = 0;
  v12 = 0;
  v45 = 0;
  v34 = 0;
  v39 = 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = 240LL * v12;
    *(_DWORD *)(*(_QWORD *)(v6 + 136) + v14 + 212) = v12;
    v38 = *(_QWORD *)(v6 + 136) + v14;
    v15 = v10 + 1;
    if ( (unsigned int)v15 < v10 )
      break;
    v7 = 0;
    if ( (unsigned int)v15 > v9 )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet(&v39, 8LL, 1LL, &v38);
      v18 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
      v7 = v18;
      if ( v18 < 0 )
        goto LABEL_50;
      v10 = v41;
      v9 = HIDWORD(v40);
      v13 = v39;
      v6 = a1;
    }
    else
    {
      v16 = v10++;
      v41 = v15;
      *(_QWORD *)(v13 + 8 * v16) = v38;
    }
    if ( ++v12 >= *(_DWORD *)(v6 + 160) )
    {
      if ( v10 )
      {
        while ( v11 < *(_DWORD *)(v6 + 92) - 1 )
        {
          v19 = -1;
          if ( v10 )
          {
            v19 = 0;
            v20 = 1;
            if ( v10 > 1 )
            {
              do
              {
                if ( COverlayContext::IsHigherProprity(
                       *(struct COverlayContext::OverlayPlaneInfo **)(v13 + 8LL * v20),
                       *(struct COverlayContext::OverlayPlaneInfo **)(v13 + 8LL * v19)) )
                {
                  v19 = v20;
                }
                ++v20;
              }
              while ( v20 < v10 );
              v5 = a2;
              v6 = a1;
            }
          }
          v21 = (struct COverlayContext::OverlayPlaneInfo **)(v13 + 8LL * v19);
          if ( *((_BYTE *)*v21 + 152) )
            v22 = v35 < *(_DWORD *)(v6 + 100);
          else
            v22 = v36 < *(_DWORD *)(v6 + 96) - 1;
          if ( !v22 )
            goto LABEL_47;
          v23 = COverlayContext::RequiresFrontPlane(*v21);
          v25 = COverlayContext::RectContainsRect((struct tagRECT *)(v24 + 52), (struct tagRECT *)(v24 + 68));
          v27 = !v25;
          if ( v23 )
          {
            if ( !v25 )
              goto LABEL_47;
            goto LABEL_32;
          }
          if ( !v25 || (v28 = v34) != 0 )
          {
            if ( !(unsigned __int8)COverlayContext::CheckPaddingCorrectness(v5, v26) )
              goto LABEL_47;
LABEL_32:
            v28 = v34;
          }
          if ( *(_DWORD *)(v5 + 24) )
          {
            if ( v23 != v45 )
              goto LABEL_47;
          }
          else
          {
            v45 = v23;
          }
          v29 = 0LL;
          if ( v27 )
            v28 = 1;
          v30 = *(_DWORD *)(v5 + 24) == 0;
          v34 = v28;
          while ( !v30
               && *((_DWORD *)*v21 + 53) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL * (unsigned int)v29) + 212LL) )
          {
            v29 = (unsigned int)(v29 + 1);
            v30 = (_DWORD)v29 == *(_DWORD *)(v5 + 24);
            if ( (unsigned int)v29 > *(_DWORD *)(v5 + 24) )
              goto LABEL_42;
          }
          v31 = DynArray<COverlayContext::OverlayPlaneInfo *,0>::InsertAt(v5, v21, v29);
          v7 = v31;
          if ( v31 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x83Au);
            goto LABEL_51;
          }
LABEL_42:
          ++v37;
          if ( *((_BYTE *)*v21 + 152) )
            ++v35;
          else
            ++v36;
LABEL_47:
          DynArray<CWARPCallbackRenderer *,0>::RemoveAt(&v39, v19);
          v10 = v41;
          if ( !v41 )
            break;
          v13 = v39;
          v6 = a1;
          v11 = v37;
          continue;
        }
      }
      COverlayContext::RemoveUnbackedSurfaces(v15, v5);
      DynArrayImpl<1>::~DynArrayImpl<1>(&v39);
      v4 = a3;
LABEL_54:
      v3 = *(_DWORD *)(v5 + 24) != 0;
LABEL_2:
      *v4 = v3;
      return v7;
    }
  }
  v18 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v7 = -2147024362;
LABEL_50:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x7DDu);
LABEL_51:
  DynArrayImpl<1>::~DynArrayImpl<1>(&v39);
  return v7;
}
