/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180031E90
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18003C0C0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEAA_K_K@Z @ 0x18001B258 (--ACPtrArrayBase@@IEAA_K_K@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x18001B298 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800597D4 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x180059FD0 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 CGraphIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        CPreComputeContext *a4,
        ...)
{
  CPreComputeContext *v4; // r13
  struct CVisualTree *v5; // r12
  __int64 v7; // rbp
  __int64 *Value; // rdi
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  int v11; // eax
  int v12; // r14d
  __int64 v13; // rdi
  __int64 v14; // rbp
  _QWORD *v15; // r15
  int (*v16)(CVisual *__hidden, const struct CVisualTree *); // rdi
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  WPF *v20; // rcx
  __int64 v21; // rdi
  unsigned int (__fastcall *v22)(CVisual *__hidden); // rsi
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rbp
  _QWORD *v26; // rdi
  struct IGraphNode *(__fastcall *v27)(CVisual *__hidden, unsigned int); // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int64 v31; // r15
  int v32; // eax
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  unsigned int (__fastcall *v37)(CVisual *__hidden); // rsi
  __int64 v38; // r12
  void *v39; // rdi
  __int64 v40; // rax
  WPF *v41; // rcx
  unsigned int v42; // ecx
  void (__fastcall *v43)(WPF::ProcessHeapImpl *, void *); // rsi
  _QWORD *v44; // rdi
  unsigned __int64 v45; // rbp
  struct IGraphNode *(__fastcall *v46)(CVisual *__hidden, unsigned int); // rsi
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r15
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // r15
  __int64 v52; // rax
  CPtrArrayBase *v53; // rdi
  __int64 v54; // rdx
  int v55; // eax
  _QWORD *v57; // rcx
  CVisualTreeData *v58; // rdi
  LPVOID (__fastcall *v59)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CTreeData *v60; // rax
  _QWORD *v61; // rcx
  void (__fastcall *v62)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *); // rsi
  __int64 v63; // rdx
  unsigned int v64; // r13d
  int v65; // eax
  unsigned __int64 v66; // rax
  void *v67; // rbp
  __int64 *v68; // rax
  DWORD v69; // ecx
  int v70; // r9d
  CPtrArrayBase *v71; // rax
  DWORD v72; // ecx
  int v73; // eax
  void **v74; // [rsp+20h] [rbp-78h]
  unsigned int v75; // [rsp+20h] [rbp-78h]
  void *v76[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v77; // [rsp+40h] [rbp-58h]
  bool v78; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v79; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v80; // [rsp+B0h] [rbp+18h]
  CPreComputeContext *v81; // [rsp+B8h] [rbp+20h]
  __int64 v82; // [rsp+C0h] [rbp+28h] BYREF
  va_list va; // [rsp+C0h] [rbp+28h]
  va_list va1; // [rsp+C8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v82 = va_arg(va1, _QWORD);
  v81 = a4;
  v79 = a2;
  v4 = a4;
  v5 = (struct CVisualTree *)a2;
  if ( a3 )
    v7 = a3 + 64;
  else
    v7 = 0LL;
  *(_DWORD *)(a1 + 72) = v82;
  *(_QWORD *)(a1 + 64) = a2;
  v80 = 0LL;
  Value = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v68 = (__int64 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                       WPF::g_pProcessHeap,
                       8LL);
    Value = v68;
    if ( !v68 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x173u);
LABEL_130:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x43u);
      v13 = v80;
      goto LABEL_9;
    }
    v69 = CThreadContext::s_dwTlsIndex;
    *v68 = 0LL;
    TlsSetValue(v69, v68);
  }
  if ( (*Value & 2) != 0 )
    v9 = *(_QWORD *)(*Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v9 = *Value & 1;
  v10 = 0LL;
  if ( v9 )
  {
    while ( v7 != CPtrArrayBase::operator[](Value, v10) )
    {
      v10 = v63 + 1;
      if ( v10 >= v9 )
        goto LABEL_7;
    }
    v12 = -2147467260;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x17Eu);
    goto LABEL_130;
  }
LABEL_7:
  v11 = CPtrArrayBase::InsertAt((CPtrArrayBase *)Value, v7, v9);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x183u);
    goto LABEL_130;
  }
  v13 = v7;
  v80 = v7;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
LABEL_9:
  v14 = 64LL;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x59u);
    goto LABEL_86;
  }
  v15 = *(_QWORD **)(a1 + 8);
  do
  {
LABEL_11:
    v16 = *(int (**)(CVisual *__hidden, const struct CVisualTree *))(*v15 + 16LL);
    if ( v16 != CVisual::VisitNode )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD *, struct CVisualTree *, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v16)(
              v15,
              v5,
              WPF::ProcessHeapImpl::Alloc);
      goto LABEL_15;
    }
    v12 = 0;
    if ( *((_BYTE *)v5 + 32) )
    {
      v17 = v15 + 48;
      goto LABEL_14;
    }
    v57 = (_QWORD *)v15[46];
    if ( v57 != v15 + 46 )
    {
      while ( 1 )
      {
        v17 = v57 - 33;
        if ( (struct CVisualTree *)v57[4] == v5 )
          break;
        v57 = (_QWORD *)*v57;
        if ( v57 == v15 + 46 )
          goto LABEL_100;
      }
LABEL_14:
      if ( v17 )
        goto LABEL_15;
    }
LABEL_100:
    v58 = (CVisualTreeData *)v15[82];
    if ( v58 )
    {
      v15[82] = 0LL;
    }
    else
    {
      v59 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v59 == WPF::ProcessHeapImpl::Alloc )
        v60 = (CTreeData *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x130uLL);
      else
        v60 = (CTreeData *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v59)(
                             WPF::g_pProcessHeap,
                             304LL,
                             WPF::ProcessHeapImpl::Alloc);
      v58 = v60;
      if ( !v60 )
      {
        v12 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF26u);
        goto LABEL_15;
      }
      CTreeData::CTreeData(v60);
      v61[37] = 0LL;
      *v61 = &CVisualTreeData::`vftable';
    }
    v62 = *(void (__fastcall **)(CVisualTreeData *__hidden, struct CVisualTree *, struct CVisual *))(*(_QWORD *)v58 + 8LL);
    if ( v62 == CVisualTreeData::Initialize )
      CVisualTreeData::Initialize(v58, v5, (struct CVisual *)(v15 - 8));
    else
      v62(v58, v5, (struct CVisual *)(v15 - 8));
LABEL_15:
    if ( v12 < 0 )
    {
      v75 = 103;
      goto LABEL_153;
    }
    v18 = CPreComputeContext::PreSubgraph(v4, v5, &v78);
    v12 = v18;
    if ( v18 < 0 )
    {
      v75 = 105;
      v70 = v18;
      goto LABEL_155;
    }
    if ( !v78 )
      break;
    v36 = *(_QWORD *)(a1 + 8);
    v15 = 0LL;
    v37 = **(unsigned int (__fastcall ***)(CVisual *__hidden))v36;
    if ( v37 == CVisual::GetChildrenCount )
    {
      v38 = *(_QWORD *)(v36 + 8);
      if ( (v38 & 2) != 0 )
        v38 = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v38) = v38 & 1;
    }
    else
    {
      LODWORD(v38) = v37(*(CVisual **)(a1 + 8));
    }
    if ( !(_DWORD)v38 )
    {
      v12 = 1;
      goto LABEL_75;
    }
    v39 = 0LL;
    v40 = *(unsigned int *)(a1 + 36);
    v12 = 0;
    *(_QWORD *)&v77 = *(_QWORD *)(a1 + 16);
    v41 = (WPF *)*(unsigned int *)(a1 + 24);
    DWORD2(v77) = *(_DWORD *)(a1 + 24);
    v76[0] = 0LL;
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v40 )
      goto LABEL_54;
    v64 = 2 * v40;
    if ( (unsigned __int64)(2 * v40) > 0xFFFFFFFF )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v4 = v81;
    }
    else
    {
      if ( v64 <= 0x40 )
        v64 = 64;
      v65 = WPF::HrMalloc(v41, 16LL, v64, (unsigned __int64)v76, v74);
      v12 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v65, 0x54u);
        v39 = v76[0];
        v4 = v81;
      }
      else
      {
        v66 = 16LL * *(unsigned int *)(a1 + 32);
        if ( v66 <= 0xFFFFFFFF )
        {
          v67 = v76[0];
          v12 = 0;
          memcpy_0(v76[0], *(const void **)(a1 + 48), (unsigned int)v66);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(a1 + 48));
          *(_DWORD *)(a1 + 36) = v64;
          v39 = 0LL;
          v4 = v81;
          *(_QWORD *)(a1 + 48) = v67;
LABEL_54:
          *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v77;
          v42 = *(_DWORD *)(a1 + 32);
          if ( *(_DWORD *)(a1 + 56) > v42 )
            v42 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(a1 + 56) = v42;
          goto LABEL_57;
        }
        v12 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
        v39 = v76[0];
        v4 = v81;
      }
    }
LABEL_57:
    v43 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v43 == WPF::ProcessHeapImpl::Free )
    {
      if ( v39 )
        HeapFree(g_hProcessHeap, 0, v39);
    }
    else
    {
      v43(WPF::g_pProcessHeap, v39);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x88u);
      v14 = 64LL;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 28) == 1 )
        *(_DWORD *)(a1 + 24) = 0;
      else
        *(_DWORD *)(a1 + 24) = v38 - 1;
      v44 = *(_QWORD **)(a1 + 8);
      v45 = *(unsigned int *)(a1 + 24);
      v46 = *(struct IGraphNode *(__fastcall **)(CVisual *__hidden, unsigned int))(*v44 + 8LL);
      if ( v46 == CVisual::GetChildAt )
      {
        v47 = v44[1];
        if ( (v47 & 2) != 0 )
          v48 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v48 = v44[1] & 1LL;
        if ( v48 > v45 )
        {
          v49 = v44[1];
          if ( (v49 & 2) != 0 )
            v50 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v50 = v44[1] & 1LL;
          if ( v45 >= v50 )
            goto LABEL_143;
          v51 = v49 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v50 != 1 )
            v51 = *(_QWORD *)(v51 + 8 * v45 + 16);
          if ( v51 )
            v15 = (_QWORD *)(v51 + 64);
          else
LABEL_143:
            v15 = 0LL;
        }
      }
      else
      {
        v15 = (_QWORD *)v46(*(CVisual **)(a1 + 8), v45);
      }
      v52 = *(_QWORD *)(a1 + 8);
      v14 = 64LL;
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v52;
      *(_QWORD *)(a1 + 8) = v15;
    }
LABEL_75:
    if ( v12 < 0 )
    {
      v75 = 111;
LABEL_153:
      v70 = v12;
LABEL_155:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, v75);
      goto LABEL_85;
    }
    v5 = (struct CVisualTree *)v79;
  }
  while ( v15 );
  while ( 1 )
  {
    LOBYTE(v82) = 1;
    v19 = CPreComputeContext::PostSubgraph(v4, v5, (bool *)va);
    v12 = v19;
    if ( v19 < 0 )
      break;
    if ( (_BYTE)v82 )
    {
      v21 = *(_QWORD *)(a1 + 16);
      v12 = 0;
      if ( v21
        && (*(_DWORD *)(a1 + 28) == 1
         && *(_DWORD *)(a1 + 24) != -1
         && ((v22 = **(unsigned int (__fastcall ***)(CVisual *__hidden))v21, v22 != CVisual::GetChildrenCount)
           ? (LODWORD(v23) = v22(*(CVisual **)(a1 + 16)))
           : (v23 = *(_QWORD *)(v21 + 8), (v23 & 2) != 0)
           ? (v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL))
           : (LODWORD(v23) = v23 & 1),
             v24 = *(_DWORD *)(a1 + 24),
             v20 = (WPF *)(unsigned int)(v24 + 1),
             (unsigned int)v20 < (unsigned int)v23)
         || !*(_DWORD *)(a1 + 28) && (v24 = *(_DWORD *)(a1 + 24)) != 0) )
      {
        if ( *(_DWORD *)(a1 + 28) == 1 )
          v25 = (unsigned int)(v24 + 1);
        else
          v25 = (unsigned int)(v24 - 1);
        v26 = *(_QWORD **)(a1 + 16);
        v27 = *(struct IGraphNode *(__fastcall **)(CVisual *__hidden, unsigned int))(*v26 + 8LL);
        if ( v27 == CVisual::GetChildAt )
        {
          v28 = v26[1];
          if ( (v28 & 2) != 0 )
            v29 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            v29 = v26[1] & 1LL;
          if ( v29 <= (unsigned int)v25 )
            goto LABEL_149;
          v30 = v26[1];
          v20 = (v30 & 2) != 0 ? *(WPF **)(v30 & 0xFFFFFFFFFFFFFFFCuLL) : (WPF *)(v26[1] & 1LL);
          if ( (unsigned int)v25 >= (unsigned __int64)v20 )
            goto LABEL_149;
          v31 = v30 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v20 != (WPF *)1 )
            v31 = *(_QWORD *)(v31 + 8 * v25 + 16);
          if ( v31 )
            v15 = (_QWORD *)(v31 + 64);
          else
LABEL_149:
            v15 = 0LL;
        }
        else
        {
          v15 = (_QWORD *)v27(*(CVisual **)(a1 + 16), v25);
        }
        *(_QWORD *)(a1 + 8) = v15;
        *(_DWORD *)(a1 + 24) = v25;
        if ( v15 )
        {
          v14 = 64LL;
          goto LABEL_11;
        }
      }
      else
      {
        v12 = 1;
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v32 = *(_DWORD *)(a1 + 32);
      v20 = 0LL;
      v33 = 0;
      if ( v32 )
      {
        v34 = (unsigned int)(v32 - 1);
        *(_DWORD *)(a1 + 32) = v34;
        *(_OWORD *)v76 = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v34);
        v33 = (int)v76[1];
        v20 = (WPF *)v76[0];
      }
      v35 = *(_QWORD *)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v35;
      *(_QWORD *)(a1 + 16) = v20;
      *(_DWORD *)(a1 + 24) = v33;
      if ( v35 )
        continue;
    }
    goto LABEL_84;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x87u);
LABEL_84:
  v14 = 64LL;
LABEL_85:
  v13 = v80;
LABEL_86:
  if ( v12 == 1 || v12 == -2147467260 )
    v12 = 0;
  if ( v13 )
  {
    v53 = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v53 )
      goto LABEL_90;
    v71 = (CPtrArrayBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             8LL);
    v53 = v71;
    if ( v71 )
    {
      v72 = CThreadContext::s_dwTlsIndex;
      *(_QWORD *)v71 = 0LL;
      TlsSetValue(v72, v71);
LABEL_90:
      if ( (*(_QWORD *)v53 & 2) != 0 )
        v54 = *(_QWORD *)(*(_QWORD *)v53 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v54 = *(_QWORD *)v53 & 1LL;
      CPtrArrayBase::RemoveAt(v53, v54 - 1);
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
  v55 = *(_DWORD *)(a1 + 40);
  if ( v55 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v14 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v14) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v14) <= *(_DWORD *)(a1 + 36) )
    {
      v79 = 0LL;
      v73 = WPF::HrMalloc(v20, 16LL, (unsigned int)v14, (unsigned __int64)&v79, v74);
      if ( v73 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v79;
        *(_DWORD *)(a1 + 36) = v14;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0xF3u);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v55 + 1;
  }
  return (unsigned int)v12;
}
