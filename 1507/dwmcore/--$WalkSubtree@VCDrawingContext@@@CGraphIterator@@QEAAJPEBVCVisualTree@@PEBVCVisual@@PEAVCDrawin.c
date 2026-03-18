/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x18001B298 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopLayer@CDrawingContext@@AEAAJXZ @ 0x180028020 (-PopLayer@CDrawingContext@@AEAAJXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18002A1D4 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800597D4 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059FD0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z @ 0x180067ED4 (-PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRectangleShape@@UEAAPEAXI@Z @ 0x180078C90 (--_ECRectangleShape@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800F4C14 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CGraphIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rdi
  struct CVisualTree *v6; // r12
  __int64 v8; // rsi
  __int64 *Value; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // r13d
  __int64 v14; // rbx
  __int64 v15; // r15
  _QWORD *v16; // r15
  int (*v17)(CVisual *__hidden, const struct CVisualTree *); // rbx
  _QWORD *v18; // rax
  __int64 v19; // r15
  int v20; // eax
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int (__fastcall *v23)(CVisual *__hidden); // rdi
  __int64 v24; // r12
  void *v25; // rbx
  __int64 v26; // rax
  WPF *v27; // rcx
  void (__fastcall *v28)(WPF::ProcessHeapImpl *, void *); // rdi
  _QWORD *v29; // rbx
  unsigned __int64 v30; // rsi
  struct IGraphNode *(__fastcall *v31)(CVisual *__hidden, unsigned int); // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r15
  unsigned __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned int (__fastcall *v42)(CVisual *__hidden); // rdi
  __int64 v43; // rax
  int v44; // edx
  int v45; // eax
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  int v50; // esi
  __int64 v51; // rsi
  _QWORD *v52; // rbx
  struct IGraphNode *(__fastcall *v53)(CVisual *__hidden, unsigned int); // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // r15
  unsigned __int64 v57; // r15
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  CRectangleShape *v62; // r15
  void *(__fastcall *v63)(CRectangleShape *__hidden, unsigned int); // r12
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  CPtrArrayBase *v69; // rbx
  __int64 v70; // rdx
  int v71; // eax
  int v73; // eax
  _QWORD *v74; // rcx
  CVisualTreeData *v75; // rbx
  LPVOID (__fastcall *v76)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  CTreeData *v77; // rax
  _QWORD *v78; // rcx
  void (__fastcall *v79)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rdi
  unsigned int v80; // r13d
  int v81; // eax
  unsigned __int64 v82; // rax
  void *v83; // rsi
  __int64 v84; // rdx
  __int64 *v85; // rax
  DWORD v86; // ecx
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // r9d
  CPtrArrayBase *v91; // rax
  DWORD v92; // ecx
  int v93; // eax
  void **v94; // [rsp+20h] [rbp-81h]
  bool v95; // [rsp+30h] [rbp-71h] BYREF
  __int64 v96; // [rsp+38h] [rbp-69h]
  __int64 v97; // [rsp+40h] [rbp-61h]
  unsigned __int64 v98; // [rsp+50h] [rbp-51h] BYREF
  void *v99[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v100; // [rsp+70h] [rbp-31h]
  __int128 v101; // [rsp+78h] [rbp-29h]
  __int128 v102; // [rsp+88h] [rbp-19h]
  __int128 v103; // [rsp+98h] [rbp-9h] BYREF

  v97 = a4;
  v98 = a2;
  v5 = a4;
  v6 = (struct CVisualTree *)a2;
  if ( a3 )
    v8 = a3 + 64;
  else
    v8 = 0LL;
  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v96 = 0LL;
  Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v85 = (__int64 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       8LL);
    Value = v85;
    if ( !v85 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x173u);
      v5 = v97;
LABEL_169:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x43u);
      v14 = 0LL;
      goto LABEL_9;
    }
    v86 = CThreadContext::s_dwTlsIndex;
    *v85 = 0LL;
    TlsSetValue(v86, v85);
    v5 = v97;
  }
  if ( (*Value & 2) != 0 )
    v10 = *(_QWORD *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v10 = *Value & 1;
  v11 = 0LL;
  if ( v10 )
  {
    while ( v8 != CPtrArrayBase::operator[](Value, v11) )
    {
      v11 = v84 + 1;
      if ( v11 >= v10 )
        goto LABEL_7;
    }
    v13 = -2147467260;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x17Eu);
    goto LABEL_169;
  }
LABEL_7:
  v12 = CPtrArrayBase::InsertAt((CPtrArrayBase *)Value, v8, v10);
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x183u);
    goto LABEL_169;
  }
  v14 = v8;
  *(_DWORD *)(a1 + 4) = 0;
  v96 = v8;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
LABEL_9:
  v15 = 64LL;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x59u);
    goto LABEL_130;
  }
  v16 = *(_QWORD **)(a1 + 8);
  while ( 1 )
  {
LABEL_11:
    v17 = *(int (**)(CVisual *__hidden, const struct CVisualTree *))(*v16 + 16LL);
    if ( v17 != CVisual::VisitNode )
    {
      v13 = ((__int64 (__fastcall *)(_QWORD *, struct CVisualTree *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v17)(
              v16,
              v6,
              WPF::ProcessHeapImpl::Alloc);
      goto LABEL_15;
    }
    v13 = 0;
    if ( *((_BYTE *)v6 + 32) )
    {
      v18 = v16 + 48;
      goto LABEL_14;
    }
    v74 = (_QWORD *)v16[46];
    if ( v74 != v16 + 46 )
    {
      while ( 1 )
      {
        v18 = v74 - 33;
        if ( (struct CVisualTree *)v74[4] == v6 )
          break;
        v74 = (_QWORD *)*v74;
        if ( v74 == v16 + 46 )
          goto LABEL_145;
      }
LABEL_14:
      if ( v18 )
        goto LABEL_15;
    }
LABEL_145:
    v75 = (CVisualTreeData *)v16[82];
    if ( v75 )
    {
      v16[82] = 0LL;
    }
    else
    {
      v76 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v76 == WPF::ProcessHeapImpl::Alloc )
        v77 = (CTreeData *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x130uLL);
      else
        v77 = (CTreeData *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v76)(
                             WPF::g_pProcessHeap,
                             304LL,
                             WPF::ProcessHeapImpl::Alloc);
      v75 = v77;
      if ( !v77 )
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF26u);
        v5 = v97;
        goto LABEL_15;
      }
      CTreeData::CTreeData(v77);
      v78[37] = 0LL;
      *v78 = &CVisualTreeData::`vftable';
    }
    v79 = *(void (__fastcall **)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))(*(_QWORD *)v75 + 8LL);
    if ( v79 == CVisualTreeData::Initialize )
      CVisualTreeData::Initialize(v75, v6, (struct CVisual *)(v16 - 8));
    else
      v79(v75, v6, (struct CVisual *)(v16 - 8));
    v5 = v97;
LABEL_15:
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x67u);
      goto LABEL_213;
    }
    v19 = v5 + 48;
    v100 = v5 + 48;
    v20 = CDrawingContext::PreSubgraph((CDrawingContext *)(v5 + 48), v6, &v95);
    v13 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x69u);
      v14 = v96;
      v15 = 64LL;
      goto LABEL_130;
    }
    if ( !v95 )
      break;
    v22 = *(_QWORD *)(a1 + 8);
    v16 = 0LL;
    v23 = **(unsigned int (__fastcall ***)(CVisual *__hidden))v22;
    if ( v23 == CVisual::GetChildrenCount )
    {
      v24 = *(_QWORD *)(v22 + 8);
      if ( (v24 & 2) != 0 )
        v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v24) = v24 & 1;
    }
    else
    {
      LODWORD(v24) = v23(*(CVisual **)(a1 + 8));
    }
    if ( !(_DWORD)v24 )
    {
      v13 = 1;
      goto LABEL_44;
    }
    v25 = 0LL;
    v26 = *(unsigned int *)(a1 + 36);
    v13 = 0;
    *(_QWORD *)&v101 = *(_QWORD *)(a1 + 16);
    v27 = (WPF *)*(unsigned int *)(a1 + 24);
    DWORD2(v101) = *(_DWORD *)(a1 + 24);
    v99[0] = 0LL;
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v26 )
      goto LABEL_23;
    v80 = 2 * v26;
    if ( (unsigned __int64)(2 * v26) > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    }
    else
    {
      if ( v80 <= 0x40 )
        v80 = 64;
      v81 = WPF::HrMalloc(v27, 16LL, v80, (unsigned __int64)v99, v94);
      if ( v81 < 0 )
      {
        v13 = v81;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v81, 0x54u);
      }
      else
      {
        v82 = 16LL * *(unsigned int *)(a1 + 32);
        if ( v82 <= 0xFFFFFFFF )
        {
          v83 = v99[0];
          memcpy_0(v99[0], *(const void **)(a1 + 48), (unsigned int)v82);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(a1 + 48));
          v25 = 0LL;
          *(_DWORD *)(a1 + 36) = v80;
          v13 = 0;
          *(_QWORD *)(a1 + 48) = v83;
LABEL_23:
          *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v101;
          v21 = *(unsigned int *)(a1 + 32);
          if ( *(_DWORD *)(a1 + 56) > (unsigned int)v21 )
            v21 = *(unsigned int *)(a1 + 56);
          *(_DWORD *)(a1 + 56) = v21;
          goto LABEL_26;
        }
        v13 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      }
      v25 = v99[0];
    }
LABEL_26:
    v28 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v28 == WPF::ProcessHeapImpl::Free )
    {
      if ( v25 )
        HeapFree(g_hProcessHeap, 0, v25);
    }
    else
    {
      v28(WPF::g_pProcessHeap, v25);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x88u);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 28) == 1 )
        *(_DWORD *)(a1 + 24) = 0;
      else
        *(_DWORD *)(a1 + 24) = v24 - 1;
      v29 = *(_QWORD **)(a1 + 8);
      v30 = *(unsigned int *)(a1 + 24);
      v31 = *(struct IGraphNode *(__fastcall **)(CVisual *__hidden, unsigned int))(*v29 + 8LL);
      if ( v31 == CVisual::GetChildAt )
      {
        v32 = v29[1];
        if ( (v32 & 2) != 0 )
          v33 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v33 = v29[1] & 1LL;
        if ( v33 > v30 )
        {
          v34 = v29[1];
          if ( (v34 & 2) != 0 )
            v21 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v21 = v29[1] & 1LL;
          if ( v30 >= v21 )
            goto LABEL_190;
          v35 = v34 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v21 != 1 )
            v35 = *(_QWORD *)(v35 + 8 * v30 + 16);
          if ( v35 )
            v16 = (_QWORD *)(v35 + 64);
          else
LABEL_190:
            v16 = 0LL;
        }
      }
      else
      {
        v16 = (_QWORD *)v31(*(CVisual **)(a1 + 8), v30);
      }
      v36 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v36;
      *(_QWORD *)(a1 + 8) = v16;
    }
LABEL_44:
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6Fu);
LABEL_213:
      v14 = v96;
      v15 = 64LL;
      goto LABEL_130;
    }
    if ( !v16 )
    {
      v19 = v100;
      goto LABEL_48;
    }
    v6 = (struct CVisualTree *)v98;
    v5 = v97;
  }
  while ( 1 )
  {
LABEL_48:
    v13 = 0;
    v37 = 0LL;
    if ( *(_BYTE *)(v19 + 5472) )
    {
      if ( *(_BYTE *)(v19 + 5473) )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v19 + 2584) + 8LL);
        if ( v37 )
          v37 -= 64LL;
      }
      else
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v19 + 5480) + 24LL);
      }
    }
    if ( (*(_BYTE *)(v37 + 90) & 1) != 0 )
    {
      v21 = *(_QWORD *)(v19 - 24);
      v87 = *(_DWORD *)(v21 + 1040);
      if ( v87 )
        *(_DWORD *)(v21 + 1040) = v87 - 1;
    }
    if ( (*(_BYTE *)(v37 + 89) & 1) != 0 )
    {
      --*(_DWORD *)(v19 + 5708);
      *(_BYTE *)(v37 + 89) &= ~1u;
    }
    v38 = v19 - 48;
    while ( 1 )
    {
      v39 = *(_DWORD *)(v38 + 424);
      if ( !v39 )
        break;
      v21 = 2LL * (unsigned int)(v39 - 1);
      if ( _mm_srli_si128(*(__m128i *)(*(_QWORD *)(v38 + 440) + 16LL * (unsigned int)(v39 - 1)), 8).m128i_u64[0] != v37 )
        break;
      v49 = *(_DWORD *)(v38 + 424);
      if ( v49 )
      {
        v21 = 2LL * (unsigned int)(v49 - 1);
        v50 = 0;
        v102 = *(_OWORD *)(*(_QWORD *)(v38 + 440) + 16LL * (unsigned int)(v49 - 1));
      }
      else
      {
        v50 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x19DAu);
      }
      if ( (_DWORD)v102 == 8 )
      {
        CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)v38, 1);
      }
      else
      {
        switch ( (int)v102 )
        {
          case 1:
            v64 = *(_DWORD *)(v38 + 424);
            if ( v64 )
              *(_DWORD *)(v38 + 424) = v64 - 1;
            v65 = *(_DWORD *)(v38 + 2552);
            if ( v65 )
              *(_DWORD *)(v38 + 2552) = v65 - 1;
            v21 = 76LL * (unsigned int)(*(_DWORD *)(v38 + 704) - 1);
            --*(_DWORD *)(v21 + *(_QWORD *)(v38 + 680) + 4);
            *(_WORD *)(v38 + 5929) = 257;
            break;
          case 2:
            v61 = *(_DWORD *)(v38 + 424);
            if ( v61 )
              *(_DWORD *)(v38 + 424) = v61 - 1;
            v62 = *(CRectangleShape **)(104LL * (unsigned int)(*(_DWORD *)(v38 + 1496) - 1)
                                      + *(_QWORD *)(v38 + 1472)
                                      + 72);
            if ( v62 )
            {
              v63 = **(void *(__fastcall ***)(CRectangleShape *__hidden, unsigned int))v62;
              if ( v63 == CRectangleShape::`vector deleting destructor' )
                CRectangleShape::`vector deleting destructor'(v62, 1u);
              else
                v63(v62, 1u);
            }
            --*(_DWORD *)(v38 + 1496);
            v21 = 76LL * (unsigned int)(*(_DWORD *)(v38 + 704) - 1);
            --*(_DWORD *)(v21 + *(_QWORD *)(v38 + 680) + 8);
            *(_BYTE *)(v38 + 5929) = 1;
            break;
          case 3:
            v66 = *(_DWORD *)(v38 + 424);
            if ( v66 )
              *(_DWORD *)(v38 + 424) = v66 - 1;
            --*(_DWORD *)(v38 + 704);
            break;
          case 4:
            v58 = *(_DWORD *)(v38 + 424);
            if ( v58 )
              *(_DWORD *)(v38 + 424) = v58 - 1;
            v59 = *(_DWORD *)(v38 + 456);
            if ( v59 )
              *(_DWORD *)(v38 + 456) = v59 - 1;
            v60 = *(_DWORD *)(v38 + 488);
            if ( v60 )
              *(_DWORD *)(v38 + 488) = v60 - 1;
            *(_BYTE *)(v38 + 5928) = 1;
            break;
          case 5:
          case 6:
            v73 = CDrawingContext::PopLayer((CDrawingContext *)v38);
            v50 = v73;
            if ( v73 >= 0 )
              continue;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0x19EEu);
            break;
          case 7:
            v67 = *(_DWORD *)(v38 + 424);
            if ( v67 )
              *(_DWORD *)(v38 + 424) = v67 - 1;
            v68 = *(_DWORD *)(v38 + 2584);
            if ( v68 )
              *(_DWORD *)(v38 + 2584) = v68 - 1;
            break;
          default:
            break;
        }
      }
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x1614u);
        break;
      }
    }
    v19 = v100;
    if ( *(char *)(v37 + 89) < 0
      && *(_BYTE *)(*(_QWORD *)(v100 + 5480) + 32LL)
      && (CDrawingContext::CalcClippedNodeWorldSpaceBounds(v38, v37, &v103),
          *(_OWORD *)v99 = v103,
          v88 = CDrawingContext::RedrawVisual((CDrawingContext *)v38, (struct MilRectF *)v99),
          v13 = v88,
          v88 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x231Fu);
    }
    else
    {
      v40 = 0LL;
      if ( *(_DWORD *)(v37 + 752) )
      {
        while ( 1 )
        {
          v89 = CComposition::PopRenderParameter(
                  *(_QWORD *)(v19 - 24),
                  *(unsigned int *)(*(_QWORD *)(v37 + 728) + 24 * v40));
          v13 = v89;
          if ( v89 < 0 )
            break;
          v40 = (unsigned int)(v90 + 1);
          if ( (unsigned int)v40 >= *(_DWORD *)(v37 + 752) )
            goto LABEL_60;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x2329u);
      }
    }
LABEL_60:
    if ( v13 < 0 )
      break;
    v41 = *(_QWORD *)(a1 + 16);
    v13 = 0;
    if ( v41
      && (*(_DWORD *)(a1 + 28) == 1
       && *(_DWORD *)(a1 + 24) != -1
       && ((v42 = **(unsigned int (__fastcall ***)(CVisual *__hidden))v41, v42 != CVisual::GetChildrenCount)
         ? (LODWORD(v43) = v42(*(CVisual **)(a1 + 16)))
         : (v43 = *(_QWORD *)(v41 + 8), (v43 & 2) != 0)
         ? (v43 = *(_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCuLL))
         : (LODWORD(v43) = v43 & 1),
           v44 = *(_DWORD *)(a1 + 24),
           v21 = (unsigned int)(v44 + 1),
           (unsigned int)v21 < (unsigned int)v43)
       || !*(_DWORD *)(a1 + 28) && (v44 = *(_DWORD *)(a1 + 24)) != 0) )
    {
      if ( *(_DWORD *)(a1 + 28) == 1 )
        v51 = (unsigned int)(v44 + 1);
      else
        v51 = (unsigned int)(v44 - 1);
      v52 = *(_QWORD **)(a1 + 16);
      v53 = *(struct IGraphNode *(__fastcall **)(CVisual *__hidden, unsigned int))(*v52 + 8LL);
      if ( v53 == CVisual::GetChildAt )
      {
        v54 = v52[1];
        if ( (v54 & 2) != 0 )
          v55 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v55 = v52[1] & 1LL;
        if ( v55 <= (unsigned int)v51 )
          goto LABEL_208;
        v56 = v52[1];
        v21 = (v56 & 2) != 0 ? *(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFFCuLL) : v52[1] & 1LL;
        if ( (unsigned int)v51 >= v21 )
          goto LABEL_208;
        v57 = v56 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v21 != 1 )
          v57 = *(_QWORD *)(v57 + 8 * v51 + 16);
        if ( v57 )
          v16 = (_QWORD *)(v57 + 64);
        else
LABEL_208:
          v16 = 0LL;
      }
      else
      {
        v16 = (_QWORD *)v53(*(CVisual **)(a1 + 16), v51);
      }
      *(_QWORD *)(a1 + 8) = v16;
      *(_DWORD *)(a1 + 24) = v51;
      if ( v16 )
      {
        v6 = (struct CVisualTree *)v98;
        v5 = v97;
        goto LABEL_11;
      }
      v19 = v100;
    }
    else
    {
      v13 = 1;
    }
    if ( !*(_DWORD *)(a1 + 4) )
      goto LABEL_129;
    v45 = *(_DWORD *)(a1 + 32);
    v21 = 0LL;
    v46 = 0;
    if ( v45 )
    {
      v47 = (unsigned int)(v45 - 1);
      *(_DWORD *)(a1 + 32) = v47;
      *(_OWORD *)v99 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v47);
      v46 = (int)v99[1];
      v21 = (unsigned __int64)v99[0];
    }
    v48 = *(_QWORD *)(a1 + 16);
    --*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 8) = v48;
    *(_QWORD *)(a1 + 16) = v21;
    *(_DWORD *)(a1 + 24) = v46;
    if ( !v48 )
    {
      v14 = v96;
      v15 = 64LL;
      goto LABEL_130;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x87u);
LABEL_129:
  v14 = v96;
  v15 = 64LL;
LABEL_130:
  if ( v13 == 1 || v13 == -2147467260 )
    v13 = 0;
  if ( v14 )
  {
    v69 = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v69 )
      goto LABEL_134;
    v91 = (CPtrArrayBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             8LL);
    v69 = v91;
    if ( v91 )
    {
      v92 = CThreadContext::s_dwTlsIndex;
      *(_QWORD *)v91 = 0LL;
      TlsSetValue(v92, v91);
LABEL_134:
      if ( (*(_QWORD *)v69 & 2) != 0 )
        v70 = *(_QWORD *)(*(_QWORD *)v69 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v70 = *(_QWORD *)v69 & 1LL;
      CPtrArrayBase::RemoveAt(v69, v70 - 1);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x194u);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v71 = *(_DWORD *)(a1 + 40);
  if ( v71 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v15 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v15) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v15) <= *(_DWORD *)(a1 + 36) )
    {
      v98 = 0LL;
      v93 = WPF::HrMalloc((WPF *)v21, 16LL, (unsigned int)v15, (unsigned __int64)&v98, v94);
      if ( v93 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v98;
        *(_DWORD *)(a1 + 36) = v15;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, 0xF3u);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v71 + 1;
  }
  return (unsigned int)v13;
}
