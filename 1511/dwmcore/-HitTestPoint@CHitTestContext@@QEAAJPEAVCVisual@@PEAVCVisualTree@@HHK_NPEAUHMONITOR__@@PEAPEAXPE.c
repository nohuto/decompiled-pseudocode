/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180001520 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x180005024 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@K@Z.c)
 *     ?GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z @ 0x180005E14 (-GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x1800061B4 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x18000631C (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180007F10 (-EnsureParentWorldTransforms@CHitTestContext@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180009024 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x180009044 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800094A4 (-GetWorldTransform@CVisual@@IEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180009660 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004DB1C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004DB5C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x1800A7828 (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     Template_xqq @ 0x18010671C (Template_xqq.c)
 */

__int64 __fastcall CHitTestContext::HitTestPoint(
        CHitTestContext *this,
        struct CVisual *a2,
        struct CVisualTree *a3,
        int a4,
        int a5,
        unsigned int a6,
        bool a7,
        HMONITOR a8,
        void **a9,
        unsigned int *a10,
        void **a11,
        struct _LUID *a12,
        struct CMILMatrix *a13,
        unsigned int *a14,
        bool *a15,
        unsigned int *a16)
{
  char v16; // r13
  struct CVisual *v17; // rbx
  int v18; // esi
  unsigned int v21; // r14d
  unsigned int v22; // ecx
  CHitTestContext *v23; // rcx
  CVisual **v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // r13
  bool v28; // r8
  CVisual *v29; // r14
  CInteraction *v30; // rsi
  unsigned int v31; // esi
  CVisual *v32; // rbx
  void *v33; // rax
  int v34; // eax
  CHitTestContext **InputLuid; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int InputType; // eax
  __int64 v40; // r8
  unsigned int Endpoint; // eax
  void *InputHandle; // rax
  bool v44; // [rsp+28h] [rbp-81h]
  unsigned int v45; // [rsp+38h] [rbp-71h]
  CInteraction *v46; // [rsp+40h] [rbp-69h]
  unsigned int v47; // [rsp+48h] [rbp-61h]
  __int128 v48; // [rsp+58h] [rbp-51h] BYREF
  __int128 v49; // [rsp+68h] [rbp-41h]
  __int128 v50; // [rsp+78h] [rbp-31h]
  __int128 v51; // [rsp+88h] [rbp-21h]
  __int64 v52; // [rsp+98h] [rbp-11h]
  _DWORD *v53; // [rsp+A0h] [rbp-9h]
  unsigned int v54; // [rsp+F8h] [rbp+4Fh]
  int v55; // [rsp+100h] [rbp+57h]
  bool v58; // [rsp+128h] [rbp+7Fh]

  v55 = (int)a2;
  v16 = a5;
  v17 = a2;
  v18 = a4;
  v45 = 0;
  v21 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq((_DWORD)this, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start, (_DWORD)a2, a4, a5);
  *(_QWORD *)((char *)&v51 + 4) = 0LL;
  LODWORD(v51) = 0;
  v22 = *a10;
  HIDWORD(v50) = 0;
  *(_QWORD *)&v50 = 0LL;
  *((_QWORD *)&v49 + 1) = 0LL;
  LODWORD(v49) = 0;
  *((_QWORD *)&v48 + 1) = 0LL;
  DWORD1(v48) = 0;
  *a10 = 0;
  *a11 = 0LL;
  *(_QWORD *)((char *)a13 + 52) = 0LL;
  *(_QWORD *)((char *)a13 + 44) = 0LL;
  *((_QWORD *)a13 + 4) = 0LL;
  *a14 = 0;
  *((_QWORD *)a13 + 3) = 0LL;
  *(_QWORD *)((char *)a13 + 12) = 0LL;
  *(_QWORD *)((char *)a13 + 4) = 0LL;
  *a15 = 0;
  v54 = 0;
  v47 = v22;
  *a16 = 0;
  v46 = 0LL;
  *a12 = 0LL;
  *((_DWORD *)a13 + 15) = 1065353216;
  *((_DWORD *)a13 + 10) = 1065353216;
  *((_DWORD *)a13 + 5) = 1065353216;
  *(_DWORD *)a13 = 1065353216;
  HIDWORD(v51) = 1065353216;
  DWORD2(v50) = 1065353216;
  DWORD1(v49) = 1065353216;
  LODWORD(v48) = 1065353216;
  *((_DWORD *)this + 26) = a6;
  *((_BYTE *)this + 108) = a7;
  *((_QWORD *)this + 14) = 0LL;
  *((float *)this + 24) = (float)v18;
  *((float *)this + 25) = (float)a5;
  v53 = (_DWORD *)((char *)this + 120);
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push(
    (unsigned int *)this + 30,
    CRenderState::sc_DefaultBackfaceVisibility);
  if ( !CVisualTree::IsInTree(a3, v17) )
    goto LABEL_28;
  if ( (*((_BYTE *)CVisual::FindTreeData(v17, a3) + 264) & 2) != 0 )
  {
    v25 = CHitTestContext::EnsureParentWorldTransforms(v23, v24, v17);
    v21 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180179C10, 1u, v25, 0x167u);
      goto LABEL_28;
    }
    v26 = CVisualTreeIterator::WalkSubtree<CHitTestContext>((__int64)this + 16, a3, (__int64)v17, this, v44);
    v45 = v26;
    v21 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_180179C10, 1u, v26, 0x16Eu);
      goto LABEL_28;
    }
  }
  v27 = *((_QWORD *)this + 14);
  v28 = 0;
  v58 = 0;
  if ( !v27 )
    goto LABEL_27;
  v52 = *((_QWORD *)v17 + 8);
  if ( v27 == v52 )
    goto LABEL_27;
  v29 = 0LL;
  do
  {
    if ( !v29 && CVisual::GetInputHandle((CVisual *)v27) )
    {
      if ( (!*((_DWORD *)this + 26) || (unsigned int)CVisual::GetInputQueueType(v27))
        && (*((_DWORD *)this + 26) != 4
         || (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v27 + 400) + 80LL))(
              *(_QWORD *)(v27 + 400),
              4LL,
              *((unsigned __int8 *)this + 108))) )
      {
        v29 = (CVisual *)v27;
        CVisual::GetWorldTransform(v27, a3, 4LL, &v48, 0LL, 0LL);
      }
      v28 = v58;
    }
    v30 = *(CInteraction **)(v27 + 400);
    if ( !v46 && v30 )
    {
      if ( *((_DWORD *)this + 26) != 4
        || (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v30 + 80LL))(
             *(_QWORD *)(v27 + 400),
             4LL,
             *((unsigned __int8 *)this + 108)) )
      {
        v46 = v30;
      }
      v28 = v58;
    }
    if ( !v28 )
    {
      if ( !v30 )
        goto LABEL_16;
      v28 = (*(unsigned int (__fastcall **)(CInteraction *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v30 + 80LL))(
              v30,
              *((unsigned int *)this + 26),
              *((unsigned __int8 *)this + 108),
              0LL) != 0;
      v58 = v28;
    }
    if ( !v30 || (InputHandle = CInteraction::GetInputHandle(v30)) == 0LL )
    {
LABEL_16:
      v31 = v54;
      goto LABEL_17;
    }
    if ( v54 < v47 && a9 )
      a9[v54] = InputHandle;
    v31 = ++v54;
LABEL_17:
    v27 = *(_QWORD *)(v27 + 64);
  }
  while ( v27 != v52 );
  v32 = v29;
  v21 = v45;
  if ( v32 )
  {
    if ( v46 )
    {
      if ( v28 )
      {
        v33 = CVisual::GetInputHandle(v32);
        if ( v33 )
        {
          v34 = NtDuplicateCompositionInputSink(v33, a11);
          if ( v34 < 0 )
          {
            v21 = v34 | 0x10000000;
            MilInstrumentationCheckHR(0x14u, &dword_180179C10, 1u, v34 | 0x10000000, 0x1B7u);
          }
          else
          {
            InputLuid = (CHitTestContext **)CVisual::GetInputLuid(v32);
            v36 = v49;
            v23 = *InputLuid;
            *(_OWORD *)a13 = v48;
            v37 = v50;
            *((_OWORD *)a13 + 1) = v36;
            v38 = v51;
            *a12 = (struct _LUID)v23;
            LODWORD(v23) = (_DWORD)a14;
            *((_OWORD *)a13 + 2) = v37;
            *((_OWORD *)a13 + 3) = v38;
            *a15 = 1;
            *a14 = *((_DWORD *)v46 + 218);
            *((_QWORD *)v46 + 111) = a8;
            if ( *((_QWORD *)v32 + 50) )
            {
              InputType = CInputSinkStruct::GetInputType(*((_DWORD *)this + 26));
              Endpoint = CInteraction::GetEndpoint(v40, InputType);
              LODWORD(v23) = (_DWORD)a16;
              *a16 = Endpoint;
            }
            *a10 = v31;
          }
        }
      }
    }
  }
  v18 = a4;
  LODWORD(v17) = v55;
LABEL_27:
  v16 = a5;
LABEL_28:
  *v53 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq((_DWORD)v23, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop, (_DWORD)v17, v18, v16);
  return v21;
}
