/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800608B0
 * Callers:
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18005BE84 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EB80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A2644 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        const struct CVisualTree *a2,
        unsigned __int64 a3,
        COcclusionContext *a4,
        int a5)
{
  CPtrArrayBase *Value; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  unsigned __int64 v14; // rbp
  int v15; // eax
  int v16; // r9d
  CVisual *v17; // rsi
  __int64 v18; // r14
  void *v19; // rbp
  __int64 v20; // rax
  unsigned int v21; // eax
  void (*v22)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rsi
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // r15
  __int64 v39; // r14
  __int64 v40; // rcx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rsi
  int v43; // eax
  __int64 v45; // r8
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rsi
  unsigned __int64 v49; // rdx
  __int64 v50; // rbp
  unsigned int v51; // r15d
  void *(__fastcall *v52)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v53; // rdx
  void *v54; // rax
  unsigned __int64 v55; // rax
  void *v56; // rdx
  void (*v57)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  __int64 v58; // rdx
  _QWORD *v59; // r14
  unsigned __int64 v60; // rsi
  _QWORD *v61; // rcx
  __int64 v62; // rsi
  void (*v63)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  CPtrArrayBase *v64; // rax
  DWORD v65; // ecx
  __int64 v66; // r8
  __int64 *v67; // rax
  DWORD v68; // ecx
  void *(__fastcall *v69)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  unsigned __int64 v70; // rdx
  void *v71; // rax
  void *v72; // rsi
  int v73; // eax
  unsigned int v74; // [rsp+20h] [rbp-68h]
  __int128 v75; // [rsp+30h] [rbp-58h]
  bool v76; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v77; // [rsp+98h] [rbp+10h]
  struct CTreeData *v78; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)(a1 + 72) = a5;
  *(_QWORD *)(a1 + 64) = a2;
  v77 = 0LL;
  Value = (CPtrArrayBase *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v64 = (CPtrArrayBase *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             8LL);
    Value = v64;
    if ( !v64 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Bu);
      goto LABEL_119;
    }
    v65 = CThreadContext::s_dwTlsIndex;
    *(_QWORD *)v64 = 0LL;
    TlsSetValue(v65, v64);
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
      v11 = v58 + 1;
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
      v77 = a3;
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
    goto LABEL_49;
  }
  v13 = CVisual::EnsureTreeData(*(CVisual **)(a1 + 8), a2, &v78);
  if ( v13 < 0 )
  {
LABEL_141:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x67u);
    goto LABEL_49;
  }
  while ( 1 )
  {
    v15 = COcclusionContext::PreSubgraph(a4, a2, &v76);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x69u);
      goto LABEL_48;
    }
    if ( !v76 )
      break;
    v17 = 0LL;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL);
    if ( (v18 & 2) != 0 )
      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v18) = v18 & 1;
    if ( !(_DWORD)v18 )
    {
      v13 = 1;
      goto LABEL_33;
    }
    v13 = 0;
    *(_QWORD *)&v75 = *(_QWORD *)(a1 + 16);
    v19 = 0LL;
    DWORD2(v75) = *(_DWORD *)(a1 + 24);
    v20 = *(unsigned int *)(a1 + 36);
    if ( *(_DWORD *)(a1 + 32) != (_DWORD)v20 )
      goto LABEL_15;
    v51 = 2 * v20;
    if ( (unsigned __int64)(2 * v20) > 0xFFFFFFFF )
    {
      v74 = 76;
LABEL_124:
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v74);
      goto LABEL_18;
    }
    if ( v51 <= 0x40 )
      v51 = 64;
    v13 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v51 <= 0x10 )
    {
      v13 = -2147024809;
    }
    else
    {
      v52 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      v53 = 16LL * v51;
      if ( v52 == WPF::ProcessHeapImpl::Alloc )
        v54 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v53);
      else
        v54 = v52(WPF::g_pProcessHeap, v53);
      v19 = v54;
      if ( !v54 )
        v13 = -2147024882;
    }
    if ( v13 >= 0 )
    {
      v55 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v55 <= 0xFFFFFFFF )
      {
        v13 = 0;
        memcpy_0(v19, *(const void **)(a1 + 48), (unsigned int)v55);
        v56 = *(void **)(a1 + 48);
        v57 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v57 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v56);
        else
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v57)(WPF::g_pProcessHeap, v56);
        *(_DWORD *)(a1 + 36) = v51;
        *(_QWORD *)(a1 + 48) = v19;
        v19 = 0LL;
LABEL_15:
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 32))++) = v75;
        v21 = *(_DWORD *)(a1 + 56);
        if ( v21 <= *(_DWORD *)(a1 + 32) )
          v21 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v21;
        goto LABEL_18;
      }
      v74 = 86;
      goto LABEL_124;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x54u);
LABEL_18:
    v22 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v22 == WPF::ProcessHeapImpl::Free )
    {
      if ( v19 )
        HeapFree(g_hProcessHeap, 0, v19);
    }
    else
    {
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v22)(WPF::g_pProcessHeap, v19);
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x87u);
    }
    else
    {
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28) == 1 ? 0 : v18 - 1;
      v23 = *(_QWORD *)(a1 + 8);
      v24 = *(_QWORD *)(v23 + 136);
      v25 = (v24 & 2) != 0 ? *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCuLL) : *(_QWORD *)(v23 + 136) & 1LL;
      v26 = *(unsigned int *)(a1 + 24);
      if ( v25 <= v26
        || ((v27 = *(_QWORD *)(v23 + 136), (v27 & 2) != 0)
          ? (v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCuLL))
          : (v28 = *(_QWORD *)(v23 + 136) & 1LL),
            v26 >= v28) )
      {
        v17 = 0LL;
      }
      else
      {
        v17 = (CVisual *)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v28 != 1 )
          v17 = (CVisual *)*((_QWORD *)v17 + v26 + 2);
      }
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v23;
      *(_QWORD *)(a1 + 8) = v17;
    }
LABEL_33:
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6Fu);
      goto LABEL_48;
    }
    if ( !v17 )
      break;
LABEL_35:
    v13 = CVisual::EnsureTreeData(v17, a2, &v78);
    if ( v13 < 0 )
    {
      v14 = v77;
      goto LABEL_141;
    }
  }
  while ( 1 )
  {
    LOBYTE(a5) = 1;
    v29 = COcclusionContext::PostSubgraph(a4, a2, (bool *)&a5, v16);
    v13 = v29;
    if ( v29 < 0 )
      break;
    if ( (_BYTE)a5 )
    {
      v30 = *(_QWORD *)(a1 + 16);
      v13 = 0;
      if ( v30
        && ((v31 = *(_DWORD *)(a1 + 28), v31 == 1)
         && (v32 = *(_DWORD *)(a1 + 24), v32 != -1)
         && ((v66 = *(_QWORD *)(v30 + 136), (v66 & 2) == 0)
           ? (LODWORD(v66) = v66 & 1)
           : (v66 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFFCuLL)),
             v32 + 1 < (unsigned int)v66)
         || !v31 && (v32 = *(_DWORD *)(a1 + 24)) != 0) )
      {
        if ( v31 == 1 )
          v45 = (unsigned int)(v32 + 1);
        else
          v45 = (unsigned int)(v32 - 1);
        v46 = *(_QWORD *)(v30 + 136);
        if ( (v46 & 2) != 0 )
          v47 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v47 = *(_QWORD *)(v30 + 136) & 1LL;
        if ( v47 <= (unsigned int)v45
          || ((v48 = *(_QWORD *)(v30 + 136), (v48 & 2) == 0)
            ? (v49 = v48 & 1)
            : (v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCuLL)),
              (unsigned int)v45 >= v49) )
        {
          v17 = 0LL;
        }
        else
        {
          v17 = (CVisual *)(v48 & 0xFFFFFFFFFFFFFFFCuLL);
          if ( v49 != 1 )
            v17 = (CVisual *)*((_QWORD *)v17 + v45 + 2);
        }
        *(_QWORD *)(a1 + 8) = v17;
        *(_DWORD *)(a1 + 24) = v45;
        if ( v17 )
          goto LABEL_35;
      }
      else
      {
        v13 = 1;
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      v33 = *(_DWORD *)(a1 + 32);
      v34 = 0LL;
      v35 = 0;
      if ( v33 )
      {
        v36 = (unsigned int)(v33 - 1);
        *(_DWORD *)(a1 + 32) = v36;
        v35 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v36 + 8);
        v34 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v36);
      }
      v37 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v34;
      --*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 8) = v37;
      *(_DWORD *)(a1 + 24) = v35;
      if ( v37 )
        continue;
    }
    goto LABEL_48;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x87u);
LABEL_48:
  v14 = v77;
LABEL_49:
  if ( v13 == 1 || v13 == -2147467260 )
    v13 = 0;
  if ( v14 )
  {
    v38 = (__int64 *)TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( v38 )
    {
LABEL_53:
      v39 = *v38;
      if ( (*v38 & 2) != 0 )
        v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v40 = *v38 & 1;
      v41 = v40 - 1;
      if ( (*v38 & 2) != 0 )
        v42 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v42 = *v38 & 1;
      if ( v41 < v42 )
      {
        if ( v42 == 1 )
        {
          *v38 = 0LL;
        }
        else
        {
          v59 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCuLL);
          v60 = v42 - 1;
          v61 = v59 + 2;
          if ( v60 == 1 )
          {
            v62 = v61[-v41 + 1];
            v63 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
            if ( v63 == WPF::ProcessHeapImpl::Free )
              WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v59);
            else
              ((void (__fastcall *)(WPF::ProcessHeapImpl *, _QWORD *))v63)(WPF::g_pProcessHeap, v59);
            *v38 = v62 | 1;
          }
          else
          {
            if ( v41 < v60 )
              memmove(&v61[v41], &v61[v41 + 1], 8 * (v60 - v41));
            *v59 = v60;
          }
        }
      }
    }
    else
    {
      v67 = (__int64 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         8LL);
      v38 = v67;
      if ( v67 )
      {
        v68 = CThreadContext::s_dwTlsIndex;
        *v67 = 0LL;
        TlsSetValue(v68, v67);
        goto LABEL_53;
      }
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
        v69 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL);
        v70 = 16LL * (unsigned int)v50;
        if ( v69 == WPF::ProcessHeapImpl::Alloc )
          v71 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v70);
        else
          v71 = v69(WPF::g_pProcessHeap, v70);
        v72 = v71;
        if ( v71 )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            *(_QWORD *)(a1 + 48));
          *(_QWORD *)(a1 + 48) = v72;
          *(_DWORD *)(a1 + 36) = v50;
          goto LABEL_84;
        }
        v73 = -2147024882;
      }
      else
      {
        v73 = -2147024809;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0xF3u);
    }
LABEL_84:
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    return (unsigned int)v13;
  }
  *(_DWORD *)(a1 + 40) = v43 + 1;
  return (unsigned int)v13;
}
