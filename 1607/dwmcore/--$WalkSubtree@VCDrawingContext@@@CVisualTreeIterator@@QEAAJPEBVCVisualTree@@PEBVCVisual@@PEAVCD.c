/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005FC60
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180003A7C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180004548 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EB80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180097E80 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800AD988 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF228 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180124FC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18012DFCC (-Pop@CLightStack@@QEAAJXZ.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        __int64 a4,
        int a5)
{
  const struct CVisualTree *v8; // r13
  int v9; // eax
  int v10; // r15d
  float v11; // xmm6_4
  __int64 v12; // r14
  float v13; // xmm8_4
  float v14; // xmm7_4
  float v15; // xmm9_4
  int v16; // eax
  CVisual *v17; // rbx
  __int64 v18; // rsi
  void *v19; // r14
  __int64 v20; // rax
  unsigned int v21; // ecx
  void (*v22)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  _BYTE *v29; // rsi
  __int64 v30; // r13
  _DWORD *v31; // rbx
  _QWORD *v32; // rax
  int v33; // ecx
  __int64 v34; // rbx
  int v35; // edx
  int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rax
  int Current; // eax
  struct CThreadContext *v49; // r14
  __int64 v50; // rsi
  __int64 v51; // rcx
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rbx
  int v54; // eax
  int v56; // r12d
  char v57; // r15
  __int64 v58; // r14
  CRectanglesShape *v59; // rcx
  __int64 v60; // rcx
  unsigned int v61; // r9d
  unsigned int v62; // edx
  int v63; // r8d
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  __int128 v73; // xmm0
  __int64 v74; // xmm1_8
  int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  CRectanglesShape *v78; // rcx
  void *(__fastcall *v79)(CRectanglesShape *__hidden, unsigned int); // rax
  CRegionShape *(__fastcall *v80)(CRegionShape *, char); // rax
  int v81; // eax
  __int64 v82; // rsi
  unsigned int v83; // r15d
  int v84; // r12d
  void *(__fastcall *v85)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v86; // rdx
  void *v87; // rax
  unsigned __int64 v88; // rax
  void *v89; // rdx
  void (*v90)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  _QWORD *v91; // rsi
  unsigned __int64 v92; // rbx
  _QWORD *v93; // rcx
  __int64 v94; // rbx
  void (*v95)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v96; // rcx
  int v97; // eax
  int v98; // eax
  int v99; // eax
  void *(__fastcall *v100)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v101; // rdx
  void *v102; // rax
  void *v103; // rbx
  int v104; // eax
  unsigned int v105; // [rsp+28h] [rbp-E0h]
  unsigned int v106; // [rsp+28h] [rbp-E0h]
  bool v107[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v108; // [rsp+40h] [rbp-C8h]
  struct CThreadContext *v109; // [rsp+48h] [rbp-C0h] BYREF
  void *v110; // [rsp+50h] [rbp-B8h]
  const struct CVisualTree *v111; // [rsp+58h] [rbp-B0h]
  __int128 v112; // [rsp+60h] [rbp-A8h]
  __int128 v113; // [rsp+70h] [rbp-98h]
  __int128 v114; // [rsp+88h] [rbp-80h] BYREF
  __int64 v115; // [rsp+98h] [rbp-70h]
  int v116; // [rsp+A0h] [rbp-68h]
  __int128 v117; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)(a1 + 64) = a2;
  *(_DWORD *)(a1 + 72) = a5;
  v8 = a2;
  v110 = 0LL;
  v111 = a2;
  v9 = CThreadContext::RegisterGraphWalkRoot(a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x40u);
  }
  else
  {
    v110 = a3;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 8) = a3;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( v10 < 0 )
  {
    v106 = 89;
  }
  else
  {
    v10 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), v8, &v109);
    if ( v10 >= 0 )
    {
      v11 = *((float *)&v114 + 3);
      v12 = a4 + 120;
      v13 = *((float *)&v114 + 2);
      v14 = *((float *)&v114 + 1);
      v15 = *(float *)&v114;
      v108 = a4 + 120;
      while ( 1 )
      {
        v16 = CDrawingContext::PreSubgraph((CDrawingContext *)v12, v8, &v107[4]);
        v10 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x69u);
          goto LABEL_74;
        }
        if ( !v107[4] )
          goto LABEL_32;
        v17 = 0LL;
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
        if ( (v18 & 2) != 0 )
          v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v18) = v18 & 1;
        if ( !(_DWORD)v18 )
        {
          v10 = 1;
          goto LABEL_30;
        }
        v10 = 0;
        *(_QWORD *)&v112 = *(_QWORD *)(a1 + 16);
        v19 = 0LL;
        DWORD2(v112) = *(_DWORD *)(a1 + 24);
        v20 = *(unsigned int *)(a1 + 36);
        if ( *(_DWORD *)(a1 + 32) != (_DWORD)v20 )
          goto LABEL_12;
        v83 = 2 * v20;
        if ( (unsigned __int64)(2 * v20) > 0xFFFFFFFF )
        {
          v105 = 76;
LABEL_209:
          v10 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v105);
          goto LABEL_15;
        }
        if ( v83 <= 0x40 )
          v83 = 64;
        v84 = 0;
        *(_DWORD *)v107 = 0;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v83 <= 0x10 )
          break;
        v85 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        v86 = 16LL * v83;
        if ( v85 == WPF::ProcessHeapImpl::Alloc )
          v87 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v86);
        else
          v87 = v85(WPF::g_pProcessHeap, v86);
        v19 = v87;
        if ( !v87 )
        {
          v84 = -2147024882;
LABEL_205:
          *(_DWORD *)v107 = v84;
        }
        if ( v84 >= 0 )
        {
          v88 = 16LL * *(unsigned int *)(a1 + 32);
          if ( v88 <= 0xFFFFFFFF )
          {
            memcpy_0(v19, *(const void **)(a1 + 48), (unsigned int)v88);
            v89 = *(void **)(a1 + 48);
            v90 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
            if ( v90 == WPF::ProcessHeapImpl::Free )
              WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v89);
            else
              ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v90)(WPF::g_pProcessHeap, v89);
            *(_QWORD *)(a1 + 48) = v19;
            v19 = 0LL;
            *(_DWORD *)(a1 + 36) = v83;
            v10 = 0;
LABEL_12:
            *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v112;
            v21 = *(_DWORD *)(a1 + 32);
            if ( *(_DWORD *)(a1 + 56) > v21 )
              v21 = *(_DWORD *)(a1 + 56);
            *(_DWORD *)(a1 + 56) = v21;
            goto LABEL_15;
          }
          v105 = 86;
          goto LABEL_209;
        }
        v10 = *(_DWORD *)v107;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, *(int *)v107, 0x54u);
LABEL_15:
        v22 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v22 == WPF::ProcessHeapImpl::Free )
        {
          if ( v19 )
            HeapFree(g_hProcessHeap, 0, v19);
        }
        else
        {
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v22)(WPF::g_pProcessHeap, v19);
        }
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x87u);
          v12 = v108;
        }
        else
        {
          if ( *(_DWORD *)(a1 + 28) == 1 )
            *(_DWORD *)(a1 + 24) = 0;
          else
            *(_DWORD *)(a1 + 24) = v18 - 1;
          v23 = *(_QWORD *)(a1 + 8);
          v24 = *(_QWORD *)(v23 + 136);
          if ( (v24 & 2) != 0 )
            v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v25 = *(_QWORD *)(v23 + 136) & 1LL;
          v26 = *(unsigned int *)(a1 + 24);
          if ( v25 > v26 )
          {
            v27 = *(_QWORD *)(v23 + 136);
            if ( (v27 & 2) != 0 )
              v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v28 = *(_QWORD *)(v23 + 136) & 1LL;
            if ( v26 >= v28 )
            {
              v17 = 0LL;
            }
            else
            {
              v17 = (CVisual *)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
              if ( v28 != 1 )
                v17 = (CVisual *)*((_QWORD *)v17 + v26 + 2);
            }
          }
          ++*(_DWORD *)(a1 + 4);
          v12 = v108;
          *(_QWORD *)(a1 + 16) = v23;
          *(_QWORD *)(a1 + 8) = v17;
        }
LABEL_30:
        if ( v10 < 0 )
        {
          v106 = 111;
          goto LABEL_239;
        }
        if ( !v17 )
        {
          while ( 1 )
          {
LABEL_32:
            v10 = 0;
            v29 = 0LL;
            if ( *(_BYTE *)(v12 + 6120) )
            {
              if ( *(_BYTE *)(v12 + 6121) )
                v29 = *(_BYTE **)(*(_QWORD *)(v12 + 2944) + 8LL);
              else
                v29 = *(_BYTE **)(*(_QWORD *)(v12 + 6128) + 24LL);
            }
            if ( (v29[154] & 0x10) == 0 )
            {
              if ( (v29[153] & 0x40) != 0 )
              {
                v96 = *(_QWORD *)(v12 - 96);
                v97 = *(_DWORD *)(v96 + 1112);
                if ( v97 )
                  *(_DWORD *)(v96 + 1112) = v97 - 1;
              }
              if ( (v29[152] & 0x40) != 0 )
              {
                --*(_DWORD *)(v12 + 6364);
                v29[152] &= ~0x40u;
              }
              v30 = v12 - 120;
              v31 = (_DWORD *)(v12 - 120 + 504);
              while ( *v31
                   && (_BYTE *)_mm_srli_si128(*(__m128i *)(*(_QWORD *)(v30 + 520) + 16LL * (unsigned int)(*v31 - 1)), 8).m128i_i64[0] == v29 )
              {
                if ( *v31 )
                {
                  v56 = 0;
                  v113 = *(_OWORD *)(*(_QWORD *)(v30 + 520) + 16LL * (unsigned int)(*v31 - 1));
                }
                else
                {
                  v56 = -2147467259;
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x19F7u);
                }
                if ( (_DWORD)v113 == 4 )
                {
                  if ( *v31 )
                    --*v31;
                  v67 = *(_DWORD *)(v30 + 536);
                  if ( v67 )
                    *(_DWORD *)(v30 + 536) = v67 - 1;
                  v68 = *(_DWORD *)(v30 + 568);
                  if ( v68 )
                    *(_DWORD *)(v30 + 568) = v68 - 1;
                  *(_BYTE *)(v30 + 6528) = 1;
                }
                else if ( (_DWORD)v113 == 8 )
                {
                  if ( *v31 )
                    --*v31;
                  v69 = *(_DWORD *)(v30 + 880);
                  if ( v69 )
                  {
                    v70 = (unsigned int)(v69 - 1);
                    v71 = 28 * v70;
                    *(_DWORD *)(v30 + 880) = v70;
                    v72 = *(_QWORD *)(v30 + 896);
                    v73 = *(_OWORD *)(v71 + v72);
                    v74 = *(_QWORD *)(v71 + v72 + 16);
                    LODWORD(v72) = *(_DWORD *)(v71 + v72 + 24);
                    v114 = v73;
                    v116 = v72;
                    v115 = v74;
                  }
                  *(_BYTE *)(v30 + 344) = v116;
                  *(_QWORD *)(v30 + 324) = v114;
                  *(_DWORD *)(v30 + 352) = DWORD2(v114);
                  *(_DWORD *)(v30 + 332) = HIDWORD(v114);
                  *(_QWORD *)(v30 + 336) = v115;
                }
                else
                {
                  switch ( (int)v113 )
                  {
                    case 1:
                      if ( *v31 )
                        --*v31;
                      v75 = *(_DWORD *)(v30 + 2984);
                      if ( v75 )
                        *(_DWORD *)(v30 + 2984) = v75 - 1;
                      v76 = 10LL * (unsigned int)(*(_DWORD *)(v30 + 936) - 1);
                      --*(_DWORD *)(*(_QWORD *)(v30 + 912) + 8 * v76 + 4);
                      *(_BYTE *)(v30 + 6529) = 1;
                      goto LABEL_133;
                    case 2:
                      if ( *v31 )
                        --*v31;
                      v57 = *(_BYTE *)(120LL * (unsigned int)(*(_DWORD *)(v30 + 1768) - 1)
                                     + *(_QWORD *)(v30 + 1744)
                                     + 112);
                      v58 = *(_QWORD *)(v30 + 1744) + 120LL * (unsigned int)(*(_DWORD *)(v30 + 1768) - 1);
                      if ( *(_BYTE *)(v58 + 8) )
                      {
                        v78 = *(CRectanglesShape **)v58;
                        if ( *(_QWORD *)v58 )
                        {
                          v79 = **(void *(__fastcall ***)(CRectanglesShape *__hidden, unsigned int))v78;
                          if ( v79 == CRectanglesShape::`scalar deleting destructor' )
                            CRectanglesShape::`scalar deleting destructor'(v78, 1u);
                          else
                            v79(v78, 1u);
                        }
                      }
                      *(_QWORD *)v58 = 0LL;
                      *(_BYTE *)(v58 + 8) = 0;
                      v59 = *(CRectanglesShape **)(v58 + 88);
                      if ( v59 )
                      {
                        v80 = **(CRegionShape *(__fastcall ***)(CRegionShape *, char))v59;
                        if ( (char *)v80 == (char *)CRectanglesShape::`scalar deleting destructor' )
                        {
                          CRectanglesShape::`scalar deleting destructor'(v59, 1u);
                        }
                        else if ( v80 == CRegionShape::`vector deleting destructor' )
                        {
                          CRegionShape::`vector deleting destructor'(v59, 1);
                        }
                        else
                        {
                          v80(v59, 1);
                        }
                      }
                      --*(_DWORD *)(v30 + 1768);
                      v60 = 10LL * (unsigned int)(*(_DWORD *)(v30 + 936) - 1);
                      --*(_DWORD *)(*(_QWORD *)(v30 + 912) + 8 * v60 + 8);
                      if ( !v57 )
                        goto LABEL_133;
                      if ( !*(_BYTE *)(v30 + 6530) )
                        goto LABEL_101;
                      v61 = *(_DWORD *)(v30 + 1768);
                      v62 = v61
                          - *(_DWORD *)(*(_QWORD *)(v30 + 912) + 80LL * (unsigned int)(*(_DWORD *)(v30 + 936) - 1) + 8);
                      if ( v62 >= v61 )
                        goto LABEL_162;
                      break;
                    case 3:
                      if ( *v31 )
                        --*v31;
                      --*(_DWORD *)(v30 + 936);
                      goto LABEL_133;
                    case 5:
                    case 6:
                      v81 = CDrawingContext::PopLayer((CDrawingContext *)v30);
                      v56 = v81;
                      if ( v81 >= 0 )
                        continue;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0x1A0Bu);
                      goto LABEL_133;
                    case 7:
                      if ( *v31 )
                        --*v31;
                      v77 = *(_DWORD *)(v30 + 3016);
                      if ( v77 )
                        *(_DWORD *)(v30 + 3016) = v77 - 1;
                      goto LABEL_133;
                    case 9:
                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)(v30 + 504), &v114);
                      v98 = CLightStack::Pop((CLightStack *)(v30 + 728));
                      v56 = v98;
                      if ( v98 < 0 )
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0x2709u);
                      if ( v56 >= 0 )
                        continue;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x1A1Bu);
                      goto LABEL_133;
                    default:
                      goto LABEL_133;
                  }
                  while ( !*(_BYTE *)(120LL * v62 + *(_QWORD *)(v30 + 1744) + 112) )
                  {
                    if ( ++v62 >= v61 )
                    {
LABEL_162:
                      *(_BYTE *)(v30 + 6530) = 0;
                      break;
                    }
                  }
LABEL_101:
                  v63 = *(_DWORD *)(v30 + 936);
                  if ( v63
                    && *(_DWORD *)(*(_QWORD *)(v30 + 912) + 80LL * (unsigned int)(v63 - 1) + 4)
                    && *(_DWORD *)(v30 + 2984) )
                  {
                    v64 = *(_DWORD *)(v30 + 2984);
                    if ( v64 )
                    {
                      v114 = *(_OWORD *)(*(_QWORD *)(v30 + 3000) + 16LL * (unsigned int)(v64 - 1));
                      v11 = *((float *)&v114 + 3);
                      v13 = *((float *)&v114 + 2);
                      v14 = *((float *)&v114 + 1);
                      v15 = *(float *)&v114;
                    }
                  }
                  else
                  {
                    v11 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
                    v13 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
                    v14 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
                    v15 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  }
                  if ( v63 && *(_DWORD *)(*(_QWORD *)(v30 + 912) + 80LL * (unsigned int)(v63 - 1) + 8) )
                  {
                    v65 = 120LL * (unsigned int)(*(_DWORD *)(v30 + 1768) - 1);
                    v66 = *(_QWORD *)(v30 + 1744);
                    if ( *(float *)(v65 + v66 + 96) > v15 )
                      v15 = *(float *)(v65 + v66 + 96);
                    if ( *(float *)(v65 + v66 + 100) > v14 )
                      v14 = *(float *)(v65 + v66 + 100);
                    if ( v13 > *(float *)(v65 + v66 + 104) )
                      v13 = *(float *)(v65 + v66 + 104);
                    if ( v11 > *(float *)(v65 + v66 + 108) )
                      v11 = *(float *)(v65 + v66 + 108);
                    if ( v13 <= v15 || v11 <= v14 )
                    {
                      v11 = 0.0;
                      v13 = 0.0;
                      v14 = 0.0;
                      v15 = 0.0;
                    }
                  }
                  if ( v13 > v15
                    && v11 > v14
                    && (v15 < *(float *)(v30 + 220)
                     || v14 < *(float *)(v30 + 224)
                     || *(float *)(v30 + 228) < v13
                     || *(float *)(v30 + 232) < v11) )
                  {
                    *(_BYTE *)(v30 + 6529) = 1;
                  }
                }
LABEL_133:
                if ( v56 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x160Fu);
                  break;
                }
              }
              v12 = v108;
              v32 = 0LL;
              v33 = *(_DWORD *)(v108 + 3024);
              if ( v33 )
                v32 = (_QWORD *)(*(_QWORD *)(v108 + 3040) + 16LL * (unsigned int)(v33 - 1));
              if ( (_BYTE *)*v32 == v29 && v33 )
                *(_DWORD *)(v108 + 3024) = v33 - 1;
              if ( (v29[153] & 0x20) != 0 && *(_BYTE *)(*(_QWORD *)(v12 + 6128) + 32LL) )
              {
                CDrawingContext::CalcClippedNodeWorldSpaceBounds(v30, (__int64)v29, &v117);
                v114 = v117;
                v99 = CDrawingContext::RedrawVisual((CDrawingContext *)v30);
                v10 = v99;
                if ( v99 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0x22E8u);
              }
              else
              {
                v10 = 0;
              }
            }
            if ( v10 < 0 )
              break;
            v34 = *(_QWORD *)(a1 + 16);
            v10 = 0;
            if ( v34
              && ((v35 = *(_DWORD *)(a1 + 28), v35 == 1)
               && (v36 = *(_DWORD *)(a1 + 24), v36 != -1)
               && ((v37 = *(_QWORD *)(v34 + 136), (v37 & 2) == 0)
                 ? (LODWORD(v37) = v37 & 1)
                 : (v37 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFFCuLL)),
                   v36 + 1 < (unsigned int)v37)
               || !v35 && (v36 = *(_DWORD *)(a1 + 24)) != 0) )
            {
              if ( v35 == 1 )
                v38 = (unsigned int)(v36 + 1);
              else
                v38 = (unsigned int)(v36 - 1);
              v39 = *(_QWORD *)(v34 + 136);
              if ( (v39 & 2) != 0 )
                v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
              else
                v40 = *(_QWORD *)(v34 + 136) & 1LL;
              if ( v40 <= (unsigned int)v38
                || ((v41 = *(_QWORD *)(v34 + 136), (v41 & 2) == 0)
                  ? (v42 = v41 & 1)
                  : (v42 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCuLL)),
                    (unsigned int)v38 >= v42) )
              {
                v17 = 0LL;
              }
              else
              {
                v17 = (CVisual *)(v41 & 0xFFFFFFFFFFFFFFFCuLL);
                if ( v42 != 1 )
                  v17 = (CVisual *)*((_QWORD *)v17 + v38 + 2);
              }
              *(_QWORD *)(a1 + 8) = v17;
              *(_DWORD *)(a1 + 24) = v38;
              if ( v17 )
              {
                v8 = v111;
                goto LABEL_66;
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
                v114 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v46);
                v45 = DWORD2(v114);
                v44 = v114;
              }
              v47 = *(_QWORD *)(a1 + 16);
              --*(_DWORD *)(a1 + 4);
              *(_QWORD *)(a1 + 8) = v47;
              *(_QWORD *)(a1 + 16) = v44;
              *(_DWORD *)(a1 + 24) = v45;
              if ( v47 )
                continue;
            }
            goto LABEL_74;
          }
          v106 = 135;
          goto LABEL_239;
        }
LABEL_66:
        v10 = CVisual::EnsureTreeData(v17, v8, &v109);
        if ( v10 < 0 )
          goto LABEL_237;
      }
      v84 = -2147024809;
      goto LABEL_205;
    }
LABEL_237:
    v106 = 103;
  }
LABEL_239:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v106);
LABEL_74:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v110 )
  {
    Current = CThreadContext::GetCurrent(&v109);
    if ( Current < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Current, 0x8Cu);
    }
    else
    {
      v49 = v109;
      v50 = *(_QWORD *)v109;
      if ( (*(_QWORD *)v109 & 2) != 0 )
        v51 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v51 = *(_QWORD *)v109 & 1LL;
      v52 = v51 - 1;
      if ( (*(_QWORD *)v109 & 2LL) != 0 )
        v53 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v53 = *(_QWORD *)v109 & 1LL;
      if ( v52 < v53 )
      {
        if ( v53 == 1 )
        {
          *(_QWORD *)v109 = 0LL;
        }
        else
        {
          v91 = (_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCuLL);
          v92 = v53 - 1;
          v93 = v91 + 2;
          if ( v92 == 1 )
          {
            v94 = v93[-v52 + 1];
            v95 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
            if ( v95 == WPF::ProcessHeapImpl::Free )
              WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v91);
            else
              ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD *))v95)(WPF::g_pProcessHeap, v91);
            *(_QWORD *)v49 = v94 | 1;
          }
          else
          {
            if ( v52 < v92 )
              memmove(&v93[v52], &v93[v52 + 1], 8 * (v92 - v52));
            *v91 = v92;
          }
        }
      }
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v54 = *(_DWORD *)(a1 + 40);
  if ( v54 == 10 )
  {
    v82 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v82 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v82) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v82) <= *(_DWORD *)(a1 + 36) )
    {
      if ( (_DWORD)v82 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v82 > 0x10 )
      {
        v100 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL);
        v101 = 16LL * (unsigned int)v82;
        if ( v100 == WPF::ProcessHeapImpl::Alloc )
          v102 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v101);
        else
          v102 = v100(WPF::g_pProcessHeap, v101);
        v103 = v102;
        if ( v102 )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v103;
          *(_DWORD *)(a1 + 36) = v82;
          goto LABEL_174;
        }
        v104 = -2147024882;
      }
      else
      {
        v104 = -2147024809;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v104, 0xF3u);
    }
LABEL_174:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v10;
  }
  *(_DWORD *)(a1 + 40) = v54 + 1;
  return (unsigned int)v10;
}
