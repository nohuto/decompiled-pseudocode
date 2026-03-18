/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x18001AF98
 * Callers:
 *     ?RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z @ 0x18000EC84 (-RegisterGraphWalkRoot@CGraphWalker@@SAJPEAVIGraphNode@@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500 (--$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawin.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180031E90 (--$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPre.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z @ 0x18005BE78 (-BeginWalk@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@_N@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1800E871C (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x1800F5270 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned __int64 v8; // rsi
  _QWORD *v10; // rbx
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  double v14; // xmm0_8
  double v15; // xmm0_8
  WPF *v16; // rcx
  char *v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r12
  void **v20; // [rsp+20h] [rbp-48h]
  unsigned int v21; // [rsp+20h] [rbp-48h]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+18h] BYREF

  v22 = (unsigned __int64)this;
  v3 = *(_QWORD *)this;
  v4 = 0;
  if ( (*(_QWORD *)this & 2) != 0 )
    v8 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v8 = *(_QWORD *)this & 1LL;
  if ( a3 > v8 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2Au);
    return v4;
  }
  if ( (a2 & 3) != 0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x34u);
    return v4;
  }
  if ( !v8 )
  {
    *(_QWORD *)this = a2 | 1;
    return v4;
  }
  v10 = (_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v8 == 1 )
  {
    v22 = 0LL;
    v11 = WPF::HrMalloc(this, 8LL, 6uLL, (unsigned __int64)&v22, v20);
    v4 = v11;
    if ( v11 >= 0 )
    {
      v12 = v22;
      *(_QWORD *)v22 = 2LL;
      *(_QWORD *)(v12 + 8) = 4LL;
      *(_QWORD *)(v12 + 8 * (3 - a3)) = v10;
      *(_QWORD *)(v12 + 8 * a3 + 16) = a2;
      *(_QWORD *)this = v12 | 2;
      return v4;
    }
    v21 = 87;
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v21);
    return v4;
  }
  v13 = v10[1];
  if ( v8 == v13 )
  {
    v23 = 0LL;
    v14 = (double)(int)v13;
    if ( v13 < 0 )
      v14 = v14 + 1.844674407370955e19;
    v15 = v14 * 1.5;
    v16 = 0LL;
    if ( v15 >= 9.223372036854776e18 )
    {
      v15 = v15 - 9.223372036854776e18;
      if ( v15 < 9.223372036854776e18 )
        v16 = (WPF *)0x8000000000000000LL;
    }
    v17 = (char *)v16 + (unsigned int)(int)v15 + 2;
    if ( (unsigned __int64)v17 <= v13 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Au);
      return v4;
    }
    v11 = WPF::HrMalloc(v16, 8LL, (unsigned __int64)v16 + (unsigned int)(int)v15 + 2, (unsigned __int64)&v23, v20);
    v4 = v11;
    if ( v11 < 0 )
    {
      v21 = 130;
      goto LABEL_33;
    }
    v18 = v23;
    v19 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
    if ( a3 )
      memcpy_0((void *)(v23 + 16), (const void *)(v19 + 16), 8 * a3);
    *(_QWORD *)(v18 + 8 * a3 + 16) = a2;
    if ( a3 < v8 )
      memcpy_0((void *)(v18 + 24 + 8 * a3), (const void *)(v19 + 8 * (a3 + 2)), 8 * (v8 - a3));
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v19);
    *(_QWORD *)v18 = v8 + 1;
    *(_QWORD *)(v18 + 8) = v17 - 2;
    *(_QWORD *)v22 = v18 | 2;
  }
  else
  {
    if ( a3 < v8 )
      memmove(&v10[a3 + 3], &v10[a3 + 2], 8 * (v8 - a3));
    v10[a3 + 2] = a2;
    ++*v10;
  }
  return v4;
}
