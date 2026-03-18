/*
 * XREFs of ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x18000B398
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18000A1B0 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ??$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18000A73C (--$WalkSubtree@VCHitTestContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTes.c)
 *     ?PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000B938 (-PopulateWorldTransform@CHitTestContext@@AEAAJPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18000B9D4 (-GetInputQueueType@CVisual@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x18000BA6C (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ?GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z @ 0x18000BC34 (-GetEndpoint@CInteraction@@QEBAIW4CompositionInputType@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18000BF08 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?GetInputType@CInputSinkStruct@@SA?AW4CompositionInputType@@K@Z @ 0x18000CF70 (-GetInputType@CInputSinkStruct@@SA-AW4CompositionInputType@@K@Z.c)
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x18000CF9C (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180035B7C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInputHandle@CInteraction@@QEBAPEAXXZ @ 0x18005A05C (-GetInputHandle@CInteraction@@QEBAPEAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xqq @ 0x1800EACFC (Template_xqq.c)
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
  unsigned int v21; // r15d
  unsigned int v22; // ecx
  int v23; // ecx
  const struct CVisualTree *v24; // rdx
  int v25; // eax
  int v26; // eax
  __int64 v27; // r13
  CVisual *v28; // r15
  CInteraction *v29; // rdi
  CInteraction *v30; // rsi
  unsigned int v31; // esi
  CVisual *v32; // rbx
  void *v33; // rax
  int v34; // eax
  struct _LUID *InputLuid; // rax
  __int128 v36; // xmm1
  struct _LUID v37; // rcx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  unsigned int InputType; // eax
  __int64 v41; // r8
  unsigned int Endpoint; // eax
  void *InputHandle; // rax
  unsigned int v45; // r8d
  bool v46; // [rsp+28h] [rbp-81h]
  unsigned int v47; // [rsp+38h] [rbp-71h]
  CInteraction *v48; // [rsp+40h] [rbp-69h]
  unsigned int v49; // [rsp+50h] [rbp-59h]
  __int128 v50; // [rsp+58h] [rbp-51h] BYREF
  __int128 v51; // [rsp+68h] [rbp-41h]
  __int128 v52; // [rsp+78h] [rbp-31h]
  __int128 v53; // [rsp+88h] [rbp-21h]
  __int64 v54; // [rsp+98h] [rbp-11h]
  unsigned int v55; // [rsp+F8h] [rbp+4Fh]
  int v56; // [rsp+100h] [rbp+57h]

  v56 = (int)a2;
  v16 = a5;
  v17 = a2;
  v18 = a4;
  v47 = 0;
  v21 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq((_DWORD)this, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start, (_DWORD)a2, a4, a5);
  *(_QWORD *)((char *)&v53 + 4) = 0LL;
  LODWORD(v53) = 0;
  v22 = *a10;
  HIDWORD(v52) = 0;
  *(_QWORD *)&v52 = 0LL;
  *((_QWORD *)&v51 + 1) = 0LL;
  LODWORD(v51) = 0;
  *((_QWORD *)&v50 + 1) = 0LL;
  DWORD1(v50) = 0;
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
  v55 = 0;
  v49 = v22;
  *a16 = 0;
  v48 = 0LL;
  *a12 = 0LL;
  *((_DWORD *)a13 + 15) = 1065353216;
  *((_DWORD *)a13 + 10) = 1065353216;
  *((_DWORD *)a13 + 5) = 1065353216;
  *(_DWORD *)a13 = 1065353216;
  HIDWORD(v53) = 1065353216;
  DWORD2(v52) = 1065353216;
  DWORD1(v51) = 1065353216;
  LODWORD(v50) = 1065353216;
  *((_DWORD *)this + 26) = a6;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 108) = a7;
  *((float *)this + 24) = (float)v18;
  *((float *)this + 25) = (float)a5;
  CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
    (char *)this + 184,
    &CRenderState::sc_DefaultBackfaceVisibility);
  if ( !CVisualTree::IsInTree(a3, v17) )
    goto LABEL_25;
  if ( (*((_BYTE *)CVisual::FindTreeData(v17, a3) + 264) & 2) != 0 )
  {
    v25 = CHitTestContext::PopulateWorldTransform(this, v24, v17);
    v21 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016B85C, 1u, v25, 0x16Du);
      goto LABEL_25;
    }
    v26 = CGraphIterator::WalkSubtree<CHitTestContext>(
            (CHitTestContext *)((char *)this + 16),
            a3,
            (__int64)v17,
            this,
            v46);
    v47 = v26;
    v21 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016B85C, 1u, v26, 0x174u);
      goto LABEL_25;
    }
  }
  v27 = *((_QWORD *)this + 14);
  if ( !v27 )
    goto LABEL_24;
  v54 = *((_QWORD *)v17 + 10);
  if ( v27 == v54 )
    goto LABEL_24;
  v28 = 0LL;
  do
  {
    if ( !v28 )
    {
      if ( CVisual::GetInputHandle((CVisual *)v27) )
      {
        v45 = *((_DWORD *)this + 26);
        if ( (!v45 || (unsigned int)CVisual::GetInputQueueType(v27, v45))
          && (v45 != 4
           || (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v27 + 416) + 80LL))(
                *(_QWORD *)(v27 + 416),
                4LL,
                *((unsigned __int8 *)this + 108))) )
        {
          v28 = (CVisual *)v27;
          CVisual::GetWorldTransform(v27 + 64, a3, 4LL, &v50, 0LL, 0LL);
        }
      }
    }
    v29 = v48;
    v30 = *(CInteraction **)(v27 + 416);
    if ( !v48 )
    {
      if ( !v30 )
        goto LABEL_14;
      if ( *((_DWORD *)this + 26) == 4
        && !(*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v30 + 80LL))(
              *(_QWORD *)(v27 + 416),
              4LL,
              *((unsigned __int8 *)this + 108)) )
      {
        v29 = 0LL;
      }
      else
      {
        v29 = v30;
        v48 = v30;
      }
    }
    if ( !v30 || (InputHandle = CInteraction::GetInputHandle(v30)) == 0LL )
    {
LABEL_14:
      v31 = v55;
      goto LABEL_15;
    }
    if ( v55 < v49 && a9 )
      a9[v55] = InputHandle;
    v31 = ++v55;
LABEL_15:
    v27 = *(_QWORD *)(v27 + 80);
  }
  while ( v27 != v54 );
  v32 = v28;
  v21 = v47;
  if ( v32 )
  {
    if ( v29 )
    {
      v33 = CVisual::GetInputHandle(v32);
      if ( v33 )
      {
        v34 = NtDuplicateCompositionInputSink(v33, a11);
        if ( v34 < 0 )
        {
          v21 = v34 | 0x10000000;
          MilInstrumentationCheckHR(0x14u, &dword_18016B85C, 1u, v34 | 0x10000000, 0x1B2u);
        }
        else
        {
          InputLuid = (struct _LUID *)CVisual::GetInputLuid(v32);
          v36 = v51;
          v37 = *InputLuid;
          *(_OWORD *)a13 = v50;
          v38 = v52;
          *((_OWORD *)a13 + 1) = v36;
          v39 = v53;
          *a12 = v37;
          v23 = (int)a14;
          *((_OWORD *)a13 + 2) = v38;
          *((_OWORD *)a13 + 3) = v39;
          *a15 = 1;
          *a14 = *((_DWORD *)v29 + 152);
          *((_QWORD *)v29 + 78) = a8;
          if ( *((_QWORD *)v32 + 52) )
          {
            InputType = CInputSinkStruct::GetInputType(*((unsigned int *)this + 26));
            Endpoint = CInteraction::GetEndpoint(v41, InputType);
            v23 = (int)a16;
            *a16 = Endpoint;
          }
          *a10 = v31;
        }
      }
    }
  }
  v18 = a4;
  LODWORD(v17) = v56;
LABEL_24:
  v16 = a5;
LABEL_25:
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 46) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_xqq(v23, (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop, (_DWORD)v17, v18, v16);
  return v21;
}
