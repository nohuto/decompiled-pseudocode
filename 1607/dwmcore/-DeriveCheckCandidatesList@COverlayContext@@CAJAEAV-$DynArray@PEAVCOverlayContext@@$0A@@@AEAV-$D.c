/*
 * XREFs of ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x1800B20D0 (-RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z.c)
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800B52B8 (-RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?AddMultipleAndSet@?$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInfo@COverlayContext@@I@Z @ 0x1801263E4 (-AddMultipleAndSet@-$DynArray@UDesktopPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUDesktopPlaneInf.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x180127BA4 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x180127DF0 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlay.c)
 *     ?GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@1@Z @ 0x180128740 (-GetContextCandidates@COverlayContext@@CAJPEAV1@AEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCont.c)
 *     ?InsertAt@?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180128AF8 (-InsertAt@-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBQEAUOverlayPlaneInfo@CO.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1801290E4 (-IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x18012994C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129B2C (-RequiresFrontPlane@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::DeriveCheckCandidatesList(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  int v6; // edi
  char v7; // r10
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edx
  unsigned int j; // esi
  __int64 v14; // rcx
  unsigned int k; // r8d
  __m128i *v16; // rdx
  __int32 *v17; // rcx
  __m128i v18; // xmm2
  unsigned int v19; // r8d
  unsigned int v20; // edx
  char v21; // r13
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r15d
  unsigned int v29; // esi
  __int64 v30; // r9
  __m128i **v31; // r8
  __m128i *v32; // r15
  __m128i v33; // xmm2
  __int32 *v34; // r15
  bool v36; // si
  __int64 v37; // r8
  bool v38; // al
  _BYTE *v39; // r10
  char v40; // r11
  bool v41; // r13
  char v42; // al
  int v43; // edx
  __int64 *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  int v47; // eax
  bool v48; // zf
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // eax
  unsigned int v54; // r12d
  unsigned int i; // esi
  __int64 v56; // rcx
  int ContextCandidates; // eax
  char *v58; // rcx
  int v59; // eax
  unsigned int v60; // r15d
  __int64 v61; // rdx
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  int v67; // eax
  bool v68; // [rsp+42h] [rbp-BEh]
  unsigned int v69; // [rsp+44h] [rbp-BCh] BYREF
  int v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  __int64 v72; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v73; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v74; // [rsp+68h] [rbp-98h]
  int v75; // [rsp+70h] [rbp-90h]
  __int64 v76; // [rsp+74h] [rbp-8Ch]
  _BYTE v77[32]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v78[2]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v79; // [rsp+B0h] [rbp-50h]
  char *v80; // [rsp+E0h] [rbp-20h]
  _OWORD v81[6]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v82; // [rsp+150h] [rbp+50h]
  char v83; // [rsp+158h] [rbp+58h]
  __int64 v84[2]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v85[12]; // [rsp+170h] [rbp+70h]

  v80 = (char *)a3;
  v5 = a2;
  v71 = a2;
  v6 = 0;
  v7 = 0;
  if ( *(_BYTE *)a3 )
  {
    LOBYTE(a4) = 1;
    v52 = 0;
    if ( !*((_DWORD *)a1 + 6) )
    {
LABEL_102:
      v54 = -1;
      if ( *(_DWORD *)(v5 + 24) )
      {
        v54 = 0;
        for ( i = 1; i < *(_DWORD *)(v5 + 24); ++i )
        {
          if ( !COverlayContext::IsHigherProprity(
                  *(struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)v5 + 8LL * i),
                  *(struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)v5 + 8LL * v54)) )
            v54 = i;
        }
      }
      DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v5, v54, a3, a4);
      COverlayContext::RemoveUnbackedSurfaces(v5);
      v7 = 0;
      goto LABEL_14;
    }
    while ( 1 )
    {
      a3 = *(_QWORD *)(*a1 + 8LL * v52);
      v53 = *(_DWORD *)(a3 + 296);
      if ( v53 <= 1 )
      {
        if ( !v53 || !*(_BYTE *)(*(_QWORD *)(a3 + 272) + 104LL) )
          goto LABEL_100;
        *(_BYTE *)(a3 + 1127) = 0;
      }
      else
      {
        *(_BYTE *)(a3 + 1126) = 0;
      }
      LOBYTE(a4) = 0;
LABEL_100:
      if ( ++v52 >= *((_DWORD *)a1 + 6) )
      {
        if ( !(_BYTE)a4 )
          goto LABEL_14;
        goto LABEL_102;
      }
    }
  }
  v75 = 4;
  v8 = 0;
  v73 = v77;
  v76 = 4LL;
  v74 = v77;
  LOBYTE(v70) = 0;
  v78[0] = 0LL;
  v78[1] = 0LL;
  if ( !*((_DWORD *)a1 + 6) )
    goto LABEL_7;
  do
  {
    v9 = *(_QWORD *)(*a1 + 8LL * v8);
    *(_QWORD *)(v9 + 1112) = 0LL;
    *(_QWORD *)(v9 + 1120) = 0LL;
    v10 = *(_QWORD *)(*a1 + 8LL * v8);
    *(_BYTE *)(v10 + 1127) = *(_BYTE *)(v10 + 1091);
    v11 = *(_QWORD *)(*a1 + 8LL * v8) + 272LL;
    *(_DWORD *)(v11 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v11, 0x70u);
    v12 = HIDWORD(v76);
    for ( j = 0; ; ++j )
    {
      v14 = *(_QWORD *)(*a1 + 8LL * v8);
      if ( j >= *(_DWORD *)(v14 + 200) )
        break;
      v25 = 232LL * j;
      *(_DWORD *)(*(_QWORD *)(v14 + 176) + v25 + 216) = j;
      v26 = v25 + *(_QWORD *)(*(_QWORD *)(*a1 + 8LL * v8) + 176LL);
      v12 = HIDWORD(v76) + 1;
      v72 = v26;
      if ( (unsigned int)(HIDWORD(v76) + 1) >= HIDWORD(v76) )
      {
        v6 = 0;
        if ( v12 <= (unsigned int)v76 )
        {
          *(_QWORD *)&v73[8 * HIDWORD(v76)] = v72;
          HIDWORD(v76) = v12;
          continue;
        }
        v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v73, 8u, 1, &v72);
        v6 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
      }
      else
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x75Fu);
        goto LABEL_37;
      }
      v12 = HIDWORD(v76);
    }
    ++v8;
  }
  while ( v8 < *((_DWORD *)a1 + 6) );
  if ( v12 )
  {
    do
    {
      v69 = -1;
      v28 = -1;
      if ( v12 )
      {
        v69 = 0;
        v28 = 0;
        v29 = 1;
        if ( v12 > 1 )
        {
          do
          {
            if ( COverlayContext::IsHigherProprity(
                   *(struct COverlayContext::OverlayPlaneInfo **)&v73[8 * v29],
                   *(struct COverlayContext::OverlayPlaneInfo **)&v73[8 * v28]) )
            {
              v28 = v29;
            }
            ++v29;
          }
          while ( v29 < HIDWORD(v76) );
          v69 = v28;
        }
      }
      v30 = v28;
      v72 = v28;
      v31 = *(__m128i ***)&v73[8 * v28];
      v32 = *v31;
      v33 = _mm_srli_si128((*v31)[8], 8);
      v79 = (*v31)[8];
      if ( (v33.m128i_i16[2] & 0x2000) != 0 )
        v34 = (__int32 *)v78;
      else
        v34 = &v32[69].m128i_i32[2];
      if ( *v34 < (unsigned int)(v79.m128i_i32[0] - 1)
        && (*((_BYTE *)v31 + 168)
          ? (unsigned int)v34[2] < v79.m128i_i32[2]
          : v34[1] < (unsigned int)(v79.m128i_i32[1] - 1)) )
      {
        v36 = 1;
        v68 = COverlayContext::RequiresFrontPlane((struct COverlayContext::OverlayPlaneInfo *)v31);
        v38 = COverlayContext::RectContainsRect((struct tagRECT *)(v37 + 60), (struct tagRECT *)(v37 + 76));
        v41 = !v38;
        if ( v40 )
        {
          v36 = v38;
        }
        else if ( !v38 || (_BYTE)v70 )
        {
          v42 = COverlayContext::CheckPaddingCorrectness(v71, v31);
          v39 = v73;
          v40 = v68;
          v30 = v72;
          v36 = v42 != 0;
        }
        if ( *((_DWORD *)a1 + 6) > 1u )
        {
          v43 = 0;
          if ( *(_DWORD *)(v71 + 24) )
          {
            v31 = *(__m128i ***)v71;
            v30 = *(_QWORD *)(*(_QWORD *)&v39[8 * v30] + 16LL);
            while ( v30 != v31[v43][1].m128i_i64[0] )
            {
              if ( (unsigned int)++v43 >= *(_DWORD *)(v71 + 24) )
                goto LABEL_62;
            }
            v36 = 0;
          }
        }
LABEL_62:
        if ( !v36 )
          goto LABEL_82;
        v44 = *(__int64 **)&v39[8 * v72];
        v45 = *v44;
        if ( *(_BYTE *)(*v44 + 1125) )
        {
          if ( v40 != *(_BYTE *)(v45 + 1124) )
            v36 = 0;
        }
        else
        {
          *(_BYTE *)(v45 + 1124) = v40;
          v39 = v73;
        }
        if ( v36 )
        {
          v48 = !v41;
          v5 = v71;
          v31 = 0LL;
          v46 = v72;
          v47 = (unsigned __int8)v70;
          if ( !v48 )
            v47 = 1;
          v48 = *(_DWORD *)(v71 + 24) == 0;
          v70 = v47;
          while ( !v48 )
          {
            v49 = *(_QWORD *)&v39[8 * v72];
            v30 = *(_QWORD *)(*(_QWORD *)v71 + 8LL * (unsigned int)v31);
            if ( *(_QWORD *)v49 == *(_QWORD *)v30 && *(_DWORD *)(v49 + 216) < *(_DWORD *)(v30 + 216) )
              break;
            v31 = (__m128i **)(unsigned int)((_DWORD)v31 + 1);
            v48 = (_DWORD)v31 == *(_DWORD *)(v71 + 24);
            if ( (unsigned int)v31 > *(_DWORD *)(v71 + 24) )
              goto LABEL_79;
          }
          v50 = DynArray<COverlayContext::OverlayPlaneInfo *,0>::InsertAt(v71, &v39[8 * v72], v31, v30);
          v6 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x7DEu);
            goto LABEL_37;
          }
          v39 = v73;
LABEL_79:
          *(_BYTE *)(**(_QWORD **)&v39[8 * v46] + 1125LL) = 1;
          ++*v34;
          if ( *(_BYTE *)(*(_QWORD *)&v73[8 * v46] + 168LL) )
            ++v34[2];
          else
            ++v34[1];
        }
        else
        {
LABEL_82:
          v5 = v71;
        }
      }
      DynArray<CWARPCallbackRenderer *,0>::RemoveAt(&v73, v69, v31, v30);
      v12 = HIDWORD(v76);
    }
    while ( HIDWORD(v76) );
  }
LABEL_7:
  COverlayContext::RemoveUnbackedSurfaces(v5);
  for ( k = 0; k < *((_DWORD *)a1 + 6); ++k )
  {
    v16 = *(__m128i **)(*a1 + 8LL * k);
    v17 = (__int32 *)v78;
    v18 = _mm_srli_si128(v16[8], 8);
    v79 = v16[8];
    if ( (v18.m128i_i16[2] & 0x2000) == 0 )
      v17 = &v16[69].m128i_i32[2];
    if ( CCommonRegistryData::m_fEnableDesktopPlaneSplit )
    {
      if ( v16[8].m128i_i32[0] > 2u && v16[8].m128i_i32[1] > 2u )
      {
        v51 = v16[4].m128i_i64[1];
        if ( *(_DWORD *)(v51 + 256) == 1297040209
          && *(int *)(v51 + 252) >= 2000
          && v16[68].m128i_i8[7]
          && v16[70].m128i_i8[5]
          && *v17 < (unsigned int)(v79.m128i_i32[0] - 1)
          && v17[1] < (unsigned int)(v79.m128i_i32[1] - 1) )
        {
          v16[70].m128i_i8[6] = 1;
        }
      }
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v73);
  v7 = 0;
LABEL_14:
  v19 = *((_DWORD *)a1 + 6);
  v20 = 0;
  if ( v19 )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v20) + 1127LL) )
    {
      if ( ++v20 >= v19 )
        goto LABEL_17;
    }
    v7 = 1;
  }
LABEL_17:
  if ( *(_DWORD *)(v5 + 24) || (v21 = 0, v7) )
    v21 = 1;
  v22 = 0;
  if ( !v19 )
  {
LABEL_22:
    *v80 = v21;
    return (unsigned int)v6;
  }
  while ( 2 )
  {
    v23 = *(_QWORD *)(*a1 + 8LL * v22) + 272LL;
    *(_DWORD *)(v23 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v23, 0x70u);
    if ( !v21 )
    {
LABEL_21:
      if ( ++v22 >= *((_DWORD *)a1 + 6) )
        goto LABEL_22;
      continue;
    }
    break;
  }
  v69 = 0;
  memset_0(v84, 0, 0xD0uLL);
  v56 = *a1;
  v73 = v77;
  v74 = v77;
  v75 = 4;
  v76 = 4LL;
  ContextCandidates = COverlayContext::GetContextCandidates(*(_QWORD *)(v56 + 8LL * v22), v71, &v73);
  v6 = ContextCandidates;
  if ( ContextCandidates < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ContextCandidates, 0x85Eu);
    goto LABEL_37;
  }
  v58 = *(char **)(*a1 + 8LL * v22);
  v59 = COverlayContext::DeriveDesktopPlaneAttributes((COverlayContext *)v58, v58[1126], (__int64)&v69, (__int64)v84);
  v6 = v59;
  if ( v59 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x865u);
    goto LABEL_37;
  }
  v60 = 0;
  if ( !v69 )
  {
LABEL_114:
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v73);
    goto LABEL_21;
  }
  while ( 1 )
  {
    v61 = *a1;
    v83 = *(_BYTE *)(*(_QWORD *)(*a1 + 8LL * v22) + 1127LL);
    v62 = *(_OWORD *)((char *)v85 + 104 * v60);
    v81[0] = *(_OWORD *)&v84[13 * v60];
    v63 = *(_OWORD *)((char *)&v85[1] + 104 * v60);
    v81[1] = v62;
    v64 = *(_OWORD *)((char *)&v85[2] + 104 * v60);
    v81[2] = v63;
    v65 = *(_OWORD *)((char *)&v85[3] + 104 * v60);
    v81[3] = v64;
    v66 = *(_OWORD *)((char *)&v85[4] + 104 * v60);
    v81[4] = v65;
    v82 = *((_QWORD *)&v85[5] + 13 * v60);
    v81[5] = v66;
    v67 = DynArray<COverlayContext::DesktopPlaneInfo,0>::AddMultipleAndSet(*(_QWORD *)(v61 + 8LL * v22) + 272LL, v81);
    v6 = v67;
    if ( v67 < 0 )
      break;
    if ( ++v60 >= v69 )
      goto LABEL_114;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0x870u);
LABEL_37:
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v73);
  return (unsigned int)v6;
}
