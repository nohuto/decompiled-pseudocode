/*
 * XREFs of ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x18007EBB0
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x1800ADD1C (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?DesktopPlaneSplitEnabled@COverlayContext@@AEAA_NXZ @ 0x1800FB6F4 (-DesktopPlaneSplitEnabled@COverlayContext@@AEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x180105A70 (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x180110640 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180110884 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@AEAAHAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180110D18 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@AEAAHAEAV-$DynArray@PEAUOverlayPlaneIn.c)
 *     ?InsertAt@?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180111040 (-InsertAt@-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@CO.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1801114A4 (-IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@AEAAXAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180111950 (-RemoveUnbackedSurfaces@COverlayContext@@AEAAXAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180111A68 (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::DeriveCheckCandidatesList(COverlayContext *this, __int64 a2, char *a3)
{
  int v3; // ebx
  unsigned int v4; // r13d
  int v5; // eax
  __int64 v6; // r15
  COverlayContext *v7; // rdi
  unsigned int v8; // r12d
  char v9; // r14
  __int64 v10; // rsi
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // esi
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // ebx
  unsigned int v21; // esi
  unsigned int v22; // r14d
  unsigned int v23; // r13d
  unsigned int v24; // esi
  struct COverlayContext::OverlayPlaneInfo **v25; // r14
  bool v26; // cf
  char v27; // si
  __int64 v28; // r8
  bool v29; // al
  __int64 v30; // r8
  unsigned int v31; // r10d
  bool v32; // bl
  int v33; // eax
  char v34; // al
  unsigned int v35; // r9d
  __int64 v36; // r8
  bool v37; // zf
  struct COverlayContext::OverlayPlaneInfo *v38; // rcx
  int v39; // eax
  unsigned int v40; // eax
  unsigned int LowestPriorityOverlayCandidateIndex; // eax
  __int64 v42; // rcx
  int v43; // eax
  int *v44; // rdi
  __int64 v45; // r15
  __int128 v46; // xmm0
  __int64 v47; // rax
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  unsigned int v50; // edx
  __int128 v51; // xmm1
  _OWORD *v52; // rcx
  int v53; // eax
  char v54; // [rsp+40h] [rbp-C0h]
  char v55; // [rsp+40h] [rbp-C0h]
  unsigned int v56; // [rsp+44h] [rbp-BCh]
  unsigned int v57; // [rsp+48h] [rbp-B8h]
  unsigned int v58; // [rsp+50h] [rbp-B0h] BYREF
  int v59; // [rsp+54h] [rbp-ACh]
  unsigned int v60; // [rsp+58h] [rbp-A8h]
  int v61; // [rsp+5Ch] [rbp-A4h]
  __int128 v62; // [rsp+60h] [rbp-A0h] BYREF
  int v63; // [rsp+70h] [rbp-90h]
  unsigned int v64; // [rsp+74h] [rbp-8Ch]
  unsigned int v65; // [rsp+78h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-80h] BYREF
  COverlayContext *v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  char *v69; // [rsp+98h] [rbp-68h]
  __int128 v70; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v71; // [rsp+B0h] [rbp-50h]
  __int128 v72; // [rsp+C0h] [rbp-40h]
  __int128 v73; // [rsp+D0h] [rbp-30h]
  __int128 v74; // [rsp+E0h] [rbp-20h]
  __int128 v75; // [rsp+F0h] [rbp-10h]
  __int128 v76; // [rsp+100h] [rbp+0h]
  int v77; // [rsp+110h] [rbp+10h] BYREF
  __int64 v78; // [rsp+114h] [rbp+14h] BYREF

  LOBYTE(v4) = *((_BYTE *)this + 843);
  LOBYTE(v3) = 0;
  v5 = *((_DWORD *)this + 40);
  v6 = a2;
  v69 = a3;
  v68 = a2;
  v7 = this;
  v67 = this;
  v8 = 0;
  v58 = v4;
  v61 = v3;
  if ( !v5 )
  {
    if ( *((_DWORD *)this + 64) && *(_BYTE *)(*((_QWORD *)this + 29) + 104LL) )
      LOBYTE(v4) = 0;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
    v40 = *((_DWORD *)this + 64);
    if ( v40 <= 1 )
    {
      if ( v40 && *(_BYTE *)(*((_QWORD *)this + 29) + 104LL) )
      {
        LOBYTE(v4) = 0;
      }
      else
      {
        LowestPriorityOverlayCandidateIndex = COverlayContext::FindLowestPriorityOverlayCandidateIndex();
        DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v6, LowestPriorityOverlayCandidateIndex);
        COverlayContext::RemoveUnbackedSurfaces(v42, v6);
      }
    }
    else
    {
      LOBYTE(v3) = 0;
    }
    goto LABEL_3;
  }
  v63 = 0;
  v57 = 0;
  v12 = 0;
  v64 = 0;
  v13 = 0;
  v65 = 0;
  v56 = 0;
  v14 = 0;
  v60 = 0;
  v55 = 0;
  LOBYTE(v59) = 0;
  v62 = 0LL;
  v15 = 0LL;
  do
  {
    v16 = 224LL * v14;
    *(_DWORD *)(v16 + *((_QWORD *)v7 + 17) + 208) = v14;
    v66 = *((_QWORD *)v7 + 17) + v16;
    v17 = v13 + 1;
    if ( (unsigned int)v17 < v13 )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v8 = -2147024362;
LABEL_60:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x764u);
LABEL_61:
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v62);
      return v8;
    }
    v8 = 0;
    if ( (unsigned int)v17 > v12 )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v62, 8, 1, &v66);
      v20 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xC0u);
      v8 = v20;
      if ( v20 < 0 )
        goto LABEL_60;
      v13 = v65;
      v12 = v64;
      v15 = v62;
    }
    else
    {
      v18 = v13++;
      v65 = v17;
      *(_QWORD *)(v15 + 8 * v18) = v66;
    }
    ++v14;
  }
  while ( v14 < *((_DWORD *)v7 + 40) );
  v21 = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v21 >= *((_DWORD *)v7 + 23) - 1 )
      {
        LOBYTE(v4) = v58;
        v22 = v56;
        goto LABEL_63;
      }
      v23 = -1;
      if ( v13 )
      {
        v23 = 0;
        v24 = 1;
        if ( v13 > 1 )
        {
          do
          {
            if ( COverlayContext::IsHigherProprity(
                   *(struct COverlayContext::OverlayPlaneInfo **)(v15 + 8LL * v24),
                   *(struct COverlayContext::OverlayPlaneInfo **)(v15 + 8LL * v23)) )
            {
              v23 = v24;
            }
            ++v24;
          }
          while ( v24 < v13 );
          v7 = v67;
          v6 = v68;
        }
        v21 = v57;
      }
      v25 = (struct COverlayContext::OverlayPlaneInfo **)(v15 + 8LL * v23);
      if ( *((_BYTE *)*v25 + 160) )
        v26 = v60 < *((_DWORD *)v7 + 25);
      else
        v26 = v56 < *((_DWORD *)v7 + 24) - 1;
      if ( !v26 )
        goto LABEL_37;
      v27 = COverlayContext::RequiresFrontPlane(*v25);
      v29 = COverlayContext::RectContainsRect((struct tagRECT *)(v28 + 52), (struct tagRECT *)(v28 + 68));
      v32 = !v29;
      if ( v27 )
        break;
      if ( !v29 || (LOBYTE(v33) = v59) != 0 )
      {
        v34 = COverlayContext::CheckPaddingCorrectness(v6, v30);
        v31 = 0;
        if ( !v34 )
          goto LABEL_36;
        goto LABEL_43;
      }
LABEL_44:
      v35 = *(_DWORD *)(v6 + 24);
      if ( v35 )
      {
        if ( v27 != v55 )
        {
LABEL_36:
          v21 = v57;
LABEL_37:
          v22 = v56;
          goto LABEL_38;
        }
      }
      else
      {
        v55 = v27;
      }
      v33 = (unsigned __int8)v33;
      v36 = v31;
      if ( v32 )
        v33 = 1;
      v37 = v31 == v35;
      v59 = v33;
      while ( !v37
           && *((_DWORD *)*v25 + 52) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL * (unsigned int)v36) + 208LL) )
      {
        v36 = (unsigned int)(v36 + 1);
        v37 = (_DWORD)v36 == v35;
        if ( (unsigned int)v36 > v35 )
          goto LABEL_53;
      }
      v39 = DynArray<COverlayContext::OverlayPlaneInfo *,0>::InsertAt(v6, v25, v36);
      LOBYTE(v31) = 0;
      v8 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x7C1u);
        goto LABEL_61;
      }
LABEL_53:
      v38 = *v25;
      v22 = v56;
      v21 = ++v57;
      if ( *((_BYTE *)v38 + 160) == (_BYTE)v31 )
        v22 = ++v56;
      else
        ++v60;
LABEL_38:
      DynArray<CWARPCallbackRenderer *,0>::RemoveAt(&v62, v23);
      v13 = v65;
      if ( !v65 )
      {
        LOBYTE(v4) = v58;
        goto LABEL_63;
      }
      v15 = v62;
    }
    if ( !v29 )
      goto LABEL_36;
LABEL_43:
    LOBYTE(v33) = v59;
    goto LABEL_44;
  }
  v22 = 0;
LABEL_63:
  COverlayContext::RemoveUnbackedSurfaces(v17, v6);
  LOBYTE(v3) = v61;
  if ( COverlayContext::DesktopPlaneSplitEnabled(v7) && v21 < *((_DWORD *)v7 + 23) - 1 && v22 < *((_DWORD *)v7 + 24) - 1 )
    LOBYTE(v3) = 1;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v62);
LABEL_3:
  if ( *(_DWORD *)(v6 + 24) || (_BYTE)v4 )
  {
    v9 = 1;
    v54 = 1;
  }
  else
  {
    v9 = 0;
    v54 = 0;
  }
  v10 = (__int64)v7 + 232;
  *((_DWORD *)v7 + 64) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)v7 + 29, 0x70u);
  if ( v9 )
  {
    v58 = 0;
    v77 = 0;
    memset_0(&v78, 0, 0xCCuLL);
    v43 = COverlayContext::DeriveDesktopPlaneAttributes(v7, v3, (__int64)&v58, (__int64)&v77);
    v8 = v43;
    if ( v43 >= 0 )
    {
      if ( v58 )
      {
        v44 = &v77;
        v45 = v58;
        do
        {
          v46 = *((_OWORD *)v44 + 1);
          v47 = *(unsigned int *)(v10 + 24);
          v48 = *((_OWORD *)v44 + 2);
          BYTE8(v76) = v4;
          v49 = *(_OWORD *)v44;
          v50 = v47 + 1;
          v71 = v46;
          v72 = v48;
          v70 = v49;
          v51 = *((_OWORD *)v44 + 4);
          v73 = *((_OWORD *)v44 + 3);
          v74 = v51;
          *(_QWORD *)&v76 = *((_QWORD *)v44 + 12);
          v75 = *((_OWORD *)v44 + 5);
          if ( (int)v47 + 1 >= (unsigned int)v47 )
          {
            if ( v50 > *(_DWORD *)(v10 + 20) )
            {
              v53 = DynArrayImpl<0>::AddMultipleAndSet(v10, 112, 1, &v70);
              if ( v53 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0xC0u);
            }
            else
            {
              v52 = (_OWORD *)(*(_QWORD *)v10 + 112 * v47);
              *v52 = v49;
              v52[1] = v71;
              v52[2] = v72;
              v52[3] = v73;
              v52[4] = v74;
              v52[5] = v75;
              v52[6] = v76;
              *(_DWORD *)(v10 + 24) = v50;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          v44 += 26;
          --v45;
        }
        while ( v45 );
        v9 = v54;
      }
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x82Eu);
  }
  else
  {
LABEL_7:
    *v69 = v9;
  }
  return v8;
}
