/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800017D4
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z @ 0x1800982D4 (-GetTopCpuClipInScope@CScopedClipStack@@QEAAJPEAPEAVCShape@@@Z.c)
 * Callees:
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x180002908 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180002950 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18001D7AC (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180097C30 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800980B4 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::D2DCombine(
        CRectanglesShape *a1,
        __int64 a2,
        CComplexShape *a3,
        _DWORD *a4,
        int a5,
        _QWORD *a6)
{
  CRegionShape *v9; // r15
  int D2DFactoryNoRef; // eax
  unsigned int v11; // ebx
  int (*v12)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  __int64 (__fastcall *v14)(CComplexShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v15; // eax
  __int128 *v16; // rdx
  unsigned int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  unsigned int v20; // r10d
  int v21; // eax
  void *(__fastcall *v22)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CComplexShape *v23; // rax
  struct CRegionShape *v24; // rax
  int v26; // r9d
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v30; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v31; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v32; // [rsp+60h] [rbp-A0h] BYREF
  struct ID2D1RegionGeometry *v33; // [rsp+68h] [rbp-98h] BYREF
  struct CRegionShape *v34; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+8Ch] [rbp-74h]
  struct CD2DFactory *v38[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v39[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  __int64 v41; // [rsp+BCh] [rbp-44h]
  _BYTE v42[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-28h]
  _QWORD v44[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v45; // [rsp+F8h] [rbp-8h]
  __int64 v46; // [rsp+FCh] [rbp-4h]
  _BYTE v47[16]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v48; // [rsp+118h] [rbp+18h]

  v44[0] = &CRectanglesShape::`vftable';
  v39[0] = &CRectanglesShape::`vftable';
  v44[1] = v47;
  v48 = 0LL;
  v44[2] = v47;
  v43 = 0LL;
  v45 = 1;
  v39[1] = v42;
  v46 = 1LL;
  v39[2] = v42;
  v40 = 1;
  v9 = 0LL;
  v41 = 1LL;
  v31 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v38[0] = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)1, v38);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v29 = 448;
    goto LABEL_62;
  }
  if ( a1 )
  {
    v12 = *(int (**)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a1 + 16LL);
    if ( v12 == CRectanglesShape::GetD2DGeometry )
      D2DGeometry = CRectanglesShape::GetD2DGeometry(a1, 0LL, &v31);
    else
      D2DGeometry = ((__int64 (__fastcall *)(CRectanglesShape *, _QWORD, struct ID2D1Geometry **))v12)(a1, 0LL, &v31);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v29 = 452;
LABEL_39:
      v26 = v11;
      goto LABEL_63;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v44, 0LL, &v31);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v29 = 456;
      goto LABEL_62;
    }
  }
  if ( !a3 )
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v39, 0LL, &v32);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef >= 0 )
      goto LABEL_10;
    v29 = 465;
LABEL_62:
    v26 = D2DFactoryNoRef;
    goto LABEL_63;
  }
  v14 = *(__int64 (__fastcall **)(CComplexShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 16LL);
  if ( v14 == CComplexShape::GetD2DGeometry )
    v15 = CComplexShape::GetD2DGeometry(a3, 0LL, &v32);
  else
    v15 = v14(a3, 0LL, &v32);
  v11 = v15;
  if ( v15 < 0 )
  {
    v29 = 461;
    goto LABEL_39;
  }
LABEL_10:
  if ( a4 )
  {
    v16 = &v35;
    v17 = a4[1];
    LODWORD(v35) = *a4;
    *(_QWORD *)((char *)&v35 + 4) = __PAIR64__(a4[4], v17);
    v18 = a4[12];
    HIDWORD(v35) = a4[5];
    v19 = a4[13];
    v36 = v18;
    v37 = v19;
  }
  else
  {
    v16 = 0LL;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v20 = 1;
    else
      v20 = 3;
  }
  else
  {
    v20 = 0;
  }
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(**((_QWORD **)v38[0] + 4) + 32LL))(
          *((_QWORD *)v38[0] + 4),
          v20,
          v31,
          0LL,
          v32,
          v16,
          LODWORD(FLOAT_0_25),
          &v30);
  v11 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1D9u);
    goto LABEL_25;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, struct CD2DFactory **))(*(_QWORD *)v30 + 32LL))(
                      v30,
                      0LL,
                      v38);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v29 = 479;
    goto LABEL_62;
  }
  v35 = *(_OWORD *)v38;
  if ( (unsigned __int8)IsRectEmptyOrInvalid(&v35) )
  {
    v27 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            64LL);
    if ( v27 )
    {
      *(_QWORD *)v27 = &CRectanglesShape::`vftable';
      *(_QWORD *)(v27 + 8) = v27 + 40;
      *(_QWORD *)(v27 + 16) = v27 + 40;
      *(_DWORD *)(v27 + 24) = 1;
      *(_QWORD *)(v27 + 28) = 1LL;
      *(_QWORD *)(v27 + 56) = 0LL;
    }
    else
    {
      v27 = 0LL;
    }
    *a6 = v27;
    if ( v27 )
      goto LABEL_25;
    v26 = -2147024882;
    v29 = 485;
    v11 = -2147024882;
LABEL_63:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v29);
    goto LABEL_25;
  }
  if ( (**(unsigned int (__fastcall ***)(struct ID2D1Geometry *, GUID *, struct ID2D1RegionGeometry **))v30)(
         v30,
         &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
         &v33) )
  {
    v11 = 0;
    v22 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v22 == WPF::ProcessHeapImpl::Alloc )
      v23 = (CComplexShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
    else
      v23 = (CComplexShape *)v22(WPF::g_pProcessHeap, 16uLL);
    if ( v23 )
      v24 = CComplexShape::CComplexShape(v23, v30);
    else
      v24 = 0LL;
    if ( v24 )
      goto LABEL_24;
    v26 = -2147024882;
    v29 = 506;
    v11 = -2147024882;
    goto LABEL_63;
  }
  v28 = CRegionShape::Create(v33, &v34);
  v11 = v28;
  if ( v28 >= 0 )
  {
    v24 = v34;
LABEL_24:
    *a6 = v24;
    goto LABEL_25;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x1F1u);
  v9 = v34;
LABEL_25:
  if ( v30 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v30 + 16LL))(v30);
    v30 = 0LL;
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v32 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v9 )
    CRegionShape::`vector deleting destructor'(v9, 1u);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v39);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v44);
  return v11;
}
