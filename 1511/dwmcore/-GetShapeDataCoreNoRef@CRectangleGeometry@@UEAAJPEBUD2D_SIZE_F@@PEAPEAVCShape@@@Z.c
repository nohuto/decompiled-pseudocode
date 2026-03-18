/*
 * XREFs of ?GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180065260
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@AEBA_NXZ @ 0x18006593C (-IsRoundedRectangleGeometry@CRectangleGeometry@@AEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCoreNoRef(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  unsigned int v3; // esi
  char *v6; // r15
  unsigned int v7; // xmm6_4
  unsigned int v8; // xmm7_4
  unsigned int v9; // xmm8_4
  unsigned int v10; // xmm9_4
  LPVOID (__fastcall *v11)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  char *v12; // rax
  CRectangleShape *v13; // rdi
  __int128 v14; // xmm0
  void (__fastcall ***v15)(_QWORD, __int64); // r15
  CRectangleShape *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  unsigned int v21; // [rsp+28h] [rbp-69h]
  __int128 v22; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v23[3]; // [rsp+48h] [rbp-49h] BYREF

  v3 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    v6 = (char *)v23;
    v18 = *(_OWORD *)((char *)this + 120);
    v23[0] = *(_OWORD *)((char *)this + 104);
    v19 = *(_OWORD *)((char *)this + 136);
    v23[1] = v18;
    LODWORD(v18) = *((_DWORD *)this + 26);
    v23[2] = v19;
    DWORD1(v23[0]) = *((_DWORD *)this + 27);
    *(float *)&v19 = a2->height - *((float *)this + 29);
    LODWORD(v23[0]) = v18;
    *((_QWORD *)&v23[0] + 1) = __PAIR64__(v19, a2->width - *((float *)this + 28));
  }
  else
  {
    v6 = (char *)this + 104;
  }
  v7 = *(_DWORD *)v6;
  v8 = *((_DWORD *)v6 + 1);
  v9 = *((_DWORD *)v6 + 2);
  v10 = *((_DWORD *)v6 + 3);
  LODWORD(v22) = *(_DWORD *)v6;
  *(_QWORD *)((char *)&v22 + 4) = __PAIR64__(v9, v8);
  HIDWORD(v22) = v10;
  if ( IsRectEmptyOrInvalid((float *)&v22) )
  {
    v17 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               32LL);
    if ( v17 )
      v13 = CRectangleShape::CRectangleShape(v17, 0.0, 0.0, 0.0, 0.0);
    else
      v13 = 0LL;
    if ( !v13 )
    {
      v21 = 192;
      goto LABEL_22;
    }
  }
  else
  {
    if ( !CRectangleGeometry::IsRoundedRectangleGeometry(this) )
    {
      v11 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
      if ( v11 == WPF::ProcessHeapImpl::Alloc )
        v12 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x20uLL);
      else
        v12 = (char *)v11(WPF::g_pProcessHeap, 32LL);
      v13 = (CRectangleShape *)v12;
      if ( v12 )
      {
        *(_QWORD *)&v22 = __PAIR64__(v8, v7);
        *((_QWORD *)&v22 + 1) = __PAIR64__(v10, v9);
        v14 = v22;
        *(_QWORD *)v12 = &CRectangleShape::`vftable';
        *((_QWORD *)v12 + 3) = 0LL;
        *(_OWORD *)(v12 + 8) = v14;
      }
      else
      {
        v13 = 0LL;
      }
      if ( v13 )
        goto LABEL_10;
      v21 = 204;
LABEL_22:
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v21);
      return v3;
    }
    v13 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               72LL);
    if ( v13 )
    {
      *(_QWORD *)v13 = &CRoundedRectangleShape::`vftable';
      *(_OWORD *)((char *)v13 + 8) = *(_OWORD *)v6;
      *(_OWORD *)((char *)v13 + 24) = *((_OWORD *)v6 + 1);
      v20 = *((_OWORD *)v6 + 2);
      *((_QWORD *)v13 + 7) = 0LL;
      *((_QWORD *)v13 + 8) = 0LL;
      *(_OWORD *)((char *)v13 + 40) = v20;
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
    {
      v21 = 199;
      goto LABEL_22;
    }
  }
LABEL_10:
  v15 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 12);
  if ( v15 )
    (**v15)(*((_QWORD *)this + 12), 1LL);
  *((_QWORD *)this + 12) = v13;
  *a3 = v13;
  return v3;
}
