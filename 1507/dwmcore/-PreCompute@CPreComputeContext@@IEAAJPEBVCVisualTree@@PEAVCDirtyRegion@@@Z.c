/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18003C0C0
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BF08 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180031E90 (--$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPre.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180036070 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005E378 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18005F6E8 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x18005F80C (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  const struct CVisualTree *v4; // rsi
  __int64 v5; // rcx
  int v6; // r14d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  unsigned int v30; // eax
  __int64 v31; // r15
  __int64 v32; // r15
  __int64 v33; // r15
  unsigned int v34; // eax
  __int64 v35; // r15
  unsigned int v36; // eax
  __int64 v37; // r15
  unsigned int v38; // eax
  __int64 v39; // r15
  unsigned int v40; // eax
  __int64 v41; // r15
  unsigned int v42; // eax
  __int64 v43; // r15
  unsigned int v44; // eax
  __int64 v45; // r15
  unsigned int v46; // eax
  __int64 v47; // r15
  unsigned int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  void **v63; // [rsp+20h] [rbp-48h]
  __int64 v64; // [rsp+30h] [rbp-38h] BYREF
  int v65; // [rsp+38h] [rbp-30h]
  __int64 v66; // [rsp+40h] [rbp-28h]
  int v67; // [rsp+48h] [rbp-20h]
  CVisual *v68; // [rsp+90h] [rbp+28h] BYREF
  const struct CVisualTree *v69; // [rsp+98h] [rbp+30h]
  unsigned __int64 v70; // [rsp+A0h] [rbp+38h] BYREF

  v69 = a2;
  v4 = a2;
  v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 488LL);
  if ( v5 && *(_BYTE *)(v5 + 24) )
    *(_BYTE *)(v5 + 26) = 1;
  *((_QWORD *)this + 43) = a3;
  v6 = 0;
  if ( !*((_QWORD *)this + 34) )
  {
    v49 = CContentBounder::Create(*((struct CComposition **)this + 1), (struct CContentBounder **)this + 34);
    v6 = v49;
    if ( v49 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x26Cu);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x38u);
    goto LABEL_42;
  }
  *((_DWORD *)this + 4) = 0;
  LODWORD(v68) = 1;
  v7 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 4, &v68);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3Bu);
    goto LABEL_42;
  }
  *((_DWORD *)this + 12) = 0;
  LODWORD(v68) = 1;
  v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 12, &v68);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3Eu);
    goto LABEL_42;
  }
  *((_DWORD *)this + 20) = 0;
  LODWORD(v68) = 0;
  v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 20, &v68);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x41u);
    goto LABEL_42;
  }
  v10 = *((_QWORD *)v4 + 3);
  v6 = 0;
  v11 = *(_QWORD *)(v10 + 80);
  if ( v11 && (*(_BYTE *)(v11 + 88) & 1) != 0 )
  {
    v68 = *(CVisual **)(v10 + 80);
    v64 = 0LL;
    v66 = 0LL;
    v65 = 0;
    v67 = 0;
    do
    {
      v50 = CWatermarkStack<CVisual *,64,2,10>::Push(&v64, &v68);
      v6 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x2AEu);
        goto LABEL_116;
      }
      v11 = *(_QWORD *)(v11 + 80);
      v68 = (CVisual *)v11;
    }
    while ( v11 );
    do
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(&v64, &v68);
      CVisual::ComputeLayoutSize(v68);
    }
    while ( (_DWORD)v64 );
LABEL_116:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v66);
    v4 = v69;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x45u);
    goto LABEL_42;
  }
  LODWORD(v63) = 1;
  v12 = CGraphIterator::WalkSubtree<CPreComputeContext>(
          (__int64)this + 192,
          (unsigned __int64)v4,
          *((_QWORD *)v4 + 3),
          this);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4Cu);
    goto LABEL_42;
  }
  v13 = *((_DWORD *)this + 4);
  if ( v13 )
    *((_DWORD *)this + 4) = v13 - 1;
  v14 = *((_DWORD *)this + 6);
  v15 = 64LL;
  if ( v14 == 10 )
  {
    if ( *((_DWORD *)this + 10) > 0x40u )
      v15 = *((unsigned int *)this + 10);
    LODWORD(v68) = v15;
    if ( 3 * v15 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v15) <= *((_DWORD *)this + 5) )
    {
      v70 = 0LL;
      v51 = WPF::HrMalloc((WPF *)v15, 4LL, (unsigned int)v15, (unsigned __int64)&v70, v63);
      if ( v51 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 4));
        v4 = v69;
        *((_QWORD *)this + 4) = v70;
        *((_DWORD *)this + 5) = (_DWORD)v68;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0xF3u);
      }
    }
    *((_DWORD *)this + 10) = 0;
    v15 = 64LL;
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    *((_DWORD *)this + 6) = v14 + 1;
  }
  v16 = *((_DWORD *)this + 12);
  if ( v16 )
    *((_DWORD *)this + 12) = v16 - 1;
  v17 = *((_DWORD *)this + 14);
  if ( v17 != 10 )
  {
    *((_DWORD *)this + 14) = v17 + 1;
    goto LABEL_20;
  }
  v32 = 64LL;
  if ( *((_DWORD *)this + 18) > 0x40u )
    v32 = *((unsigned int *)this + 18);
  if ( (unsigned __int64)(3 * v32) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_132:
    v15 = 64LL;
    goto LABEL_63;
  }
  if ( (unsigned int)(3 * v32) <= *((_DWORD *)this + 13) )
  {
    v68 = 0LL;
    v52 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v32, (unsigned __int64)&v68, v63);
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 8));
      v4 = v69;
      *((_QWORD *)this + 8) = v68;
      *((_DWORD *)this + 13) = v32;
    }
    goto LABEL_132;
  }
LABEL_63:
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 14) = 0;
LABEL_20:
  v18 = *((_DWORD *)this + 20);
  if ( v18 )
    *((_DWORD *)this + 20) = v18 - 1;
  v19 = *((_DWORD *)this + 22);
  if ( v19 != 10 )
  {
    *((_DWORD *)this + 22) = v19 + 1;
    goto LABEL_24;
  }
  v33 = 64LL;
  if ( *((_DWORD *)this + 26) > 0x40u )
    v33 = *((unsigned int *)this + 26);
  if ( (unsigned __int64)(3 * v33) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_137:
    v15 = 64LL;
    goto LABEL_68;
  }
  if ( (unsigned int)(3 * v33) <= *((_DWORD *)this + 21) )
  {
    v68 = 0LL;
    v53 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v33, (unsigned __int64)&v68, v63);
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 12));
      v4 = v69;
      *((_QWORD *)this + 12) = v68;
      *((_DWORD *)this + 21) = v33;
    }
    goto LABEL_137;
  }
LABEL_68:
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 22) = 0;
LABEL_24:
  v20 = *((_DWORD *)this + 154);
  if ( v20 != 10 )
  {
    *((_DWORD *)this + 154) = v20 + 1;
    goto LABEL_26;
  }
  v34 = *((_DWORD *)this + 158);
  v35 = 64LL;
  if ( v34 > 0x40 )
    v35 = v34;
  if ( (unsigned __int64)(3 * v35) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_142:
    v15 = 64LL;
    goto LABEL_73;
  }
  if ( (unsigned int)(3 * v35) <= *((_DWORD *)this + 153) )
  {
    v68 = 0LL;
    v54 = WPF::HrMalloc((WPF *)0x40, 1LL, (unsigned int)v35, (unsigned __int64)&v68, v63);
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 78));
      v4 = v69;
      *((_QWORD *)this + 78) = v68;
      *((_DWORD *)this + 153) = v35;
    }
    goto LABEL_142;
  }
LABEL_73:
  *((_DWORD *)this + 158) = 0;
  *((_DWORD *)this + 154) = 0;
LABEL_26:
  v21 = *((_DWORD *)this + 146);
  if ( v21 != 10 )
  {
    *((_DWORD *)this + 146) = v21 + 1;
    goto LABEL_28;
  }
  v36 = *((_DWORD *)this + 150);
  v37 = 64LL;
  if ( v36 > 0x40 )
    v37 = v36;
  if ( (unsigned __int64)(3 * v37) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_147:
    v15 = 64LL;
    goto LABEL_78;
  }
  if ( (unsigned int)(3 * v37) <= *((_DWORD *)this + 145) )
  {
    v68 = 0LL;
    v55 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v37, (unsigned __int64)&v68, v63);
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 74));
      v4 = v69;
      *((_QWORD *)this + 74) = v68;
      *((_DWORD *)this + 145) = v37;
    }
    goto LABEL_147;
  }
LABEL_78:
  *((_DWORD *)this + 150) = 0;
  *((_DWORD *)this + 146) = 0;
LABEL_28:
  v22 = *((_DWORD *)this + 138);
  if ( v22 != 10 )
  {
    *((_DWORD *)this + 138) = v22 + 1;
    goto LABEL_30;
  }
  v38 = *((_DWORD *)this + 142);
  v39 = 64LL;
  if ( v38 > 0x40 )
    v39 = v38;
  if ( (unsigned __int64)(3 * v39) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_152:
    v15 = 64LL;
    goto LABEL_83;
  }
  if ( (unsigned int)(3 * v39) <= *((_DWORD *)this + 137) )
  {
    v68 = 0LL;
    v56 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v39, (unsigned __int64)&v68, v63);
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 70));
      v4 = v69;
      *((_QWORD *)this + 70) = v68;
      *((_DWORD *)this + 137) = v39;
    }
    goto LABEL_152;
  }
LABEL_83:
  *((_DWORD *)this + 142) = 0;
  *((_DWORD *)this + 138) = 0;
LABEL_30:
  v23 = *((_DWORD *)this + 130);
  if ( v23 != 10 )
  {
    *((_DWORD *)this + 130) = v23 + 1;
    goto LABEL_32;
  }
  v40 = *((_DWORD *)this + 134);
  v41 = 64LL;
  if ( v40 > 0x40 )
    v41 = v40;
  if ( (unsigned __int64)(3 * v41) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_157:
    v15 = 64LL;
    goto LABEL_88;
  }
  if ( (unsigned int)(3 * v41) <= *((_DWORD *)this + 129) )
  {
    v68 = 0LL;
    v57 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v41, (unsigned __int64)&v68, v63);
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 66));
      v4 = v69;
      *((_QWORD *)this + 66) = v68;
      *((_DWORD *)this + 129) = v41;
    }
    goto LABEL_157;
  }
LABEL_88:
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 130) = 0;
LABEL_32:
  v24 = *((_DWORD *)this + 122);
  if ( v24 != 10 )
  {
    *((_DWORD *)this + 122) = v24 + 1;
    goto LABEL_34;
  }
  v42 = *((_DWORD *)this + 126);
  v43 = 64LL;
  if ( v42 > 0x40 )
    v43 = v42;
  if ( (unsigned __int64)(3 * v43) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_162:
    v15 = 64LL;
    goto LABEL_93;
  }
  if ( (unsigned int)(3 * v43) <= *((_DWORD *)this + 121) )
  {
    v68 = 0LL;
    v58 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v43, (unsigned __int64)&v68, v63);
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 62));
      v4 = v69;
      *((_QWORD *)this + 62) = v68;
      *((_DWORD *)this + 121) = v43;
    }
    goto LABEL_162;
  }
LABEL_93:
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 122) = 0;
LABEL_34:
  v25 = *((_DWORD *)this + 114);
  if ( v25 != 10 )
  {
    *((_DWORD *)this + 114) = v25 + 1;
    goto LABEL_36;
  }
  v44 = *((_DWORD *)this + 118);
  v45 = 64LL;
  if ( v44 > 0x40 )
    v45 = v44;
  if ( (unsigned __int64)(3 * v45) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_167:
    v15 = 64LL;
    goto LABEL_98;
  }
  if ( (unsigned int)(3 * v45) <= *((_DWORD *)this + 113) )
  {
    v68 = 0LL;
    v59 = WPF::HrMalloc((WPF *)0x40, 4LL, (unsigned int)v45, (unsigned __int64)&v68, v63);
    if ( v59 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 58));
      v4 = v69;
      *((_QWORD *)this + 58) = v68;
      *((_DWORD *)this + 113) = v45;
    }
    goto LABEL_167;
  }
LABEL_98:
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 114) = 0;
LABEL_36:
  v26 = *((_DWORD *)this + 106);
  if ( v26 != 8 )
  {
    *((_DWORD *)this + 106) = v26 + 1;
    goto LABEL_38;
  }
  v30 = *((_DWORD *)this + 110);
  v31 = 8LL;
  if ( v30 > 8 )
    v31 = v30;
  if ( (unsigned __int64)(3 * v31) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_172:
    v15 = 64LL;
    goto LABEL_53;
  }
  if ( (unsigned int)(3 * v31) <= *((_DWORD *)this + 105) )
  {
    v68 = 0LL;
    v60 = WPF::HrMalloc((WPF *)0x40, 64LL, (unsigned int)v31, (unsigned __int64)&v68, v63);
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 54));
      v4 = v69;
      *((_QWORD *)this + 54) = v68;
      *((_DWORD *)this + 105) = v31;
    }
    goto LABEL_172;
  }
LABEL_53:
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 106) = 0;
LABEL_38:
  v27 = *((_DWORD *)this + 98);
  if ( v27 != 10 )
  {
    *((_DWORD *)this + 98) = v27 + 1;
    goto LABEL_40;
  }
  v46 = *((_DWORD *)this + 102);
  v47 = 64LL;
  if ( v46 > 0x40 )
    v47 = v46;
  if ( (unsigned __int64)(3 * v47) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_177:
    v15 = 64LL;
    goto LABEL_103;
  }
  if ( (unsigned int)(3 * v47) <= *((_DWORD *)this + 97) )
  {
    v68 = 0LL;
    v61 = WPF::HrMalloc((WPF *)0x40, 8LL, (unsigned int)v47, (unsigned __int64)&v68, v63);
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 50));
      v4 = v69;
      *((_QWORD *)this + 50) = v68;
      *((_DWORD *)this + 97) = v47;
    }
    goto LABEL_177;
  }
LABEL_103:
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 98) = 0;
LABEL_40:
  v28 = *((_DWORD *)this + 90);
  if ( v28 == 10 )
  {
    v48 = *((_DWORD *)this + 94);
    if ( v48 > 0x40 )
      v15 = v48;
    v70 = v15;
    if ( 3 * v15 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v15) <= *((_DWORD *)this + 89) )
    {
      v68 = 0LL;
      v62 = WPF::HrMalloc((WPF *)v15, 8LL, (unsigned int)v15, (unsigned __int64)&v68, v63);
      if ( v62 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 46));
        v4 = v69;
        *((_QWORD *)this + 46) = v68;
        *((_DWORD *)this + 89) = v70;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0xF3u);
      }
    }
    *((_DWORD *)this + 94) = 0;
    *((_DWORD *)this + 90) = 0;
  }
  else
  {
    *((_DWORD *)this + 90) = v28 + 1;
  }
LABEL_42:
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 28) = 0;
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
