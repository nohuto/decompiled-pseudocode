/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D5F4
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18005B9D0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18005BA14 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076CCC (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800786E0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180078F90 (-GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18014ABB0 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(
        CRectangleShape *a1,
        _DWORD *a2,
        CComplexShape *a3,
        _DWORD *a4,
        int a5,
        CRectangleShape **a6)
{
  CRegionShape *v10; // r13
  CD3DDeviceManager *v11; // rcx
  int D2DFactoryNoRef; // eax
  unsigned int v13; // esi
  int (*v14)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rsi
  int D2DGeometry; // eax
  __int64 (__fastcall *v16)(CComplexShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rsi
  int v17; // eax
  struct CRegionShape **v18; // r15
  unsigned int v19; // xmm1_4
  int v20; // xmm0_4
  int v21; // xmm1_4
  _DWORD *v22; // r14
  unsigned int v23; // esi
  void *(__fastcall *v24)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CComplexShape *v25; // rax
  int v27; // r9d
  int v28; // xmm1_4
  int v29; // xmm0_4
  int v30; // xmm1_4
  int v31; // xmm0_4
  int v32; // xmm1_4
  CRectangleShape *v33; // rax
  CRectangleShape *v34; // rax
  CRectangleShape *v35; // r14
  __int64 i; // rax
  int v37; // eax
  unsigned int v38; // [rsp+28h] [rbp-C9h]
  struct ID2D1RegionGeometry *v39; // [rsp+48h] [rbp-A9h] BYREF
  struct ID2D1Geometry *v40; // [rsp+50h] [rbp-A1h] BYREF
  struct ID2D1Geometry *v41; // [rsp+58h] [rbp-99h] BYREF
  struct ID2D1Geometry *v42; // [rsp+60h] [rbp-91h] BYREF
  struct CRegionShape *v43; // [rsp+68h] [rbp-89h] BYREF
  struct CRegionShape *v44[2]; // [rsp+70h] [rbp-81h] BYREF
  int v45; // [rsp+80h] [rbp-71h]
  int v46; // [rsp+84h] [rbp-6Dh]
  struct CD2DFactory *v47[2]; // [rsp+88h] [rbp-69h] BYREF
  _DWORD v48[6]; // [rsp+98h] [rbp-59h] BYREF
  _BYTE v49[32]; // [rsp+B0h] [rbp-41h] BYREF
  _BYTE v50[32]; // [rsp+D0h] [rbp-21h] BYREF

  CRectangleShape::CRectangleShape((CRectangleShape *)v50, 0.0, 0.0, 0.0, 0.0);
  CRectangleShape::CRectangleShape((CRectangleShape *)v49, 0.0, 0.0, 0.0, 0.0);
  v41 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  v40 = 0LL;
  v39 = 0LL;
  v43 = 0LL;
  v47[0] = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v11, v47);
  v13 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v38 = 404;
LABEL_40:
    v27 = D2DFactoryNoRef;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, v38);
    goto LABEL_27;
  }
  if ( a1 )
  {
    v14 = *(int (**)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a1 + 16LL);
    if ( v14 == CRectangleShape::GetD2DGeometry )
      D2DGeometry = CRectangleShape::GetD2DGeometry(a1, 0LL, &v41);
    else
      D2DGeometry = ((__int64 (__fastcall *)(CRectangleShape *, _QWORD, struct ID2D1Geometry **))v14)(a1, 0LL, &v41);
    v13 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v38 = 408;
      goto LABEL_46;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectangleShape::GetD2DGeometry((CRectangleShape *)v50, 0LL, &v41);
    v13 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v38 = 412;
      goto LABEL_40;
    }
  }
  if ( a3 )
  {
    v16 = *(__int64 (__fastcall **)(CComplexShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 16LL);
    if ( v16 == CComplexShape::GetD2DGeometry )
      v17 = CComplexShape::GetD2DGeometry(a3, 0LL, &v42);
    else
      v17 = v16(a3, 0LL, &v42);
    v13 = v17;
    if ( v17 >= 0 )
      goto LABEL_10;
    v38 = 417;
LABEL_46:
    v27 = v13;
    goto LABEL_42;
  }
  D2DFactoryNoRef = CRectangleShape::GetD2DGeometry((CRectangleShape *)v49, 0LL, &v42);
  v13 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v38 = 421;
    goto LABEL_40;
  }
LABEL_10:
  if ( a4 )
  {
    v18 = v44;
    v19 = a4[1];
    LODWORD(v44[0]) = *a4;
    *(struct CRegionShape **)((char *)v44 + 4) = (struct CRegionShape *)__PAIR64__(a4[4], v19);
    v20 = a4[12];
    HIDWORD(v44[1]) = a4[5];
    v21 = a4[13];
    v45 = v20;
    v46 = v21;
  }
  else
  {
    v18 = 0LL;
  }
  if ( a2 )
  {
    v22 = v48;
    v28 = a2[1];
    v48[0] = *a2;
    v29 = a2[4];
    v48[1] = v28;
    v30 = a2[5];
    v48[2] = v29;
    v31 = a2[12];
    v48[3] = v30;
    v32 = a2[13];
    v48[4] = v31;
    v48[5] = v32;
  }
  else
  {
    v22 = 0LL;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v23 = 1;
    else
      v23 = 3;
  }
  else
  {
    v23 = 0;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry *, _DWORD *, struct ID2D1Geometry *, struct CRegionShape **, _DWORD, struct ID2D1Geometry **))(**((_QWORD **)v47[0] + 4) + 32LL))(
                      *((_QWORD *)v47[0] + 4),
                      v23,
                      v41,
                      v22,
                      v42,
                      v18,
                      LODWORD(FLOAT_0_25),
                      &v40);
  v13 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v38 = 429;
    goto LABEL_40;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, struct CD2DFactory **))(*(_QWORD *)v40 + 32LL))(
                      v40,
                      0LL,
                      v47);
  v13 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v38 = 435;
    goto LABEL_40;
  }
  *(_OWORD *)v44 = *(_OWORD *)v47;
  if ( (unsigned __int8)IsRectEmptyOrInvalid(v44) )
  {
    v33 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               32LL);
    if ( v33 )
      v33 = CRectangleShape::CRectangleShape(v33, 0.0, 0.0, 0.0, 0.0);
    *a6 = v33;
    if ( !v33 )
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1B9u);
    }
  }
  else
  {
    v13 = (**(__int64 (__fastcall ***)(struct ID2D1Geometry *, GUID *, struct ID2D1RegionGeometry **))v40)(
            v40,
            &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
            &v39);
    if ( v13 )
    {
      v13 = 0;
      v24 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL);
      if ( v24 == WPF::ProcessHeapImpl::Alloc )
        v25 = (CComplexShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
      else
        v25 = (CComplexShape *)v24(WPF::g_pProcessHeap, 16uLL);
      if ( v25 )
        v25 = CComplexShape::CComplexShape(v25, v40);
      if ( v25 )
        goto LABEL_26;
      v27 = -2147024882;
      v38 = 481;
      v13 = -2147024882;
      goto LABEL_42;
    }
    if ( (*(unsigned int (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)v39 + 136LL))(v39) > 1 )
    {
      v37 = CRegionShape::Create(v39, &v43);
      v13 = v37;
      if ( v37 >= 0 )
      {
        v25 = v43;
LABEL_26:
        *a6 = v25;
        goto LABEL_27;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x1D7u);
      v10 = v43;
    }
    else
    {
      v34 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 32LL);
      if ( v34 )
        v35 = CRectangleShape::CRectangleShape(v34, 0.0, 0.0, 0.0, 0.0);
      else
        v35 = 0LL;
      if ( v35 )
      {
        if ( (*(unsigned int (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)v39 + 136LL))(v39) == 1 )
        {
          (*(void (__fastcall **)(struct ID2D1RegionGeometry *, struct CRegionShape **, __int64))(*(_QWORD *)v39 + 144LL))(
            v39,
            v44,
            1LL);
          for ( i = 0LL; i < 16; i += 4LL )
            *(float *)((char *)v47 + i) = (float)*(int *)((char *)v44 + i);
          CRectangleShape::Set(v35, (const struct MilRectF *)v47);
        }
        *a6 = v35;
      }
      else
      {
        v13 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1C9u);
      }
    }
  }
LABEL_27:
  if ( v40 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v40 + 16LL))(v40);
    v40 = 0LL;
  }
  if ( v39 )
  {
    (*(void (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)v39 + 16LL))(v39);
    v39 = 0LL;
  }
  if ( v41 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v42 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v10 )
    CRegionShape::`vector deleting destructor'(v10, 1u);
  CRectangleShape::~CRectangleShape((CRectangleShape *)v49);
  CRectangleShape::~CRectangleShape((CRectangleShape *)v50);
  return v13;
}
