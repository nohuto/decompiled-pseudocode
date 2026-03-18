/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180060F20
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EB80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A2644 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        unsigned __int64 a3,
        CPreComputeContext *a4,
        int a5)
{
  CPtrArrayBase *Value; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  unsigned __int64 v14; // rbp
  int v15; // eax
  int v16; // eax
  __int64 v17; // rsi
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  CVisual *v26; // rsi
  int v27; // eax
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // r15
  __int64 v33; // r14
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  int v37; // eax
  __int64 v39; // r14
  void *v40; // rbp
  __int64 v41; // rax
  unsigned int v42; // ecx
  void (*v43)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v44; // r8
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rsi
  unsigned __int64 v49; // rcx
  __int64 v50; // rbp
  __int64 v51; // rdx
  _QWORD *v52; // r14
  unsigned __int64 v53; // rsi
  _QWORD *v54; // rcx
  __int64 v55; // rsi
  void (*v56)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  unsigned int v57; // r15d
  void *(__fastcall *v58)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v59; // rdx
  void *v60; // rax
  unsigned __int64 v61; // rax
  CPtrArrayBase *v62; // rax
  DWORD v63; // ecx
  __int64 *v64; // rax
  DWORD v65; // ecx
  void *(__fastcall *v66)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v67; // rdx
  void *v68; // rax
  void *v69; // rsi
  int v70; // eax
  unsigned int v71; // [rsp+20h] [rbp-68h]
  __int128 v72; // [rsp+30h] [rbp-58h]
  bool v73; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v74; // [rsp+98h] [rbp+10h]
  struct CTreeData *v75; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v74 = 0LL;
  Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v62 = (CPtrArrayBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             8LL);
    Value = v62;
    if ( !v62 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Bu);
      goto LABEL_119;
    }
    v63 = CThreadContext::s_dwTlsIndex;
    *(_QWORD *)v62 = 0LL;
    TlsSetValue(v63, v62);
  }
  if ( (*(_QWORD *)Value & 2) != 0 )
    v10 = *(_QWORD *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v10 = *(_QWORD *)Value & 1LL;
  v11 = 0LL;
  if ( v10 )
  {
    while ( a3 != CPtrArrayBase::operator[](Value, v11) )
    {
      v11 = v51 + 1;
      if ( v11 >= v10 )
        goto LABEL_5;
    }
    v13 = -2147467260;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467260, 0x76u);
  }
  else
  {
LABEL_5:
    v12 = CPtrArrayBase::InsertAt(Value, a3, v10);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = a3;
      v74 = a3;
      *(_DWORD *)(a1 + 4) = 0;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_DWORD *)(a1 + 24) = 0;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7Bu);
  }
LABEL_119:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x40u);
  v14 = 0LL;
LABEL_7:
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x59u);
    goto LABEL_39;
  }
  v13 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), a2, &v75);
  if ( v13 < 0 )
  {
LABEL_137:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x67u);
    goto LABEL_39;
  }
  while ( 1 )
  {
    v15 = CPreComputeContext::PreSubgraph(a4, a2, &v73);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x69u);
      goto LABEL_38;
    }
    if ( !v73 )
      break;
    v26 = 0LL;
    v39 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
    if ( (v39 & 2) != 0 )
      v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v39) = v39 & 1;
    if ( !(_DWORD)v39 )
    {
      v13 = 1;
      goto LABEL_75;
    }
    v13 = 0;
    *(_QWORD *)&v72 = *(_QWORD *)(a1 + 16);
    v40 = 0LL;
    DWORD2(v72) = *(_DWORD *)(a1 + 24);
    v41 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v41 )
      goto LABEL_57;
    v57 = 2 * v41;
    if ( (unsigned __int64)(2 * v41) > 0xFFFFFFFF )
    {
      v71 = 76;
LABEL_124:
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v71);
      goto LABEL_60;
    }
    if ( v57 <= 0x40 )
      v57 = 64;
    v13 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v57 <= 0x10 )
    {
      v13 = -2147024809;
    }
    else
    {
      v58 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      v59 = 16LL * v57;
      if ( v58 == WPF::ProcessHeapImpl::Alloc )
        v60 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v59);
      else
        v60 = v58(WPF::g_pProcessHeap, v59);
      v40 = v60;
      if ( !v60 )
        v13 = -2147024882;
    }
    if ( v13 >= 0 )
    {
      v61 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v61 <= 0xFFFFFFFF )
      {
        v13 = 0;
        memcpy_0(v40, *(const void **)(a1 + 48), (unsigned int)v61);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 48));
        *(_DWORD *)(a1 + 36) = v57;
        *(_QWORD *)(a1 + 48) = v40;
        v40 = 0LL;
LABEL_57:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v72;
        v42 = *(_DWORD *)(a1 + 32);
        if ( *(_DWORD *)(a1 + 56) > v42 )
          v42 = *(_DWORD *)(a1 + 56);
        *(_DWORD *)(a1 + 56) = v42;
        goto LABEL_60;
      }
      v71 = 86;
      goto LABEL_124;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x54u);
LABEL_60:
    v43 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v43 == WPF::ProcessHeapImpl::Free )
    {
      if ( v40 )
        HeapFree(g_hProcessHeap, 0, v40);
    }
    else
    {
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v43)(WPF::g_pProcessHeap, v40);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x87u);
    }
    else
    {
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v39 - 1;
      v44 = *(_QWORD *)(a1 + 8);
      v45 = *(_QWORD *)(v44 + 136);
      v46 = (v45 & 2) != 0 ? *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(v44 + 136) & 1LL;
      v47 = *(unsigned int *)(a1 + 24);
      if ( v46 <= v47
        || ((v48 = *(_QWORD *)(v44 + 136), (v48 & 2) != 0)
          ? (v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCuLL))
          : (v49 = *(_QWORD *)(v44 + 136) & 1LL),
            v47 >= v49) )
      {
        v26 = 0LL;
      }
      else
      {
        v26 = (CVisual *)(v48 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v49 != 1 )
          v26 = (CVisual *)*((_QWORD *)v26 + v47 + 2);
      }
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v44;
      *(_QWORD *)(a1 + 8) = v26;
    }
LABEL_75:
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6Fu);
      goto LABEL_38;
    }
    if ( !v26 )
      break;
LABEL_30:
    v13 = CVisual::EnsureTreeData(v26, a2, &v75);
    if ( v13 < 0 )
    {
      v14 = v74;
      goto LABEL_137;
    }
  }
  while ( 1 )
  {
    LOBYTE(a5) = 1;
    v16 = CPreComputeContext::PostSubgraph(a4, a2, (bool *)&a5);
    v13 = v16;
    if ( v16 < 0 )
      break;
    if ( (_BYTE)a5 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      v13 = 0;
      if ( v17
        && ((v18 = *(_DWORD *)(a1 + 28), v18 == 1)
         && (v19 = *(_DWORD *)(a1 + 24), v19 != -1)
         && ((v20 = *(_QWORD *)(v17 + 136), (v20 & 2) == 0)
           ? (LODWORD(v20) = v20 & 1)
           : (v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL)),
             v19 + 1 < (unsigned int)v20)
         || !v18 && (v19 = *(_DWORD *)(a1 + 24)) != 0) )
      {
        if ( v18 == 1 )
          v21 = (unsigned int)(v19 + 1);
        else
          v21 = (unsigned int)(v19 - 1);
        v22 = *(_QWORD *)(v17 + 136);
        if ( (v22 & 2) != 0 )
          v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v23 = *(_QWORD *)(v17 + 136) & 1LL;
        if ( v23 <= (unsigned int)v21
          || ((v24 = *(_QWORD *)(v17 + 136), (v24 & 2) == 0)
            ? (v25 = v24 & 1)
            : (v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL)),
              (unsigned int)v21 >= v25) )
        {
          v26 = 0LL;
        }
        else
        {
          v26 = (CVisual *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v25 != 1 )
            v26 = (CVisual *)*((_QWORD *)v26 + v21 + 2);
        }
        *(_QWORD *)(a1 + 8) = v26;
        *(_DWORD *)(a1 + 24) = v21;
        if ( v26 )
          goto LABEL_30;
      }
      else
      {
        v13 = 1;
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v27 = *(_DWORD *)(a1 + 32);
      v28 = 0LL;
      v29 = 0;
      if ( v27 )
      {
        v30 = (unsigned int)(v27 - 1);
        *(_DWORD *)(a1 + 32) = v30;
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v30 + 8);
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v30);
      }
      v31 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v28;
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v31;
      *(_DWORD *)(a1 + 24) = v29;
      if ( v31 )
        continue;
    }
    goto LABEL_38;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x87u);
LABEL_38:
  v14 = v74;
LABEL_39:
  if ( v13 == 1 || v13 == -2147467260 )
    v13 = 0;
  if ( v14 )
  {
    v32 = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v32 )
    {
LABEL_43:
      v33 = *v32;
      if ( (*v32 & 2) != 0 )
        v34 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v34 = *v32 & 1;
      v35 = v34 - 1;
      if ( (*v32 & 2) != 0 )
        v36 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v36 = *v32 & 1;
      if ( v35 < v36 )
      {
        if ( v36 == 1 )
        {
          *v32 = 0LL;
        }
        else
        {
          v52 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCuLL);
          v53 = v36 - 1;
          v54 = v52 + 2;
          if ( v53 == 1 )
          {
            v55 = v54[-v35 + 1];
            v56 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
            if ( v56 == WPF::ProcessHeapImpl::Free )
              WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v52);
            else
              ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD *))v56)(WPF::g_pProcessHeap, v52);
            *v32 = v55 | 1;
          }
          else
          {
            if ( v35 < v53 )
              memmove(&v54[v35], &v54[v35 + 1], 8 * (v53 - v35));
            *v52 = v53;
          }
        }
      }
    }
    else
    {
      v64 = (__int64 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         8LL);
      v32 = v64;
      if ( v64 )
      {
        v65 = CThreadContext::s_dwTlsIndex;
        *v64 = 0LL;
        TlsSetValue(v65, v64);
        goto LABEL_43;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Cu);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v37 = *(_DWORD *)(a1 + 40);
  if ( v37 == 10 )
  {
    v50 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v50 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v50) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v50) <= *(_DWORD *)(a1 + 36) )
    {
      if ( (_DWORD)v50 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v50 > 0x10 )
      {
        v66 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        v67 = 16LL * (unsigned int)v50;
        if ( v66 == WPF::ProcessHeapImpl::Alloc )
          v68 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v67);
        else
          v68 = v66(WPF::g_pProcessHeap, v67);
        v69 = v68;
        if ( v68 )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v69;
          *(_DWORD *)(a1 + 36) = v50;
          goto LABEL_88;
        }
        v70 = -2147024882;
      }
      else
      {
        v70 = -2147024809;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v70, 0xF3u);
    }
LABEL_88:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v13;
  }
  *(_DWORD *)(a1 + 40) = v37 + 1;
  return (unsigned int)v13;
}
