/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180016944
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180058470 (-GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180071954 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800B0394 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x180159030 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(__int64 a1, _DWORD *a2, __int64 a3, _DWORD *a4, int a5, CRectangleShape **a6)
{
  CD3DDeviceManager *v10; // rcx
  int D2DFactoryNoRef; // eax
  unsigned int v12; // esi
  struct CRegionShape **v13; // r15
  unsigned int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  unsigned int v17; // esi
  CComplexShape *v18; // rax
  CRegionShape *v19; // r14
  int v21; // r9d
  int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  CRectangleShape *v27; // rax
  CRectangleShape *v28; // rax
  CRectangleShape *v29; // r14
  __int64 i; // rax
  int v31; // eax
  unsigned int v32; // [rsp+28h] [rbp-E0h]
  struct ID2D1RegionGeometry *v33; // [rsp+50h] [rbp-B8h] BYREF
  struct ID2D1Geometry *v34; // [rsp+58h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v35; // [rsp+60h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v36; // [rsp+68h] [rbp-A0h] BYREF
  struct CRegionShape *v37; // [rsp+70h] [rbp-98h] BYREF
  struct CRegionShape *v38[2]; // [rsp+78h] [rbp-90h] BYREF
  int v39; // [rsp+88h] [rbp-80h]
  int v40; // [rsp+8Ch] [rbp-7Ch]
  struct CD2DFactory *v41[2]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v42[6]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v43[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v44[32]; // [rsp+D8h] [rbp-30h] BYREF

  CRectangleShape::CRectangleShape((CRectangleShape *)v44, 0.0, 0.0, 0.0, 0.0);
  CRectangleShape::CRectangleShape((CRectangleShape *)v43, 0.0, 0.0, 0.0, 0.0);
  v35 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  v41[0] = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v10, v41);
  v12 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v32 = 416;
LABEL_35:
    v21 = D2DFactoryNoRef;
    goto LABEL_37;
  }
  if ( a1 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a1 + 16LL))(
                        a1,
                        0LL,
                        &v35);
    v12 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v32 = 420;
      goto LABEL_35;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectangleShape::GetD2DGeometry((CRectangleShape *)v44, 0LL, &v35);
    v12 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v32 = 424;
      goto LABEL_35;
    }
  }
  if ( a3 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a3 + 16LL))(
                        a3,
                        0LL,
                        &v36);
    v12 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v32 = 429;
      goto LABEL_35;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectangleShape::GetD2DGeometry((CRectangleShape *)v43, 0LL, &v36);
    v12 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v32 = 433;
      goto LABEL_35;
    }
  }
  if ( a4 )
  {
    v13 = v38;
    v14 = a4[1];
    LODWORD(v38[0]) = *a4;
    *(struct CRegionShape **)((char *)v38 + 4) = (struct CRegionShape *)__PAIR64__(a4[4], v14);
    v15 = a4[12];
    HIDWORD(v38[1]) = a4[5];
    v16 = a4[13];
    v39 = v15;
    v40 = v16;
  }
  else
  {
    v13 = 0LL;
  }
  if ( a2 )
  {
    v22 = a2[1];
    v42[0] = *a2;
    v23 = a2[4];
    v42[1] = v22;
    v24 = a2[5];
    v42[2] = v23;
    v25 = a2[12];
    v42[3] = v24;
    v26 = a2[13];
    a2 = v42;
    v42[4] = v25;
    v42[5] = v26;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v17 = 1;
    else
      v17 = 3;
  }
  else
  {
    v17 = 0;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry *, _DWORD *, struct ID2D1Geometry *, struct CRegionShape **, _DWORD, struct ID2D1Geometry **))(**((_QWORD **)v41[0] + 4) + 32LL))(
                      *((_QWORD *)v41[0] + 4),
                      v17,
                      v35,
                      a2,
                      v36,
                      v13,
                      LODWORD(FLOAT_0_25),
                      &v34);
  v12 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v32 = 441;
    goto LABEL_35;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, struct CD2DFactory **))(*(_QWORD *)v34 + 32LL))(
                      v34,
                      0LL,
                      v41);
  v12 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v32 = 447;
    goto LABEL_35;
  }
  *(_OWORD *)v38 = *(_OWORD *)v41;
  if ( (unsigned __int8)IsRectEmptyOrInvalid(v38) )
  {
    v27 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               32LL);
    if ( v27 )
      v27 = CRectangleShape::CRectangleShape(v27, 0.0, 0.0, 0.0, 0.0);
    *a6 = v27;
    if ( !v27 )
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1C5u);
    }
    goto LABEL_21;
  }
  v12 = (**(__int64 (__fastcall ***)(struct ID2D1Geometry *, GUID *, struct ID2D1RegionGeometry **))v34)(
          v34,
          &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
          &v33);
  if ( v12 )
  {
    v12 = 0;
    v18 = (CComplexShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 8LL))(
                             WPF::g_pProcessHeap,
                             16LL);
    if ( v18 )
      v18 = CComplexShape::CComplexShape(v18, v34);
    if ( v18 )
    {
      *a6 = v18;
LABEL_21:
      v19 = 0LL;
      goto LABEL_22;
    }
    v21 = -2147024882;
    v32 = 493;
    v12 = -2147024882;
LABEL_37:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v32);
    goto LABEL_21;
  }
  if ( (*(unsigned int (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)v33 + 136LL))(v33) <= 1 )
  {
    v28 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                               WPF::g_pProcessHeap,
                               32LL);
    if ( v28 )
      v29 = CRectangleShape::CRectangleShape(v28, 0.0, 0.0, 0.0, 0.0);
    else
      v29 = 0LL;
    if ( v29 )
    {
      if ( (*(unsigned int (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)v33 + 136LL))(v33) == 1 )
      {
        (*(void (__fastcall **)(struct ID2D1RegionGeometry *, struct CRegionShape **, __int64))(*(_QWORD *)v33 + 144LL))(
          v33,
          v38,
          1LL);
        for ( i = 0LL; i < 16; i += 4LL )
          *(float *)((char *)v41 + i) = (float)*(int *)((char *)v38 + i);
        CRectangleShape::Set(v29, (const struct MilRectF *)v41);
      }
      *a6 = v29;
    }
    else
    {
      v12 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1D5u);
    }
    goto LABEL_21;
  }
  v31 = CRegionShape::Create(v33, &v37);
  v12 = v31;
  if ( v31 >= 0 )
  {
    v19 = 0LL;
    *a6 = v37;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x1E3u);
    v19 = v37;
  }
LABEL_22:
  if ( v34 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v34 + 16LL))(v34);
    v34 = 0LL;
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  if ( v35 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v36 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v19 )
    CRegionShape::`vector deleting destructor'(v19, 1u);
  CRectangleShape::~CRectangleShape((CRectangleShape *)v43);
  CRectangleShape::~CRectangleShape((CRectangleShape *)v44);
  return v12;
}
