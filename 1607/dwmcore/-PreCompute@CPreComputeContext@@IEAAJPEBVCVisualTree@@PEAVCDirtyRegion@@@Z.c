/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18000C768 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000B400 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x18000CA64 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?Optimize@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ @ 0x180025850 (-Optimize@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004BBD0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180050B44 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180060F20 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070FBC (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800A5C88 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800AED0C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800AEE6C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B05A8 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180110060 (-GetRectBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  const struct CVisualTree *v4; // r12
  __int64 v5; // rcx
  int v6; // r15d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // esi
  struct CComposition *v16; // rdx
  struct CVisual *v17; // r9
  struct CVisual *v18; // rax
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // edi
  int v22; // eax
  __int64 v23; // r9
  float *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r9
  unsigned int v27; // edi
  int v28; // eax
  int v29; // eax
  __int64 v30; // r14
  int v31; // r12d
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  unsigned int v48; // eax
  __int64 v49; // rdi
  unsigned int v50; // eax
  __int64 v51; // rdi
  unsigned int v52; // eax
  __int64 v53; // rdi
  unsigned int v54; // eax
  __int64 v55; // rdi
  unsigned int v56; // eax
  __int64 v57; // rdi
  unsigned int v58; // eax
  __int64 v59; // rdi
  unsigned int v60; // eax
  __int64 v61; // rdi
  unsigned int v62; // eax
  int v63; // eax
  int v64; // eax
  __int64 v65; // rdi
  __int64 v66; // rsi
  struct CVisual *v67; // r10
  __int64 v68; // r14
  __int64 v69; // rcx
  const struct CVisual *v70; // rax
  struct CVisual *v71; // r9
  int v72; // eax
  unsigned int i; // r10d
  int v74; // r10d
  int v75; // eax
  __int128 v76; // xmm0
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rax
  SIZE_T v80; // rdx
  LPVOID (__fastcall *v81)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v82; // rax
  LPVOID v83; // rsi
  int v84; // r9d
  SIZE_T v85; // rdx
  LPVOID (__fastcall *v86)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v87; // rax
  LPVOID v88; // rsi
  int v89; // r9d
  SIZE_T v90; // rdx
  LPVOID (__fastcall *v91)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v92; // rax
  LPVOID v93; // rsi
  int v94; // r9d
  LPVOID (__fastcall *v95)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v96; // rax
  LPVOID v97; // rsi
  int v98; // r9d
  SIZE_T v99; // rdx
  LPVOID (__fastcall *v100)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v101; // rax
  LPVOID v102; // rsi
  int v103; // r9d
  SIZE_T v104; // rdx
  LPVOID (__fastcall *v105)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v106; // rax
  LPVOID v107; // rsi
  int v108; // r9d
  SIZE_T v109; // rdx
  LPVOID (__fastcall *v110)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v111; // rax
  LPVOID v112; // rsi
  int v113; // r9d
  SIZE_T v114; // rdx
  LPVOID (__fastcall *v115)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v116; // rax
  LPVOID v117; // rsi
  int v118; // r9d
  SIZE_T v119; // rdx
  LPVOID (__fastcall *v120)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v121; // rax
  LPVOID v122; // rsi
  int v123; // r9d
  SIZE_T v124; // rdx
  LPVOID (__fastcall *v125)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v126; // rax
  LPVOID v127; // rsi
  int v128; // r9d
  SIZE_T v129; // rdx
  LPVOID (__fastcall *v130)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v131; // rax
  LPVOID v132; // rdi
  unsigned int v133; // [rsp+20h] [rbp-39h]
  CVisual *v135[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v136; // [rsp+58h] [rbp-1h] BYREF
  int v137; // [rsp+60h] [rbp+7h]
  __int64 v138; // [rsp+68h] [rbp+Fh]
  int v139; // [rsp+70h] [rbp+17h]

  v4 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 488LL);
  if ( v5 && *(_BYTE *)(v5 + 24) )
    *(_BYTE *)(v5 + 26) = 1;
  *((_QWORD *)this + 43) = a3;
  v6 = 0;
  if ( !*((_QWORD *)this + 34) )
  {
    v63 = CContentBounder::Create(*((struct CComposition **)this + 1), (struct CContentBounder **)this + 34);
    v6 = v63;
    if ( v63 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x294u);
  }
  if ( v6 < 0 )
  {
    v133 = 67;
LABEL_270:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v133);
    goto LABEL_56;
  }
  *((_DWORD *)this + 4) = 0;
  LODWORD(v135[0]) = 1;
  v7 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 16, v135);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x46u);
  }
  else
  {
    LODWORD(v135[0]) = 1;
    *((_DWORD *)this + 12) = 0;
    v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 48, v135);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x49u);
    }
    else
    {
      LODWORD(v135[0]) = 0;
      *((_DWORD *)this + 20) = 0;
      v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 80, v135);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v10 = (char *)this + 352;
        *((_DWORD *)this + 94) = 0;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 352, 24LL);
        v11 = *((_QWORD *)this + 1);
        if ( *(_DWORD *)(v11 + 1024) )
        {
          v65 = 0LL;
          v66 = *(unsigned int *)(v11 + 1024);
          do
          {
            if ( CVisualTree::IsInTree(
                   (const struct CVisual **)v4,
                   *(const struct CVisual **)(v65 + *(_QWORD *)(*((_QWORD *)this + 1) + 1000LL))) )
            {
              CVisual::PropagateFlags(v67, 1, 0, 0, 0, 0, 0);
            }
            v65 += 8LL;
            --v66;
          }
          while ( v66 );
        }
        v12 = *((_QWORD *)v4 + 3);
        v6 = 0;
        v13 = *(_QWORD *)(v12 + 144);
        if ( v13 && (*(_BYTE *)(v13 + 152) & 1) != 0 )
        {
          v135[0] = *(CVisual **)(v12 + 144);
          v136 = 0LL;
          v138 = 0LL;
          v137 = 0;
          v139 = 0;
          do
          {
            v64 = CWatermarkStack<CVisual *,64,2,10>::Push(&v136, v135);
            v6 = v64;
            if ( v64 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x2D6u);
              goto LABEL_125;
            }
            v13 = *(_QWORD *)(v13 + 144);
            v135[0] = (CVisual *)v13;
          }
          while ( v13 );
          do
          {
            CWatermarkStack<CVisual *,64,2,10>::Pop(&v136, v135);
            CVisual::ComputeLayoutSize(v135[0]);
          }
          while ( (_DWORD)v136 );
LABEL_125:
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v138);
        }
        if ( v6 < 0 )
        {
          v133 = 82;
        }
        else
        {
          v6 = 0;
          v14 = 0LL;
          v15 = *(_DWORD *)(*((_QWORD *)this + 1) + 960LL);
          if ( v15 )
          {
            while ( 1 )
            {
              v16 = (struct CComposition *)*((_QWORD *)this + 1);
              v17 = *(struct CVisual **)(*((_QWORD *)v16 + 117) + 8 * v14);
              v18 = v17;
              if ( v17 )
              {
                while ( v18 != *((struct CVisual **)v4 + 3) )
                {
                  v18 = (struct CVisual *)*((_QWORD *)v18 + 18);
                  if ( !v18 )
                    goto LABEL_18;
                }
                v19 = CPreComputeHelper::DirtyIfChanged(
                        (__int64 (__usercall ***)@<rax>(CTransformParentPreComputeHelper *__hidden@<rcx>, struct CComposition *@<rdx>, const struct CVisualTree *@<r8>, struct CVisual *@<r9>, unsigned __int64))this
                      + 88,
                        v16,
                        v4,
                        v17);
                v6 = v19;
                if ( v19 < 0 )
                  break;
              }
LABEL_18:
              v14 = (unsigned int)(v14 + 1);
              if ( (unsigned int)v14 >= v15 )
                goto LABEL_19;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x311u);
          }
LABEL_19:
          if ( v6 < 0 )
          {
            v133 = 87;
          }
          else
          {
            v6 = 0;
            v20 = 0;
            v21 = *(_DWORD *)(*((_QWORD *)this + 1) + 992LL);
            if ( v21 )
            {
              v68 = 0LL;
              while ( 1 )
              {
                v69 = *(_QWORD *)(v68 + *(_QWORD *)(*((_QWORD *)this + 1) + 968LL));
                v70 = (const struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 112LL))(v69);
                if ( CVisualTree::IsInTree((const struct CVisual **)v4, v70) )
                {
                  v72 = CPreComputeHelper::DirtyIfChanged(
                          (__int64 (__usercall ***)@<rax>(CTransformParentPreComputeHelper *__hidden@<rcx>, struct CComposition *@<rdx>, const struct CVisualTree *@<r8>, struct CVisual *@<r9>, unsigned __int64))this
                        + 93,
                          *((struct CComposition **)this + 1),
                          v4,
                          v71);
                  v6 = v72;
                  if ( v72 < 0 )
                    break;
                }
                ++v20;
                v68 += 8LL;
                if ( v20 >= v21 )
                  goto LABEL_138;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v72, 0x32Cu);
LABEL_138:
              v10 = (char *)this + 352;
            }
            if ( v6 < 0 )
            {
              v133 = 92;
            }
            else
            {
              v22 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
                      (__int64)this + 192,
                      v4,
                      *((_QWORD *)v4 + 3),
                      this,
                      1);
              v6 = v22;
              if ( v22 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x63u);
                goto LABEL_56;
              }
              v23 = *((_QWORD *)this + 43);
              v6 = 0;
              v135[1] = 0LL;
              v135[0] = 0LL;
              if ( *(_BYTE *)(v23 + 2726) )
              {
                for ( i = 0; i < *(_DWORD *)(v23 + 576); i = v74 + 1 )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                    (float *)v135,
                    (float *)(v23 + 16 * (i + 26LL)));
              }
              else
              {
                v24 = (float *)(v23 + 24);
                do
                {
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)v135, v24);
                  v24 = (float *)(v25 + 16);
                }
                while ( v26 != 1 );
              }
              v27 = 0;
              while ( v27 < *((_DWORD *)this + 94) )
              {
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       (float *)v135,
                       (float *)(*(_QWORD *)v10 + 8 * (3LL * v27 + 1))) )
                {
                  v75 = CDirtyRegion::Add(*((CDirtyRegion **)this + 43));
                  v6 = v75;
                  if ( v75 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x35Eu);
                    break;
                  }
                  v76 = *(_OWORD *)CDirtyRegion::GetRectBounds(*((_QWORD *)this + 43), &v136);
                  v77 = *((_DWORD *)v10 + 6);
                  *(_OWORD *)v135 = v76;
                  if ( v27 >= v77 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x217u);
                  }
                  else
                  {
                    v78 = *(_QWORD *)v10;
                    v79 = v77 - 1;
                    if ( v27 < (unsigned int)v79 )
                    {
                      *(_OWORD *)(v78 + 24LL * v27) = *(_OWORD *)(v78 + 24 * v79);
                      *(_QWORD *)(v78 + 24LL * v27 + 16) = *(_QWORD *)(v78 + 24 * v79 + 16);
                    }
                    --*((_DWORD *)v10 + 6);
                  }
                  v27 = 0;
                }
                else
                {
                  ++v27;
                }
              }
              *((_DWORD *)v10 + 6) = 0;
              DynArrayImpl<0>::ShrinkToSize(v10, 24LL);
              if ( v6 >= 0 )
              {
                v28 = *((_DWORD *)this + 4);
                if ( v28 )
                  *((_DWORD *)this + 4) = v28 - 1;
                v29 = *((_DWORD *)this + 6);
                v30 = 64LL;
                v31 = -2147024882;
                if ( v29 != 10 )
                {
                  *((_DWORD *)this + 6) = v29 + 1;
                  goto LABEL_32;
                }
                v45 = 64LL;
                if ( *((_DWORD *)this + 10) > 0x40u )
                  v45 = *((unsigned int *)this + 10);
                if ( (unsigned __int64)(3 * v45) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v45) <= *((_DWORD *)this + 5) )
                {
                  if ( (_DWORD)v45 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v45 > 4 )
                  {
                    v80 = 4 * v45;
                    v81 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v81 == WPF::ProcessHeapImpl::Alloc )
                      v82 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v80);
                    else
                      v82 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v81)(
                                      WPF::g_pProcessHeap,
                                      v80,
                                      WPF::g_pProcessHeap,
                                      WPF::ProcessHeapImpl::Alloc);
                    v83 = v82;
                    if ( v82 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 4));
                      *((_QWORD *)this + 4) = v83;
                      *((_DWORD *)this + 5) = v45;
                      goto LABEL_67;
                    }
                    v84 = -2147024882;
                  }
                  else
                  {
                    v84 = -2147024809;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v84, 0xF3u);
                }
LABEL_67:
                *((_DWORD *)this + 10) = 0;
                *((_DWORD *)this + 6) = 0;
LABEL_32:
                v32 = *((_DWORD *)this + 12);
                if ( v32 )
                  *((_DWORD *)this + 12) = v32 - 1;
                v33 = *((_DWORD *)this + 14);
                if ( v33 != 10 )
                {
                  *((_DWORD *)this + 14) = v33 + 1;
                  goto LABEL_36;
                }
                v46 = 64LL;
                if ( *((_DWORD *)this + 18) > 0x40u )
                  v46 = *((unsigned int *)this + 18);
                if ( (unsigned __int64)(3 * v46) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v46) <= *((_DWORD *)this + 13) )
                {
                  if ( (_DWORD)v46 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v46 > 4 )
                  {
                    v85 = 4 * v46;
                    v86 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v86 == WPF::ProcessHeapImpl::Alloc )
                      v87 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v85);
                    else
                      v87 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v86)(
                                      WPF::g_pProcessHeap,
                                      v85,
                                      WPF::g_pProcessHeap,
                                      WPF::ProcessHeapImpl::Alloc);
                    v88 = v87;
                    if ( v87 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 8));
                      *((_QWORD *)this + 8) = v88;
                      *((_DWORD *)this + 13) = v46;
                      goto LABEL_72;
                    }
                    v89 = -2147024882;
                  }
                  else
                  {
                    v89 = -2147024809;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0xF3u);
                }
LABEL_72:
                *((_DWORD *)this + 18) = 0;
                *((_DWORD *)this + 14) = 0;
LABEL_36:
                v34 = *((_DWORD *)this + 20);
                if ( v34 )
                  *((_DWORD *)this + 20) = v34 - 1;
                v35 = *((_DWORD *)this + 22);
                if ( v35 != 10 )
                {
                  *((_DWORD *)this + 22) = v35 + 1;
                  goto LABEL_40;
                }
                v47 = 64LL;
                if ( *((_DWORD *)this + 26) > 0x40u )
                  v47 = *((unsigned int *)this + 26);
                if ( (unsigned __int64)(3 * v47) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v47) <= *((_DWORD *)this + 21) )
                {
                  if ( (_DWORD)v47 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v47 > 4 )
                  {
                    v90 = 4 * v47;
                    v91 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v91 == WPF::ProcessHeapImpl::Alloc )
                      v92 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v90);
                    else
                      v92 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v91)(
                                      WPF::g_pProcessHeap,
                                      v90,
                                      WPF::g_pProcessHeap,
                                      WPF::ProcessHeapImpl::Alloc);
                    v93 = v92;
                    if ( v92 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 12));
                      *((_QWORD *)this + 12) = v93;
                      *((_DWORD *)this + 21) = v47;
                      goto LABEL_77;
                    }
                    v94 = -2147024882;
                  }
                  else
                  {
                    v94 = -2147024809;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, 0xF3u);
                }
LABEL_77:
                *((_DWORD *)this + 26) = 0;
                *((_DWORD *)this + 22) = 0;
LABEL_40:
                v36 = *((_DWORD *)this + 170);
                if ( v36 != 10 )
                {
                  *((_DWORD *)this + 170) = v36 + 1;
                  goto LABEL_42;
                }
                v48 = *((_DWORD *)this + 174);
                v49 = 64LL;
                if ( v48 > 0x40 )
                  v49 = v48;
                if ( (unsigned __int64)(3 * v49) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v49) <= *((_DWORD *)this + 169) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v49 <= 1 )
                  {
                    v98 = -2147024809;
                  }
                  else
                  {
                    v95 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v95 == WPF::ProcessHeapImpl::Alloc )
                      v96 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (unsigned int)v49);
                    else
                      v96 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v95)(
                                      WPF::g_pProcessHeap,
                                      (unsigned int)v49,
                                      WPF::g_pProcessHeap,
                                      WPF::ProcessHeapImpl::Alloc);
                    v97 = v96;
                    if ( v96 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 86));
                      *((_QWORD *)this + 86) = v97;
                      *((_DWORD *)this + 169) = v49;
                      goto LABEL_82;
                    }
                    v98 = -2147024882;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0xF3u);
                }
LABEL_82:
                *((_DWORD *)this + 174) = 0;
                *((_DWORD *)this + 170) = 0;
LABEL_42:
                v37 = *((_DWORD *)this + 162);
                if ( v37 != 10 )
                {
                  *((_DWORD *)this + 162) = v37 + 1;
                  goto LABEL_44;
                }
                v50 = *((_DWORD *)this + 166);
                v51 = 64LL;
                if ( v50 > 0x40 )
                  v51 = v50;
                if ( (unsigned __int64)(3 * v51) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v51) <= *((_DWORD *)this + 161) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v51 <= 4 )
                  {
                    v103 = -2147024809;
                  }
                  else
                  {
                    v99 = 4 * v51;
                    v100 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v100 == WPF::ProcessHeapImpl::Alloc )
                      v101 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v99);
                    else
                      v101 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v100)(
                                       WPF::g_pProcessHeap,
                                       v99,
                                       WPF::g_pProcessHeap,
                                       WPF::ProcessHeapImpl::Alloc);
                    v102 = v101;
                    if ( v101 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 82));
                      *((_QWORD *)this + 82) = v102;
                      *((_DWORD *)this + 161) = v51;
                      goto LABEL_87;
                    }
                    v103 = -2147024882;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v103, 0xF3u);
                }
LABEL_87:
                *((_DWORD *)this + 166) = 0;
                *((_DWORD *)this + 162) = 0;
LABEL_44:
                v38 = *((_DWORD *)this + 154);
                if ( v38 != 10 )
                {
                  *((_DWORD *)this + 154) = v38 + 1;
                  goto LABEL_46;
                }
                v52 = *((_DWORD *)this + 158);
                v53 = 64LL;
                if ( v52 > 0x40 )
                  v53 = v52;
                if ( (unsigned __int64)(3 * v53) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v53) <= *((_DWORD *)this + 153) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v53 <= 4 )
                  {
                    v108 = -2147024809;
                  }
                  else
                  {
                    v104 = 4 * v53;
                    v105 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v105 == WPF::ProcessHeapImpl::Alloc )
                      v106 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v104);
                    else
                      v106 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v105)(
                                       WPF::g_pProcessHeap,
                                       v104,
                                       WPF::g_pProcessHeap,
                                       WPF::ProcessHeapImpl::Alloc);
                    v107 = v106;
                    if ( v106 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 78));
                      *((_QWORD *)this + 78) = v107;
                      *((_DWORD *)this + 153) = v53;
                      goto LABEL_92;
                    }
                    v108 = -2147024882;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v108, 0xF3u);
                }
LABEL_92:
                *((_DWORD *)this + 158) = 0;
                *((_DWORD *)this + 154) = 0;
LABEL_46:
                v39 = *((_DWORD *)this + 146);
                if ( v39 != 10 )
                {
                  *((_DWORD *)this + 146) = v39 + 1;
                  goto LABEL_48;
                }
                v54 = *((_DWORD *)this + 150);
                v55 = 64LL;
                if ( v54 > 0x40 )
                  v55 = v54;
                if ( (unsigned __int64)(3 * v55) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v55) <= *((_DWORD *)this + 145) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v55 <= 4 )
                  {
                    v113 = -2147024809;
                  }
                  else
                  {
                    v109 = 4 * v55;
                    v110 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v110 == WPF::ProcessHeapImpl::Alloc )
                      v111 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v109);
                    else
                      v111 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v110)(
                                       WPF::g_pProcessHeap,
                                       v109,
                                       WPF::g_pProcessHeap,
                                       WPF::ProcessHeapImpl::Alloc);
                    v112 = v111;
                    if ( v111 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 74));
                      *((_QWORD *)this + 74) = v112;
                      *((_DWORD *)this + 145) = v55;
                      goto LABEL_97;
                    }
                    v113 = -2147024882;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v113, 0xF3u);
                }
LABEL_97:
                *((_DWORD *)this + 150) = 0;
                *((_DWORD *)this + 146) = 0;
LABEL_48:
                v40 = *((_DWORD *)this + 138);
                if ( v40 != 10 )
                {
                  *((_DWORD *)this + 138) = v40 + 1;
                  goto LABEL_50;
                }
                v56 = *((_DWORD *)this + 142);
                v57 = 64LL;
                if ( v56 > 0x40 )
                  v57 = v56;
                if ( (unsigned __int64)(3 * v57) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v57) <= *((_DWORD *)this + 137) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v57 <= 4 )
                  {
                    v118 = -2147024809;
                  }
                  else
                  {
                    v114 = 4 * v57;
                    v115 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v115 == WPF::ProcessHeapImpl::Alloc )
                      v116 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v114);
                    else
                      v116 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v115)(
                                       WPF::g_pProcessHeap,
                                       v114,
                                       WPF::g_pProcessHeap,
                                       WPF::ProcessHeapImpl::Alloc);
                    v117 = v116;
                    if ( v116 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 70));
                      *((_QWORD *)this + 70) = v117;
                      *((_DWORD *)this + 137) = v57;
                      goto LABEL_102;
                    }
                    v118 = -2147024882;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v118, 0xF3u);
                }
LABEL_102:
                *((_DWORD *)this + 142) = 0;
                *((_DWORD *)this + 138) = 0;
LABEL_50:
                v41 = *((_DWORD *)this + 130);
                if ( v41 != 10 )
                {
                  *((_DWORD *)this + 130) = v41 + 1;
                  goto LABEL_52;
                }
                v58 = *((_DWORD *)this + 134);
                v59 = 64LL;
                if ( v58 > 0x40 )
                  v59 = v58;
                if ( (unsigned __int64)(3 * v59) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v59) <= *((_DWORD *)this + 129) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v59 <= 4 )
                  {
                    v123 = -2147024809;
                  }
                  else
                  {
                    v119 = 4 * v59;
                    v120 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v120 == WPF::ProcessHeapImpl::Alloc )
                      v121 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v119);
                    else
                      v121 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, WPF::ProcessHeapImpl *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v120)(
                                       WPF::g_pProcessHeap,
                                       v119,
                                       WPF::g_pProcessHeap,
                                       WPF::ProcessHeapImpl::Alloc);
                    v122 = v121;
                    if ( v121 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 66));
                      *((_QWORD *)this + 66) = v122;
                      *((_DWORD *)this + 129) = v59;
                      goto LABEL_107;
                    }
                    v123 = -2147024882;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v123, 0xF3u);
                }
LABEL_107:
                *((_DWORD *)this + 134) = 0;
                *((_DWORD *)this + 130) = 0;
LABEL_52:
                CWatermarkStack<CMILMatrix,8,2,8>::Optimize((__int64)this + 480);
                CWatermarkStack<CMILMatrix,8,2,8>::Optimize((__int64)this + 448);
                v42 = *((_DWORD *)this + 106);
                if ( v42 != 10 )
                {
                  *((_DWORD *)this + 106) = v42 + 1;
                  goto LABEL_54;
                }
                v60 = *((_DWORD *)this + 110);
                v61 = 64LL;
                if ( v60 > 0x40 )
                  v61 = v60;
                if ( (unsigned __int64)(3 * v61) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v61) <= *((_DWORD *)this + 105) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v61 <= 8 )
                  {
                    v128 = -2147024809;
                  }
                  else
                  {
                    v124 = 8 * v61;
                    v125 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v125 == WPF::ProcessHeapImpl::Alloc )
                      v126 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v124);
                    else
                      v126 = v125(WPF::g_pProcessHeap, v124);
                    v127 = v126;
                    if ( v126 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 54));
                      *((_QWORD *)this + 54) = v127;
                      *((_DWORD *)this + 105) = v61;
                      goto LABEL_112;
                    }
                    v128 = -2147024882;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v128, 0xF3u);
                }
LABEL_112:
                *((_DWORD *)this + 110) = 0;
                *((_DWORD *)this + 106) = 0;
LABEL_54:
                v43 = *((_DWORD *)this + 98);
                if ( v43 != 10 )
                {
                  v4 = a2;
                  *((_DWORD *)this + 98) = v43 + 1;
                  goto LABEL_56;
                }
                v62 = *((_DWORD *)this + 102);
                if ( v62 > 0x40 )
                  v30 = v62;
                if ( (unsigned __int64)(3 * v30) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
                }
                else if ( (unsigned int)(3 * v30) <= *((_DWORD *)this + 97) )
                {
                  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v30 <= 8 )
                  {
                    v31 = -2147024809;
                  }
                  else
                  {
                    v129 = 8 * v30;
                    v130 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
                    if ( v130 == WPF::ProcessHeapImpl::Alloc )
                      v131 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v129);
                    else
                      v131 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, _QWORD))v130)(
                                       WPF::g_pProcessHeap,
                                       v129,
                                       (unsigned int)v30);
                    v132 = v131;
                    if ( v131 )
                    {
                      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                        WPF::g_pProcessHeap,
                        *((_QWORD *)this + 50));
                      *((_QWORD *)this + 50) = v132;
                      *((_DWORD *)this + 97) = v30;
                      goto LABEL_117;
                    }
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xF3u);
                }
LABEL_117:
                v4 = a2;
                *((_DWORD *)this + 102) = 0;
                *((_DWORD *)this + 98) = 0;
                goto LABEL_56;
              }
              v133 = 101;
            }
          }
        }
        goto LABEL_270;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x4Cu);
    }
  }
LABEL_56:
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 94) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 352, 24LL);
  if ( *((_BYTE *)v4 + 32) )
  {
    if ( *((_DWORD *)this + 76) )
      UpdateWindowInputSinkHints(*((_QWORD *)this + 35));
    *((_DWORD *)this + 76) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 280, 16LL);
    if ( *((_DWORD *)this + 84) )
      NtUpdateInputSinkTransforms(*((_QWORD *)this + 39));
    *((_DWORD *)this + 84) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 312, 72LL);
  }
  return (unsigned int)v6;
}
