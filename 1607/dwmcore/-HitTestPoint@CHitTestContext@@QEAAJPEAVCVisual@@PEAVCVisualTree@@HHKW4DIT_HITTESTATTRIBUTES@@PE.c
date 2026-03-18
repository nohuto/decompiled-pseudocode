/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000AF70
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180009E90 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x180009098 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@K@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A804 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000A934 (-EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18000BEC8 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18000C0E0 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18000C284 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x18000CA64 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z @ 0x18000D974 (-GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004EF94 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004F9CC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800A3324 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A4E3C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xqq @ 0x18011CBCC (Template_xqq.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        __int64 a1,
        const struct CVisual *a2,
        CVisualTree *a3,
        int a4,
        int a5,
        int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int *a10,
        _QWORD *a11,
        _QWORD *a12,
        __int64 a13,
        _DWORD *a14,
        _BYTE *a15,
        _DWORD *a16)
{
  char v16; // r14
  const struct CVisual *v17; // r15
  int v18; // esi
  unsigned int v21; // edi
  unsigned int v22; // ecx
  CHitTestContext *v23; // rcx
  int v24; // eax
  int v25; // eax
  const struct CVisual *v26; // rsi
  bool v27; // r12
  CInteraction *v28; // r14
  int v29; // r14d
  CVisual *v30; // rsi
  bool v31; // zf
  void *v32; // rax
  int v33; // eax
  _QWORD *InputLuid; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  unsigned int InputType; // eax
  __int64 v40; // r10
  int Endpoint; // eax
  void *InputHandle; // rax
  struct CInteraction *InteractionInternal; // rax
  bool v45; // [rsp+28h] [rbp-89h]
  unsigned int v46; // [rsp+38h] [rbp-79h]
  unsigned int v47; // [rsp+3Ch] [rbp-75h]
  CInteraction *v48; // [rsp+48h] [rbp-69h]
  const struct CVisual *v49; // [rsp+50h] [rbp-61h]
  __int128 v50; // [rsp+68h] [rbp-49h] BYREF
  __int128 v51; // [rsp+78h] [rbp-39h]
  __int128 v52; // [rsp+88h] [rbp-29h]
  __int128 v53; // [rsp+98h] [rbp-19h]
  DWORD v54; // [rsp+A8h] [rbp-9h]
  unsigned int v55; // [rsp+F8h] [rbp+47h]
  int v56; // [rsp+100h] [rbp+4Fh]
  bool v58; // [rsp+128h] [rbp+77h]

  v56 = (int)a2;
  v16 = a5;
  v17 = a2;
  v18 = a4;
  v46 = 0;
  v21 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(a1, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start, (_DWORD)a2, a4, a5);
  v55 = 0;
  v22 = *a10;
  *a10 = 0;
  v47 = v22;
  v48 = 0LL;
  *a11 = 0LL;
  *a14 = 0;
  *a15 = 0;
  *a16 = 0;
  *a12 = 0LL;
  *(_OWORD *)a13 = _xmm;
  *(_WORD *)(a13 + 64) = 32085;
  *(_OWORD *)(a13 + 16) = _xmm;
  *(_OWORD *)(a13 + 32) = _xmm;
  *(_OWORD *)(a13 + 48) = _xmm;
  *(_QWORD *)(a1 + 112) = 0LL;
  v50 = CMILMatrix::Identity;
  v51 = xmmword_1801EAD20;
  v52 = xmmword_1801EAD30;
  v53 = xmmword_1801EAD40;
  v54 = dword_1801EAD50;
  *(_DWORD *)(a1 + 104) = a6;
  *(_DWORD *)(a1 + 108) = 0;
  *(float *)(a1 + 96) = (float)v18;
  *(float *)(a1 + 100) = (float)a5;
  if ( (a7 & 1) != 0 )
    *(_DWORD *)(a1 + 108) |= 1u;
  if ( (a7 & 2) != 0 )
    *(_DWORD *)(a1 + 108) |= 2u;
  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push(
    a1 + 120,
    &CRenderState::sc_DefaultBackfaceVisibility);
  if ( !CVisualTree::IsInTree(a3, v17) )
    goto LABEL_32;
  if ( (*((_BYTE *)CVisual::FindTreeData(v17, a3) + 224) & 2) != 0 )
  {
    v24 = CHitTestContext::EnsureParentWorldTransforms(v23, (struct CVisual **)a3, v17);
    v21 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B9C14, 1u, v24, 0x171u);
      goto LABEL_32;
    }
    v25 = CVisualTreeIterator::WalkSubtree<CHitTestContext>(a1 + 16, a3, (__int64)v17, (CHitTestContext *)a1, v45);
    v46 = v25;
    v21 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801B9C14, 1u, v25, 0x178u);
      goto LABEL_32;
    }
  }
  v26 = *(const struct CVisual **)(a1 + 112);
  v27 = 0;
  if ( !v26 )
    goto LABEL_31;
  v49 = (const struct CVisual *)*((_QWORD *)v17 + 18);
  if ( v26 == v49 )
    goto LABEL_31;
  v17 = 0LL;
  v58 = *(_DWORD *)(a1 + 104) == 0;
  do
  {
    if ( !v17 )
    {
      if ( CVisual::GetInputHandle(v26) )
      {
        if ( v58
          || (unsigned int)CVisual::GetInputQueueType(v26, *(unsigned int *)(a1 + 104))
          && (*(_DWORD *)(a1 + 104) != 4
           || (InteractionInternal = CVisual::GetInteractionInternal(v26),
               (*(unsigned int (__fastcall **)(struct CInteraction *, __int64, _QWORD))(*(_QWORD *)InteractionInternal
                                                                                      + 80LL))(
                 InteractionInternal,
                 4LL,
                 *(unsigned int *)(a1 + 108)))) )
        {
          v17 = v26;
          CVisual::GetWorldTransform(v26, a3, 4LL, &v50, 0LL, 0LL);
        }
      }
    }
    v28 = CVisual::GetInteractionInternal(v26);
    if ( !v48
      && CVisual::GetInteractionInternal(v26)
      && (v58
       || *(_DWORD *)(a1 + 104) != 4
       || (*(unsigned int (__fastcall **)(CInteraction *, __int64, _QWORD))(*(_QWORD *)v28 + 80LL))(
            v28,
            4LL,
            *(unsigned int *)(a1 + 108))) )
    {
      v48 = v28;
    }
    if ( !v27 )
    {
      if ( !v28 )
        goto LABEL_20;
      v27 = v58
         || (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v28 + 80LL))(
              v28,
              *(unsigned int *)(a1 + 104),
              *(unsigned int *)(a1 + 108),
              0LL);
    }
    if ( !v28 || (InputHandle = CInteraction::GetInputHandle(v28)) == 0LL )
    {
LABEL_20:
      v29 = v55;
      goto LABEL_21;
    }
    if ( v55 < v47 && a9 )
      *(_QWORD *)(a9 + 8LL * v55) = InputHandle;
    v29 = ++v55;
LABEL_21:
    v26 = (const struct CVisual *)*((_QWORD *)v26 + 18);
  }
  while ( v26 != v49 );
  v21 = v46;
  v30 = v17;
  v31 = v17 == 0LL;
  LODWORD(v17) = v56;
  if ( !v31 )
  {
    if ( v48 )
    {
      if ( v27 )
      {
        v32 = CVisual::GetInputHandle(v30);
        if ( v32 )
        {
          v33 = NtDuplicateCompositionInputSink(v32, a11);
          if ( v33 < 0 )
          {
            v21 = v33 | 0x10000000;
            MilInstrumentationCheckHR(0x14u, &dword_1801B9C14, 1u, v33 | 0x10000000, 0x1C7u);
          }
          else
          {
            InputLuid = (_QWORD *)CVisual::GetInputLuid(v30);
            v35 = v50;
            v36 = v51;
            *a12 = *InputLuid;
            LODWORD(InputLuid) = v54;
            *(_OWORD *)a13 = v35;
            v37 = v52;
            *(_OWORD *)(a13 + 16) = v36;
            v38 = v53;
            *(_OWORD *)(a13 + 32) = v37;
            *(_OWORD *)(a13 + 48) = v38;
            *(_DWORD *)(a13 + 64) = (_DWORD)InputLuid;
            *a15 = 1;
            *a14 = *((_DWORD *)v48 + 336);
            *((_QWORD *)v48 + 170) = a8;
            if ( CVisual::GetInteractionInternal(v30) )
            {
              InputType = CInputSinkStruct::GetInputType(*(_DWORD *)(a1 + 104));
              Endpoint = CInteraction::GetEndpoint(v40, InputType);
              LODWORD(v23) = (_DWORD)a16;
              *a16 = Endpoint;
            }
            *a10 = v29;
          }
        }
      }
    }
  }
  v16 = a5;
LABEL_31:
  v18 = a4;
LABEL_32:
  *(_DWORD *)(a1 + 120) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq((_DWORD)v23, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop, (_DWORD)v17, v18, v16);
  return v21;
}
