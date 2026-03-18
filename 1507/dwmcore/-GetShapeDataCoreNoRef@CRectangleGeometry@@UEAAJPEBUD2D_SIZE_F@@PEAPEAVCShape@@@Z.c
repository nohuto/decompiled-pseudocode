/*
 * XREFs of ?GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180017430
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@AEBA_NXZ @ 0x1800176A0 (-IsRoundedRectangleGeometry@CRectangleGeometry@@AEBA_NXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076CCC (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??0CRectangleShape@@QEAA@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180078D28 (--0CRectangleShape@@QEAA@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCoreNoRef(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  unsigned int v3; // esi
  char *v6; // r15
  void *(__fastcall *v7)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  void *v8; // rax
  struct CShape *v9; // rdi
  void (__fastcall ***v10)(_QWORD, __int64); // r15
  CRectangleShape *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  unsigned int v16; // [rsp+20h] [rbp-60h]
  __int128 v17; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v18[3]; // [rsp+40h] [rbp-40h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    v6 = (char *)v18;
    v13 = *(_OWORD *)((char *)this + 104);
    v18[0] = *(_OWORD *)((char *)this + 88);
    v14 = *(_OWORD *)((char *)this + 120);
    v18[1] = v13;
    LODWORD(v13) = *((_DWORD *)this + 22);
    v18[2] = v14;
    DWORD1(v18[0]) = *((_DWORD *)this + 23);
    *(float *)&v14 = a2->height - *((float *)this + 25);
    LODWORD(v18[0]) = v13;
    *((_QWORD *)&v18[0] + 1) = __PAIR64__(v14, a2->width - *((float *)this + 24));
  }
  else
  {
    v6 = (char *)this + 88;
  }
  v17 = *(_OWORD *)v6;
  if ( (unsigned __int8)IsRectEmptyOrInvalid(&v17) )
  {
    v12 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               32LL);
    if ( v12 )
      v9 = CRectangleShape::CRectangleShape(v12, 0.0, 0.0, 0.0, 0.0);
    else
      v9 = 0LL;
    if ( !v9 )
    {
      v16 = 191;
      goto LABEL_21;
    }
  }
  else
  {
    if ( !CRectangleGeometry::IsRoundedRectangleGeometry((CRectangleGeometry *)((char *)this - 8)) )
    {
      v7 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL);
      if ( v7 == WPF::ProcessHeapImpl::Alloc )
        v8 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
      else
        v8 = v7(WPF::g_pProcessHeap, 32uLL);
      if ( v8 )
        v9 = (struct CShape *)CRectangleShape::CRectangleShape(v8, &v17);
      else
        v9 = 0LL;
      if ( v9 )
        goto LABEL_10;
      v16 = 203;
LABEL_21:
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v16);
      return v3;
    }
    v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            64LL);
    v9 = (struct CShape *)v15;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)v15 = &CRoundedRectangleShape::`vftable';
      *(_DWORD *)(v15 + 16) = *(_DWORD *)v6;
      *(_DWORD *)(v15 + 20) = *((_DWORD *)v6 + 1);
      *(_DWORD *)(v15 + 24) = *((_DWORD *)v6 + 2);
      *(_DWORD *)(v15 + 28) = *((_DWORD *)v6 + 3);
      *(_DWORD *)(v15 + 32) = *((_DWORD *)v6 + 4);
      *(_DWORD *)(v15 + 36) = *((_DWORD *)v6 + 5);
      *(_DWORD *)(v15 + 40) = *((_DWORD *)v6 + 6);
      *(_DWORD *)(v15 + 44) = *((_DWORD *)v6 + 7);
      *(_DWORD *)(v15 + 48) = *((_DWORD *)v6 + 8);
      *(_DWORD *)(v15 + 52) = *((_DWORD *)v6 + 9);
      *(_DWORD *)(v15 + 56) = *((_DWORD *)v6 + 10);
      *(_DWORD *)(v15 + 60) = *((_DWORD *)v6 + 11);
    }
    else
    {
      v9 = 0LL;
    }
    if ( !v9 )
    {
      v16 = 198;
      goto LABEL_21;
    }
  }
LABEL_10:
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  if ( v10 )
    (**v10)(*((_QWORD *)this + 10), 1LL);
  *((_QWORD *)this + 10) = v9;
  *a3 = v9;
  return v3;
}
