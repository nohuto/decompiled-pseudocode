/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A2644
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004FEF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800608B0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180060F20 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800AD988 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18011AD74 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x1801254C0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z @ 0x180137E4C (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned __int64 v8; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  double v14; // xmm0_8
  double v15; // xmm0_8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r14
  SIZE_T v18; // rdx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r13
  void (__fastcall *v21)(WPF::ProcessHeapImpl *, void *); // rax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD *)this;
  v4 = 0;
  if ( (*(_QWORD *)this & 2) != 0 )
    v8 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v8 = *(_QWORD *)this & 1LL;
  if ( a3 > v8 )
  {
    v23 = 42;
LABEL_45:
    v4 = -2147024809;
LABEL_47:
    v22 = v4;
LABEL_49:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
    return v4;
  }
  if ( (a2 & 3) != 0 )
  {
    v23 = 52;
    goto LABEL_45;
  }
  if ( !v8 )
  {
    *(_QWORD *)this = a2 | 1;
    return v4;
  }
  v10 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v8 == 1 )
  {
    if ( *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL) == WPF::ProcessHeapImpl::Alloc )
      v12 = (__int64)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x30uLL);
    else
      v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              48LL);
    if ( !v12 )
      v4 = -2147024882;
    if ( (v4 & 0x80000000) == 0 )
    {
      *(_QWORD *)v12 = 2LL;
      *(_QWORD *)(v12 + 8) = 4LL;
      *(_QWORD *)(v12 + 8 * (3 - a3)) = v10;
      *(_QWORD *)(v12 + 8 * a3 + 16) = a2;
      *(_QWORD *)this = v12 | 2;
      return v4;
    }
    v23 = 87;
    goto LABEL_47;
  }
  v11 = v10[1];
  if ( v8 != v11 )
  {
    if ( a3 < v8 )
      memmove(&v10[a3 + 3], &v10[a3 + 2], 8 * (v8 - a3));
    v10[a3 + 2] = a2;
    ++*v10;
    return v4;
  }
  v13 = 0LL;
  v14 = (double)(int)v11;
  if ( v11 < 0 )
    v14 = v14 + 1.844674407370955e19;
  v15 = v14 * 1.5;
  v16 = 0LL;
  if ( v15 >= 9.223372036854776e18 )
  {
    v15 = v15 - 9.223372036854776e18;
    if ( v15 < 9.223372036854776e18 )
      v16 = 0x8000000000000000uLL;
  }
  v17 = v16 + (unsigned int)(int)v15 + 2;
  if ( v17 <= v11 )
  {
    v23 = 122;
    v4 = -2147024882;
    v22 = -2147024882;
    goto LABEL_49;
  }
  if ( v16 + (unsigned int)(int)v15 == -2LL || 0xFFFFFFFFFFFFFFFFuLL / v17 <= 8 )
  {
    v4 = -2147024809;
  }
  else
  {
    v18 = 8 * v17;
    if ( *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL) == WPF::ProcessHeapImpl::Alloc )
      v19 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v18);
    else
      v19 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                        WPF::g_pProcessHeap,
                        v18);
    v13 = (unsigned __int64)v19;
    if ( !v19 )
      v4 = -2147024882;
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    v23 = 130;
    goto LABEL_47;
  }
  v20 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
  if ( a3 )
    memcpy_0((void *)(v13 + 16), (const void *)(v20 + 16), 8 * a3);
  *(_QWORD *)(v13 + 8 * a3 + 16) = a2;
  if ( a3 < v8 )
    memcpy_0((void *)(v13 + 8 * (a3 + 3)), (const void *)(v20 + 8 * a3 + 16), 8 * (v8 - a3));
  v21 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v21 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)v20);
  else
    v21(WPF::g_pProcessHeap, (void *)v20);
  *(_QWORD *)v13 = v8 + 1;
  *(_QWORD *)(v13 + 8) = v17 - 2;
  *(_QWORD *)this = v13 | 2;
  return v4;
}
