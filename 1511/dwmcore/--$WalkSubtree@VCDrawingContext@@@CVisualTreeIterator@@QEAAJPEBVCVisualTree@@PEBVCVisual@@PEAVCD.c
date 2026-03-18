/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800521B0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x18003CB80 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18003EDDC (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046ED0 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004D8D0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_ECRectangleShape@@UEAAPEAXI@Z @ 0x1800581A0 (--_ECRectangleShape@@UEAAPEAXI@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x180067ACC (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800A8A98 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18010E8F8 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        struct CVisualTree *a2,
        void *a3,
        __int64 a4,
        int a5)
{
  struct CVisualTree *v8; // r12
  int v9; // eax
  int v10; // r13d
  void *v11; // r15
  __int64 v12; // r15
  int v13; // eax
  WPF *v14; // rcx
  CVisual *v15; // rbx
  __int64 v16; // rdi
  void *v17; // r14
  __int64 v18; // rax
  unsigned int v19; // ecx
  void (__fastcall *v20)(WPF::ProcessHeapImpl *, void *); // r15
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  _BYTE *v27; // rdi
  __int64 v28; // rbx
  int v29; // eax
  _QWORD *v30; // rax
  int v31; // ecx
  __int64 v32; // rbx
  int v33; // edx
  int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rcx
  int v41; // eax
  int v42; // r14d
  int v43; // eax
  void *v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rax
  CPtrArrayBase *Value; // rbx
  __int64 v49; // rdx
  int v50; // eax
  int v51; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  CRectangleShape *v57; // r15
  __int64 v58; // rcx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  int v65; // eax
  void *(__fastcall *v66)(CRectangleShape *__hidden, unsigned int); // r12
  __int64 v67; // r14
  unsigned int v68; // r15d
  int v69; // eax
  unsigned __int64 v70; // rax
  void *v71; // r13
  void *v72; // r12
  __int64 v73; // rcx
  int v74; // eax
  int v75; // eax
  int v76; // r9d
  CPtrArrayBase *v77; // rax
  DWORD v78; // ecx
  int v79; // eax
  void **v80; // [rsp+28h] [rbp-81h]
  unsigned int v81; // [rsp+28h] [rbp-81h]
  bool v82; // [rsp+38h] [rbp-71h] BYREF
  void *v83; // [rsp+40h] [rbp-69h]
  struct CVisualTree *v84; // [rsp+48h] [rbp-61h] BYREF
  void *v85[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v86; // [rsp+68h] [rbp-41h]
  struct CTreeData *v87; // [rsp+78h] [rbp-31h] BYREF
  __int128 v88; // [rsp+80h] [rbp-29h]
  __int128 v89; // [rsp+90h] [rbp-19h]
  __int128 v90; // [rsp+A0h] [rbp-9h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v8 = a2;
  v84 = a2;
  v83 = 0LL;
  v9 = CThreadContext::RegisterGraphWalkRoot(a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x40u);
    v11 = v83;
  }
  else
  {
    v11 = a3;
    v83 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x59u);
    goto LABEL_80;
  }
  v10 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), v8, &v87);
  if ( v10 < 0 )
  {
LABEL_145:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x67u);
    goto LABEL_80;
  }
  v12 = a4 + 48;
  v86 = a4 + 48;
  while ( 1 )
  {
    v13 = CDrawingContext::PreSubgraph((CDrawingContext *)v12, v8, &v82);
    v10 = v13;
    if ( v13 < 0 )
      break;
    if ( !v82 )
      goto LABEL_32;
    v15 = 0LL;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
    if ( (v16 & 2) != 0 )
      v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v16) = v16 & 1;
    if ( !(_DWORD)v16 )
    {
      v10 = 1;
      goto LABEL_30;
    }
    v17 = 0LL;
    *(_QWORD *)&v88 = *(_QWORD *)(a1 + 16);
    v10 = 0;
    DWORD2(v88) = *(_DWORD *)(a1 + 24);
    v18 = *(unsigned int *)(a1 + 36);
    v85[0] = 0LL;
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v18 )
      goto LABEL_12;
    v68 = 2 * v18;
    if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    }
    else
    {
      if ( v68 <= 0x40 )
        v68 = 64;
      v69 = WPF::HrMalloc(v14, 16LL, v68, (unsigned __int64)v85, v80);
      v10 = v69;
      if ( v69 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x54u);
        v17 = v85[0];
      }
      else
      {
        v70 = 16LL * *(unsigned int *)(a1 + 32);
        if ( v70 <= 0xFFFFFFFF )
        {
          v71 = v85[0];
          memcpy_0(v85[0], *(const void **)(a1 + 48), (unsigned int)v70);
          v72 = *(void **)(a1 + 48);
          v85[0] = *(void **)(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
          if ( v85[0] == WPF::ProcessHeapImpl::Free )
            WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v72);
          else
            ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v85[0])(WPF::g_pProcessHeap, v72);
          *(_QWORD *)(a1 + 48) = v71;
          v17 = 0LL;
          v10 = 0;
          *(_DWORD *)(a1 + 36) = v68;
LABEL_12:
          *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v88;
          v19 = *(_DWORD *)(a1 + 32);
          if ( *(_DWORD *)(a1 + 56) > v19 )
            v19 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(a1 + 56) = v19;
          goto LABEL_15;
        }
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
        v17 = v85[0];
      }
    }
LABEL_15:
    v20 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v20 == WPF::ProcessHeapImpl::Free )
    {
      if ( v17 )
        HeapFree(g_hProcessHeap, 0, v17);
    }
    else
    {
      v20(WPF::g_pProcessHeap, v17);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x87u);
      v12 = v86;
      v8 = v84;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 28) == 1 )
        *(_DWORD *)(a1 + 24) = 0;
      else
        *(_DWORD *)(a1 + 24) = v16 - 1;
      v21 = *(_QWORD *)(a1 + 8);
      v22 = *(_QWORD *)(v21 + 56);
      if ( (v22 & 2) != 0 )
        v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v23 = *(_QWORD *)(v21 + 56) & 1LL;
      v24 = *(unsigned int *)(a1 + 24);
      if ( v23 > v24 )
      {
        v25 = *(_QWORD *)(v21 + 56);
        if ( (v25 & 2) != 0 )
          v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v26 = *(_QWORD *)(v21 + 56) & 1LL;
        if ( v24 >= v26 )
        {
          v15 = 0LL;
        }
        else
        {
          v15 = (CVisual *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v26 != 1 )
            v15 = (CVisual *)*((_QWORD *)v15 + v24 + 2);
        }
      }
      ++*(_DWORD *)(a1 + 4);
      v12 = v86;
      v8 = v84;
      *(_QWORD *)(a1 + 16) = v21;
      *(_QWORD *)(a1 + 8) = v15;
    }
LABEL_30:
    if ( v10 < 0 )
    {
      v81 = 111;
LABEL_167:
      v76 = v10;
      goto LABEL_169;
    }
    if ( !v15 )
    {
      while ( 1 )
      {
LABEL_32:
        v10 = 0;
        v27 = 0LL;
        if ( *(_BYTE *)(v12 + 5504) )
        {
          if ( *(_BYTE *)(v12 + 5505) )
            v27 = *(_BYTE **)(*(_QWORD *)(v12 + 2584) + 8LL);
          else
            v27 = *(_BYTE **)(*(_QWORD *)(v12 + 5512) + 24LL);
        }
        if ( (v27[74] & 0x10) == 0 )
        {
          if ( (v27[73] & 0x40) != 0 )
          {
            v73 = *(_QWORD *)(v12 - 24);
            v74 = *(_DWORD *)(v73 + 1008);
            if ( v74 )
              *(_DWORD *)(v73 + 1008) = v74 - 1;
          }
          if ( (v27[72] & 0x40) != 0 )
          {
            --*(_DWORD *)(v12 + 5740);
            v27[72] &= ~0x40u;
          }
          v28 = v12 - 48;
          while ( 1 )
          {
            v29 = *(_DWORD *)(v28 + 424);
            if ( !v29
              || (_BYTE *)_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v28 + 440) + 16LL * (unsigned int)(v29 - 1)), 8).m128i_i64[0] != v27 )
            {
              break;
            }
            v41 = *(_DWORD *)(v28 + 424);
            if ( v41 )
            {
              v42 = 0;
              v89 = *(_OWORD *)(*(_QWORD *)(v28 + 440) + 16LL * (unsigned int)(v41 - 1));
            }
            else
            {
              v42 = -2147467259;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x19A7u);
            }
            if ( (_DWORD)v89 == 8 )
            {
              CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)v28, 1);
            }
            else
            {
              switch ( (int)v89 )
              {
                case 1:
                  v61 = *(_DWORD *)(v28 + 424);
                  if ( v61 )
                    *(_DWORD *)(v28 + 424) = v61 - 1;
                  v62 = *(_DWORD *)(v28 + 2552);
                  if ( v62 )
                    *(_DWORD *)(v28 + 2552) = v62 - 1;
                  v63 = 76LL * (unsigned int)(*(_DWORD *)(v28 + 704) - 1);
                  --*(_DWORD *)(v63 + *(_QWORD *)(v28 + 680) + 4);
                  *(_WORD *)(v28 + 5965) = 257;
                  break;
                case 2:
                  v56 = *(_DWORD *)(v28 + 424);
                  if ( v56 )
                    *(_DWORD *)(v28 + 424) = v56 - 1;
                  v57 = *(CRectangleShape **)(104LL * (unsigned int)(*(_DWORD *)(v28 + 1496) - 1)
                                            + *(_QWORD *)(v28 + 1472)
                                            + 72);
                  if ( v57 )
                  {
                    v66 = **(void *(__fastcall ***)(CRectangleShape *__hidden, unsigned int))v57;
                    if ( v66 == CRectangleShape::`vector deleting destructor' )
                      CRectangleShape::`vector deleting destructor'(v57, 1u);
                    else
                      v66(v57, 1u);
                  }
                  --*(_DWORD *)(v28 + 1496);
                  v58 = 76LL * (unsigned int)(*(_DWORD *)(v28 + 704) - 1);
                  --*(_DWORD *)(v58 + *(_QWORD *)(v28 + 680) + 8);
                  *(_BYTE *)(v28 + 5965) = 1;
                  break;
                case 3:
                  v64 = *(_DWORD *)(v28 + 424);
                  if ( v64 )
                    *(_DWORD *)(v28 + 424) = v64 - 1;
                  --*(_DWORD *)(v28 + 704);
                  break;
                case 4:
                  v53 = *(_DWORD *)(v28 + 424);
                  if ( v53 )
                    *(_DWORD *)(v28 + 424) = v53 - 1;
                  v54 = *(_DWORD *)(v28 + 456);
                  if ( v54 )
                    *(_DWORD *)(v28 + 456) = v54 - 1;
                  v55 = *(_DWORD *)(v28 + 488);
                  if ( v55 )
                    *(_DWORD *)(v28 + 488) = v55 - 1;
                  *(_BYTE *)(v28 + 5964) = 1;
                  break;
                case 5:
                case 6:
                  v65 = CDrawingContext::PopLayer((CDrawingContext *)v28);
                  v42 = v65;
                  if ( v65 >= 0 )
                    continue;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x19BBu);
                  break;
                case 7:
                  v59 = *(_DWORD *)(v28 + 424);
                  if ( v59 )
                    *(_DWORD *)(v28 + 424) = v59 - 1;
                  v60 = *(_DWORD *)(v28 + 2584);
                  if ( v60 )
                    *(_DWORD *)(v28 + 2584) = v60 - 1;
                  break;
                default:
                  break;
              }
            }
            if ( v42 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x161Fu);
              break;
            }
          }
          v12 = v86;
          v30 = 0LL;
          v31 = *(_DWORD *)(v86 + 2656);
          if ( v31 )
            v30 = (_QWORD *)(*(_QWORD *)(v86 + 2672) + 16LL * (unsigned int)(v31 - 1));
          if ( (_BYTE *)*v30 == v27 && v31 )
            *(_DWORD *)(v86 + 2656) = v31 - 1;
          if ( (v27[73] & 0x20) != 0 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v12 + 5512) + 32LL) )
            {
              CDrawingContext::CalcClippedNodeWorldSpaceBounds(v28, (__int64)v27, &v90);
              *(_OWORD *)v85 = v90;
              v75 = CDrawingContext::RedrawVisual((CDrawingContext *)v28, (struct MilRectF *)v85);
              v10 = v75;
              if ( v75 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x225Cu);
            }
          }
        }
        if ( v10 < 0 )
          break;
        v32 = *(_QWORD *)(a1 + 16);
        v10 = 0;
        if ( v32
          && ((v33 = *(_DWORD *)(a1 + 28), v33 == 1)
           && (v34 = *(_DWORD *)(a1 + 24), v34 != -1)
           && ((v35 = *(_QWORD *)(v32 + 56), (v35 & 2) == 0)
             ? (LODWORD(v35) = v35 & 1)
             : (v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL)),
               v34 + 1 < (unsigned int)v35)
           || !v33 && (v34 = *(_DWORD *)(a1 + 24)) != 0) )
        {
          if ( v33 == 1 )
            v36 = (unsigned int)(v34 + 1);
          else
            v36 = (unsigned int)(v34 - 1);
          v37 = *(_QWORD *)(v32 + 56);
          if ( (v37 & 2) != 0 )
            v38 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v38 = *(_QWORD *)(v32 + 56) & 1LL;
          if ( v38 <= (unsigned int)v36
            || ((v39 = *(_QWORD *)(v32 + 56), (v39 & 2) == 0)
              ? (v40 = v39 & 1)
              : (v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCuLL)),
                (unsigned int)v36 >= v40) )
          {
            v15 = 0LL;
          }
          else
          {
            v15 = (CVisual *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
            if ( v40 != 1 )
              v15 = (CVisual *)*((_QWORD *)v15 + v36 + 2);
          }
          *(_QWORD *)(a1 + 8) = v15;
          *(_DWORD *)(a1 + 24) = v36;
          if ( v15 )
          {
            v8 = v84;
            goto LABEL_65;
          }
        }
        else
        {
          v10 = 1;
        }
        if ( *(_DWORD *)(a1 + 4) )
        {
          v43 = *(_DWORD *)(a1 + 32);
          v44 = 0LL;
          v45 = 0;
          if ( v43 )
          {
            v46 = (unsigned int)(v43 - 1);
            *(_DWORD *)(a1 + 32) = v46;
            *(_OWORD *)v85 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v46);
            v45 = (int)v85[1];
            v44 = v85[0];
          }
          v47 = *(_QWORD *)(a1 + 16);
          --*(_DWORD *)(a1 + 4);
          *(_QWORD *)(a1 + 8) = v47;
          *(_QWORD *)(a1 + 16) = v44;
          *(_DWORD *)(a1 + 24) = v45;
          if ( v47 )
            continue;
        }
        goto LABEL_79;
      }
      v81 = 135;
      goto LABEL_167;
    }
LABEL_65:
    v10 = CVisual::EnsureTreeData(v15, v8, &v87);
    if ( v10 < 0 )
    {
      v11 = v83;
      goto LABEL_145;
    }
  }
  v81 = 105;
  v76 = v13;
LABEL_169:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, v81);
LABEL_79:
  v11 = v83;
LABEL_80:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 )
  {
    Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( Value )
      goto LABEL_84;
    v77 = (CPtrArrayBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             8LL);
    Value = v77;
    if ( v77 )
    {
      v78 = CThreadContext::s_dwTlsIndex;
      *(_QWORD *)v77 = 0LL;
      TlsSetValue(v78, v77);
LABEL_84:
      if ( (*(_QWORD *)Value & 2) != 0 )
        v49 = *(_QWORD *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v49 = *(_QWORD *)Value & 1LL;
      CPtrArrayBase::RemoveAt(Value, v49 - 1);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Cu);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v50 = *(_DWORD *)(a1 + 40);
  if ( v50 == 10 )
  {
    v67 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v67 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v67) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v67) <= *(_DWORD *)(a1 + 36) )
    {
      v84 = 0LL;
      v79 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 16LL, (unsigned int)v67, (unsigned __int64)&v84, v80);
      if ( v79 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v84;
        *(_DWORD *)(a1 + 36) = v67;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0xF3u);
      }
    }
    v51 = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
  else
  {
    v51 = v50 + 1;
  }
  *(_DWORD *)(a1 + 40) = v51;
  return (unsigned int)v10;
}
