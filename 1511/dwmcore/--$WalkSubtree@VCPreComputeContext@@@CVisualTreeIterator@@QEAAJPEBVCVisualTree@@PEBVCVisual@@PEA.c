/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180052A00
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004ECA0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004D8D0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x180067ACC (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800A8A98 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        void *a3,
        CPreComputeContext *a4,
        ...)
{
  CPreComputeContext *v5; // rsi
  int v8; // eax
  __int64 v9; // r12
  int v10; // r14d
  void *v11; // rbp
  void *v12; // rdi
  int v13; // eax
  WPF *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r15
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  CVisual *v26; // r15
  int v27; // eax
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned int v33; // ecx
  void (__fastcall *v34)(WPF::ProcessHeapImpl *, void *); // rsi
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // rcx
  CPtrArrayBase *Value; // rdi
  __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 v45; // rax
  int v46; // eax
  unsigned __int64 v47; // rax
  void *v48; // rbp
  CPtrArrayBase *v49; // rax
  DWORD v50; // ecx
  int v51; // eax
  void **v52; // [rsp+20h] [rbp-88h]
  int v53; // [rsp+30h] [rbp-78h]
  struct CTreeData *v54; // [rsp+40h] [rbp-68h] BYREF
  __int128 v55; // [rsp+48h] [rbp-60h]
  __int64 v56; // [rsp+B0h] [rbp+8h] BYREF
  void *v57; // [rsp+B8h] [rbp+10h]
  void *v58; // [rsp+C0h] [rbp+18h] BYREF
  CPreComputeContext *v59; // [rsp+C8h] [rbp+20h]
  __int64 v60; // [rsp+D0h] [rbp+28h] BYREF
  va_list va; // [rsp+D0h] [rbp+28h]
  va_list va1; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v60 = va_arg(va1, _QWORD);
  v59 = a4;
  *(_DWORD *)(a1 + 72) = v60;
  *(_QWORD *)(a1 + 64) = a2;
  v5 = a4;
  v57 = 0LL;
  v8 = CThreadContext::RegisterGraphWalkRoot(a3);
  v9 = 64LL;
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x40u);
    v12 = 0LL;
    v11 = 0LL;
  }
  else
  {
    v11 = a3;
    v57 = a3;
    *(_QWORD *)(a1 + 8) = a3;
    v12 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x59u);
    goto LABEL_65;
  }
  v10 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), a2, &v54);
  if ( v10 < 0 )
  {
LABEL_91:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x67u);
    goto LABEL_65;
  }
  while ( 1 )
  {
    v13 = CPreComputeContext::PreSubgraph(v5, a2, (struct CManipulationManager *)&v56);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x69u);
      goto LABEL_64;
    }
    if ( !(_BYTE)v56 )
      break;
    v26 = 0LL;
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
    if ( (v31 & 2) != 0 )
      v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v31) = v31 & 1;
    if ( !(_DWORD)v31 )
    {
      v10 = 1;
      goto LABEL_57;
    }
    v10 = 0;
    *(_QWORD *)&v55 = *(_QWORD *)(a1 + 16);
    DWORD2(v55) = *(_DWORD *)(a1 + 24);
    v32 = *(unsigned int *)(a1 + 36);
    v58 = 0LL;
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v32 )
      goto LABEL_39;
    v45 = 2 * v32;
    v53 = v45;
    if ( v45 > 0xFFFFFFFF )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    }
    else
    {
      if ( (unsigned int)v45 <= 0x40 )
      {
        LODWORD(v45) = 64;
        v53 = 64;
      }
      v46 = WPF::HrMalloc(v14, 16LL, (unsigned int)v45, (unsigned __int64)&v58, v52);
      v10 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x54u);
        v12 = v58;
      }
      else
      {
        v47 = 16LL * *(unsigned int *)(a1 + 32);
        if ( v47 <= 0xFFFFFFFF )
        {
          v48 = v58;
          v10 = 0;
          memcpy_0(v58, *(const void **)(a1 + 48), (unsigned int)v47);
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(a1 + 48));
          v12 = 0LL;
          *(_DWORD *)(a1 + 36) = v53;
          *(_QWORD *)(a1 + 48) = v48;
LABEL_39:
          *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v55;
          v33 = *(_DWORD *)(a1 + 32);
          if ( *(_DWORD *)(a1 + 56) > v33 )
            v33 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(a1 + 56) = v33;
          goto LABEL_42;
        }
        v10 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
        v12 = v58;
      }
    }
LABEL_42:
    v34 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v34 == WPF::ProcessHeapImpl::Free )
    {
      if ( v12 )
        HeapFree(g_hProcessHeap, 0, v12);
    }
    else
    {
      v34(WPF::g_pProcessHeap, v12);
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x87u);
      v5 = v59;
      v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v31 - 1;
      v35 = *(_QWORD *)(a1 + 8);
      v36 = *(_QWORD *)(v35 + 56);
      v37 = (v36 & 2) != 0 ? *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(v35 + 56) & 1LL;
      v38 = *(unsigned int *)(a1 + 24);
      if ( v37 <= v38
        || ((v39 = *(_QWORD *)(v35 + 56), (v39 & 2) != 0)
          ? (v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCuLL))
          : (v40 = *(_QWORD *)(v35 + 56) & 1LL),
            v38 >= v40) )
      {
        v26 = 0LL;
      }
      else
      {
        v26 = (CVisual *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v40 != 1 )
          v26 = (CVisual *)*((_QWORD *)v26 + v38 + 2);
      }
      ++*(_DWORD *)(a1 + 4);
      v5 = v59;
      *(_QWORD *)(a1 + 16) = v35;
      *(_QWORD *)(a1 + 8) = v26;
    }
LABEL_57:
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6Fu);
      goto LABEL_64;
    }
    if ( !v26 )
      break;
LABEL_26:
    v10 = CVisual::EnsureTreeData(v26, a2, &v54);
    if ( v10 < 0 )
    {
      v11 = v57;
      v9 = 64LL;
      goto LABEL_91;
    }
  }
  while ( 1 )
  {
    LOBYTE(v60) = 1;
    v15 = CPreComputeContext::PostSubgraph(v5, a2, (bool *)va);
    v10 = v15;
    if ( v15 < 0 )
      break;
    if ( (_BYTE)v60 )
    {
      v17 = *(_QWORD *)(a1 + 16);
      v10 = 0;
      if ( v17
        && ((v18 = *(_DWORD *)(a1 + 28), v18 == 1)
         && (v19 = *(_DWORD *)(a1 + 24), v19 != -1)
         && ((v20 = *(_QWORD *)(v17 + 56), (v20 & 2) == 0)
           ? (v16 = *(_QWORD *)(v17 + 56) & 1LL)
           : (v16 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL)),
             v19 + 1 < (unsigned int)v16)
         || !v18 && (v19 = *(_DWORD *)(a1 + 24)) != 0) )
      {
        if ( v18 == 1 )
          v21 = (unsigned int)(v19 + 1);
        else
          v21 = (unsigned int)(v19 - 1);
        v22 = *(_QWORD *)(v17 + 56);
        if ( (v22 & 2) != 0 )
          v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v23 = *(_QWORD *)(v17 + 56) & 1LL;
        v16 = (unsigned int)v21;
        if ( v23 <= (unsigned int)v21
          || ((v24 = *(_QWORD *)(v17 + 56), (v24 & 2) == 0)
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
          goto LABEL_26;
      }
      else
      {
        v10 = 1;
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v27 = *(_DWORD *)(a1 + 32);
      v16 = 0LL;
      v28 = 0;
      if ( v27 )
      {
        v29 = (unsigned int)(v27 - 1);
        *(_DWORD *)(a1 + 32) = v29;
        v28 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v29 + 8);
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v29);
      }
      v30 = *(_QWORD *)(a1 + 16);
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v30;
      *(_QWORD *)(a1 + 16) = v16;
      *(_DWORD *)(a1 + 24) = v28;
      if ( v30 )
        continue;
    }
    goto LABEL_64;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x87u);
LABEL_64:
  v11 = v57;
  v9 = 64LL;
LABEL_65:
  if ( v10 == 1 || v10 == -2147467260 )
    v10 = 0;
  if ( v11 )
  {
    Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( Value )
      goto LABEL_69;
    v49 = (CPtrArrayBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             8LL);
    Value = v49;
    if ( v49 )
    {
      v50 = CThreadContext::s_dwTlsIndex;
      *(_QWORD *)v49 = 0LL;
      TlsSetValue(v50, v49);
LABEL_69:
      if ( (*(_QWORD *)Value & 2) != 0 )
        v42 = *(_QWORD *)(*(_QWORD *)Value & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v42 = *(_QWORD *)Value & 1LL;
      CPtrArrayBase::RemoveAt(Value, v42 - 1);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Cu);
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v43 = *(_DWORD *)(a1 + 40);
  if ( v43 == 10 )
  {
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v9 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v9) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE2u);
    }
    else if ( (unsigned int)(3 * v9) <= *(_DWORD *)(a1 + 36) )
    {
      v56 = 0LL;
      v51 = WPF::HrMalloc((WPF *)v16, 16LL, (unsigned int)v9, (unsigned __int64)&v56, v52);
      if ( v51 >= 0 )
      {
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v56;
        *(_DWORD *)(a1 + 36) = v9;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0xF3u);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v43 + 1;
  }
  return (unsigned int)v10;
}
