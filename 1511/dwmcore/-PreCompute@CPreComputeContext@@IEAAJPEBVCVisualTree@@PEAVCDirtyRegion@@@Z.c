/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004ECA0
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x180048A8C (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180052A00 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?Optimize@?$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAXXZ @ 0x18005DD08 (-Optimize@-$CWatermarkStack@VCBaseMatrix@@$07$01$07@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800A4470 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z @ 0x1800A4594 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAHPEAPEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800A45C0 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800ACB9C (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
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
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rdx
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
  __int64 v28; // rdx
  WPF *v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 v33; // r15
  __int64 v34; // r15
  unsigned int v35; // eax
  __int64 v36; // r15
  unsigned int v37; // eax
  __int64 v38; // r15
  unsigned int v39; // eax
  __int64 v40; // r15
  unsigned int v41; // eax
  __int64 v42; // r15
  unsigned int v43; // eax
  __int64 v44; // r15
  unsigned int v45; // eax
  __int64 v46; // r15
  unsigned int v47; // eax
  __int64 v48; // r15
  unsigned int v49; // eax
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
    v50 = CContentBounder::Create(*((struct CComposition **)this + 1), (struct CContentBounder **)this + 34);
    v6 = v50;
    if ( v50 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x262u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x38u);
    goto LABEL_40;
  }
  *((_DWORD *)this + 4) = 0;
  LODWORD(v68) = 1;
  v7 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 16, &v68);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3Bu);
    goto LABEL_40;
  }
  *((_DWORD *)this + 12) = 0;
  LODWORD(v68) = 1;
  v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 48, &v68);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3Eu);
    goto LABEL_40;
  }
  *((_DWORD *)this + 20) = 0;
  LODWORD(v68) = 0;
  v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 80, &v68);
  v6 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x41u);
    goto LABEL_40;
  }
  v10 = *((_QWORD *)v4 + 3);
  v6 = 0;
  v11 = *(_QWORD *)(v10 + 64);
  if ( v11 && (*(_BYTE *)(v11 + 72) & 1) != 0 )
  {
    v68 = *(CVisual **)(v10 + 64);
    v64 = 0LL;
    v66 = 0LL;
    v65 = 0;
    v67 = 0;
    do
    {
      v51 = CWatermarkStack<CVisual *,64,2,10>::Push(&v64, &v68);
      v6 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x2A4u);
        goto LABEL_109;
      }
      v11 = *(_QWORD *)(v11 + 64);
      v68 = (CVisual *)v11;
    }
    while ( v11 );
    do
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(&v64, &v68);
      CVisual::ComputeLayoutSize(v68);
    }
    while ( (_DWORD)v64 );
LABEL_109:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v66);
    v4 = v69;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x45u);
    goto LABEL_40;
  }
  LODWORD(v63) = 1;
  v12 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>((char *)this + 192, v4, *((_QWORD *)v4 + 3), this);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x4Cu);
    goto LABEL_40;
  }
  v14 = *((_DWORD *)this + 4);
  if ( v14 )
    *((_DWORD *)this + 4) = v14 - 1;
  v15 = *((_DWORD *)this + 6);
  v16 = 64LL;
  v17 = 0xFFFFFFFFLL;
  if ( v15 != 10 )
  {
    *((_DWORD *)this + 6) = v15 + 1;
    goto LABEL_16;
  }
  v13 = 64LL;
  if ( *((_DWORD *)this + 10) > 0x40u )
    v13 = *((unsigned int *)this + 10);
  LODWORD(v68) = v13;
  if ( (unsigned __int64)(3 * v13) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_121:
    v17 = 0xFFFFFFFFLL;
    goto LABEL_51;
  }
  if ( (unsigned int)(3 * v13) <= *((_DWORD *)this + 5) )
  {
    v70 = 0LL;
    v52 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v13, (unsigned __int64)&v70, v63);
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 4));
      v16 = 64LL;
      v4 = v69;
      *((_QWORD *)this + 4) = v70;
      *((_DWORD *)this + 5) = (_DWORD)v68;
    }
    goto LABEL_121;
  }
LABEL_51:
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 6) = 0;
LABEL_16:
  v18 = *((_DWORD *)this + 12);
  if ( v18 )
    *((_DWORD *)this + 12) = v18 - 1;
  v19 = *((_DWORD *)this + 14);
  if ( v19 != 10 )
  {
    *((_DWORD *)this + 14) = v19 + 1;
    goto LABEL_20;
  }
  v33 = 64LL;
  if ( *((_DWORD *)this + 18) > 0x40u )
    v33 = *((unsigned int *)this + 18);
  if ( (unsigned __int64)(3 * v33) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_126:
    v17 = 0xFFFFFFFFLL;
    goto LABEL_56;
  }
  if ( (unsigned int)(3 * v33) <= *((_DWORD *)this + 13) )
  {
    v68 = 0LL;
    v53 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v33, (unsigned __int64)&v68, v63);
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 8));
      v16 = 64LL;
      v4 = v69;
      *((_QWORD *)this + 8) = v68;
      *((_DWORD *)this + 13) = v33;
    }
    goto LABEL_126;
  }
LABEL_56:
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 14) = 0;
LABEL_20:
  v20 = *((_DWORD *)this + 20);
  if ( v20 )
    *((_DWORD *)this + 20) = v20 - 1;
  v21 = *((_DWORD *)this + 22);
  if ( v21 != 10 )
  {
    *((_DWORD *)this + 22) = v21 + 1;
    goto LABEL_24;
  }
  v34 = 64LL;
  if ( *((_DWORD *)this + 26) > 0x40u )
    v34 = *((unsigned int *)this + 26);
  if ( (unsigned __int64)(3 * v34) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_131:
    v17 = 0xFFFFFFFFLL;
    goto LABEL_61;
  }
  if ( (unsigned int)(3 * v34) <= *((_DWORD *)this + 21) )
  {
    v68 = 0LL;
    v54 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v34, (unsigned __int64)&v68, v63);
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v54, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 12));
      v16 = 64LL;
      v4 = v69;
      *((_QWORD *)this + 12) = v68;
      *((_DWORD *)this + 21) = v34;
    }
    goto LABEL_131;
  }
LABEL_61:
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 22) = 0;
LABEL_24:
  v22 = *((_DWORD *)this + 162);
  if ( v22 != 10 )
  {
    *((_DWORD *)this + 162) = v22 + 1;
    goto LABEL_26;
  }
  v35 = *((_DWORD *)this + 166);
  v36 = 64LL;
  if ( v35 > 0x40 )
    v36 = v35;
  if ( (unsigned __int64)(3 * v36) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_136:
    v17 = 0xFFFFFFFFLL;
    goto LABEL_66;
  }
  if ( (unsigned int)(3 * v36) <= *((_DWORD *)this + 161) )
  {
    v68 = 0LL;
    v55 = WPF::HrMalloc((WPF *)v13, 1LL, (unsigned int)v36, (unsigned __int64)&v68, v63);
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 82));
      v16 = 64LL;
      v4 = v69;
      *((_QWORD *)this + 82) = v68;
      *((_DWORD *)this + 161) = v36;
    }
    goto LABEL_136;
  }
LABEL_66:
  *((_DWORD *)this + 166) = 0;
  *((_DWORD *)this + 162) = 0;
LABEL_26:
  v23 = *((_DWORD *)this + 154);
  if ( v23 != 10 )
  {
    *((_DWORD *)this + 154) = v23 + 1;
    goto LABEL_28;
  }
  v37 = *((_DWORD *)this + 158);
  v38 = 64LL;
  if ( v37 > 0x40 )
    v38 = v37;
  if ( (unsigned __int64)(3 * v38) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_141:
    v17 = 0xFFFFFFFFLL;
    goto LABEL_71;
  }
  if ( (unsigned int)(3 * v38) <= *((_DWORD *)this + 153) )
  {
    v68 = 0LL;
    v56 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v38, (unsigned __int64)&v68, v63);
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 78));
      v16 = 64LL;
      v4 = v69;
      *((_QWORD *)this + 78) = v68;
      *((_DWORD *)this + 153) = v38;
    }
    goto LABEL_141;
  }
LABEL_71:
  *((_DWORD *)this + 158) = 0;
  *((_DWORD *)this + 154) = 0;
LABEL_28:
  v24 = *((_DWORD *)this + 146);
  if ( v24 != 10 )
  {
    *((_DWORD *)this + 146) = v24 + 1;
    goto LABEL_30;
  }
  v39 = *((_DWORD *)this + 150);
  v40 = 64LL;
  if ( v39 > 0x40 )
    v40 = v39;
  if ( (unsigned __int64)(3 * v40) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_146:
    v17 = 0xFFFFFFFFLL;
    goto LABEL_76;
  }
  if ( (unsigned int)(3 * v40) <= *((_DWORD *)this + 145) )
  {
    v68 = 0LL;
    v57 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v40, (unsigned __int64)&v68, v63);
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 74));
      v16 = 64LL;
      v4 = v69;
      *((_QWORD *)this + 74) = v68;
      *((_DWORD *)this + 145) = v40;
    }
    goto LABEL_146;
  }
LABEL_76:
  *((_DWORD *)this + 150) = 0;
  *((_DWORD *)this + 146) = 0;
LABEL_30:
  v25 = *((_DWORD *)this + 138);
  if ( v25 != 10 )
  {
    *((_DWORD *)this + 138) = v25 + 1;
    goto LABEL_32;
  }
  v41 = *((_DWORD *)this + 142);
  v42 = 64LL;
  if ( v41 > 0x40 )
    v42 = v41;
  if ( (unsigned __int64)(3 * v42) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
LABEL_151:
    v17 = 0xFFFFFFFFLL;
    goto LABEL_81;
  }
  if ( (unsigned int)(3 * v42) <= *((_DWORD *)this + 137) )
  {
    v68 = 0LL;
    v58 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v42, (unsigned __int64)&v68, v63);
    if ( v58 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0xF3u);
    }
    else
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 70));
      v16 = 64LL;
      v4 = v69;
      *((_QWORD *)this + 70) = v68;
      *((_DWORD *)this + 137) = v42;
    }
    goto LABEL_151;
  }
LABEL_81:
  *((_DWORD *)this + 142) = 0;
  *((_DWORD *)this + 138) = 0;
LABEL_32:
  v26 = *((_DWORD *)this + 130);
  if ( v26 == 10 )
  {
    v43 = *((_DWORD *)this + 134);
    v44 = 64LL;
    if ( v43 > 0x40 )
      v44 = v43;
    if ( (unsigned __int64)(3 * v44) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else
    {
      if ( (unsigned int)(3 * v44) > *((_DWORD *)this + 129) )
      {
LABEL_86:
        *((_DWORD *)this + 134) = 0;
        *((_DWORD *)this + 130) = 0;
        goto LABEL_34;
      }
      v68 = 0LL;
      v59 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v44, (unsigned __int64)&v68, v63);
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0xF3u);
      }
      else
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 66));
        v16 = 64LL;
        v4 = v69;
        *((_QWORD *)this + 66) = v68;
        *((_DWORD *)this + 129) = v44;
      }
    }
    v17 = 0xFFFFFFFFLL;
    goto LABEL_86;
  }
  *((_DWORD *)this + 130) = v26 + 1;
LABEL_34:
  v27 = *((_DWORD *)this + 122);
  if ( v27 == 10 )
  {
    v45 = *((_DWORD *)this + 126);
    v46 = 64LL;
    if ( v45 > 0x40 )
      v46 = v45;
    if ( (unsigned __int64)(3 * v46) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v46) <= *((_DWORD *)this + 121) )
    {
      v68 = 0LL;
      v60 = WPF::HrMalloc((WPF *)v13, 4LL, (unsigned int)v46, (unsigned __int64)&v68, v63);
      if ( v60 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 62));
        v16 = 64LL;
        v4 = v69;
        *((_QWORD *)this + 62) = v68;
        *((_DWORD *)this + 121) = v46;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0xF3u);
      }
    }
    *((_DWORD *)this + 126) = 0;
    *((_DWORD *)this + 122) = 0;
  }
  else
  {
    *((_DWORD *)this + 122) = v27 + 1;
  }
  CWatermarkStack<CBaseMatrix,8,2,8>::Optimize((char *)this + 448, v17);
  CWatermarkStack<CBaseMatrix,8,2,8>::Optimize((char *)this + 416, v28);
  v30 = *((_DWORD *)this + 98);
  if ( v30 == 10 )
  {
    v47 = *((_DWORD *)this + 102);
    v48 = 64LL;
    if ( v47 > 0x40 )
      v48 = v47;
    if ( (unsigned __int64)(3 * v48) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v48) <= *((_DWORD *)this + 97) )
    {
      v68 = 0LL;
      v61 = WPF::HrMalloc(v29, 8LL, (unsigned int)v48, (unsigned __int64)&v68, v63);
      if ( v61 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 50));
        v16 = 64LL;
        v4 = v69;
        *((_QWORD *)this + 50) = v68;
        *((_DWORD *)this + 97) = v48;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v61, 0xF3u);
      }
    }
    *((_DWORD *)this + 102) = 0;
    *((_DWORD *)this + 98) = 0;
  }
  else
  {
    *((_DWORD *)this + 98) = v30 + 1;
  }
  v31 = *((_DWORD *)this + 90);
  if ( v31 == 10 )
  {
    v49 = *((_DWORD *)this + 94);
    if ( v49 > 0x40 )
      v16 = v49;
    LODWORD(v68) = v16;
    if ( (unsigned __int64)(3 * v16) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v16) <= *((_DWORD *)this + 89) )
    {
      v70 = 0LL;
      v62 = WPF::HrMalloc(v29, 8LL, (unsigned int)v16, (unsigned __int64)&v70, v63);
      if ( v62 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 46));
        v4 = v69;
        *((_QWORD *)this + 46) = v70;
        *((_DWORD *)this + 89) = (_DWORD)v68;
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
    *((_DWORD *)this + 90) = v31 + 1;
  }
LABEL_40:
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
