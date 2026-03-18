/*
 * XREFs of ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180067BB8
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18004CDF0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180085898 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800A8A98 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18010477C (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18010EEF0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CPtrArrayBase::InsertAt(CPtrArrayBase *this, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned __int64 v8; // rbx
  _QWORD *v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  double v14; // xmm0_8
  double v15; // xmm0_8
  WPF *v16; // rcx
  char *v17; // r13
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r15
  void (__fastcall *v20)(WPF::ProcessHeapImpl *, void *); // r14
  void **v21; // [rsp+20h] [rbp-38h]
  unsigned int v22; // [rsp+20h] [rbp-38h]
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

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
    v23 = 0LL;
    v11 = WPF::HrMalloc(this, 8LL, 6uLL, (unsigned __int64)&v23, v21);
    v4 = v11;
    if ( v11 >= 0 )
    {
      v12 = v23;
      *(_QWORD *)v23 = 2LL;
      *(_QWORD *)(v12 + 8) = 4LL;
      *(_QWORD *)(v12 + 8 * (3 - a3)) = v10;
      *(_QWORD *)(v12 + 8 * a3 + 16) = a2;
      *(_QWORD *)this = v12 | 2;
      return v4;
    }
    v22 = 87;
LABEL_36:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v22);
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
    v11 = WPF::HrMalloc(v16, 8LL, (unsigned __int64)v16 + (unsigned int)(int)v15 + 2, (unsigned __int64)&v23, v21);
    v4 = v11;
    if ( v11 < 0 )
    {
      v22 = 130;
      goto LABEL_36;
    }
    v18 = v23;
    v19 = *(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL;
    if ( a3 )
      memcpy_0((void *)(v23 + 16), (const void *)(v19 + 16), 8 * a3);
    *(_QWORD *)(v18 + 8 * a3 + 16) = a2;
    if ( a3 < v8 )
      memcpy_0((void *)(v18 + 24 + 8 * a3), (const void *)(v19 + 8 * (a3 + 2)), 8 * (v8 - a3));
    v20 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v20 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, (void *)v19);
    else
      v20(WPF::g_pProcessHeap, (void *)v19);
    *(_QWORD *)v18 = v8 + 1;
    *(_QWORD *)(v18 + 8) = v17 - 2;
    *(_QWORD *)this = v18 | 2;
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
