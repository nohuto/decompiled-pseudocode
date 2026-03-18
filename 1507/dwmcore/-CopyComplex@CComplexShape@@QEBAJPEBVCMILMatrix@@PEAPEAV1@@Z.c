/*
 * XREFs of ?CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18000DDCC
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CreateTransformedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@PEAPEAUID2D1TransformedGeometry@@@Z @ 0x18000DF24 (-CreateTransformedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@PEAPEAUID2.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180055DD4 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18005BA14 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CComplexShape::CopyComplex(
        CComplexShape *this,
        const struct CMILMatrix *a2,
        struct CComplexShape **a3)
{
  struct ID2D1Geometry *v3; // r14
  unsigned int v4; // edi
  struct ID2D1Geometry *v5; // rsi
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  int D2DFactoryNoRef; // eax
  void *(__fastcall *v11)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r14
  CComplexShape *v12; // rax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-40h]
  struct ID2D1TransformedGeometry *v16; // [rsp+30h] [rbp-30h] BYREF
  CD2DFactory *v17; // [rsp+38h] [rbp-28h] BYREF
  struct D2D_MATRIX_3X2_F v18; // [rsp+40h] [rbp-20h] BYREF

  v3 = (struct ID2D1Geometry *)*((_QWORD *)this + 1);
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    if ( !a2 )
    {
      v5 = v3;
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v3 + 8LL))(v3);
      goto LABEL_6;
    }
    v8 = *(_DWORD *)a2;
    v9 = *((_DWORD *)a2 + 1);
    v17 = 0LL;
    *(_QWORD *)&v18.m11 = __PAIR64__(v9, v8);
    *(_QWORD *)&v18.m[1][0] = *((_QWORD *)a2 + 2);
    *(_QWORD *)&v18.m[2][0] = *((_QWORD *)a2 + 6);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v17);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v15 = 39;
    }
    else
    {
      D2DFactoryNoRef = CD2DFactory::CreateTransformedGeometry(v17, *((struct ID2D1Geometry **)this + 1), &v18, &v16);
      v4 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef >= 0 )
      {
        v5 = v16;
        v16 = 0LL;
        goto LABEL_6;
      }
      v15 = 45;
    }
    v14 = D2DFactoryNoRef;
    goto LABEL_24;
  }
LABEL_6:
  v11 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v11 == WPF::ProcessHeapImpl::Alloc )
    v12 = (CComplexShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v12 = (CComplexShape *)v11(WPF::g_pProcessHeap, 16uLL);
  if ( v12 )
    v12 = CComplexShape::CComplexShape(v12, v5);
  if ( v12 )
  {
    *a3 = v12;
    goto LABEL_12;
  }
  v4 = -2147024882;
  v15 = 57;
  v14 = -2147024882;
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v15);
LABEL_12:
  if ( v16 )
    (*(void (__fastcall **)(struct ID2D1TransformedGeometry *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v5 + 16LL))(v5);
  return v4;
}
