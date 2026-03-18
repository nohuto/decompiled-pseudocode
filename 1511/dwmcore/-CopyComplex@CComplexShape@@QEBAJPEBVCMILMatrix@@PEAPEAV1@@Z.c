/*
 * XREFs of ?CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18001C4DC
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?CreateTransformedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@PEAPEAUID2D1TransformedGeometry@@@Z @ 0x18001C62C (-CreateTransformedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@PEAPEAUID2.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180071954 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800B0394 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CComplexShape::CopyComplex(
        CComplexShape *this,
        const struct CMILMatrix *a2,
        struct CComplexShape **a3)
{
  struct ID2D1Geometry *v3; // rdi
  unsigned int v4; // esi
  struct ID2D1Geometry *v5; // r14
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  int D2DFactoryNoRef; // eax
  CComplexShape *v11; // rax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-40h]
  struct ID2D1TransformedGeometry *v15; // [rsp+30h] [rbp-30h] BYREF
  CD2DFactory *v16; // [rsp+38h] [rbp-28h] BYREF
  struct D2D_MATRIX_3X2_F v17; // [rsp+40h] [rbp-20h] BYREF

  v3 = (struct ID2D1Geometry *)*((_QWORD *)this + 1);
  v4 = 0;
  v15 = 0LL;
  v5 = 0LL;
  if ( !v3 )
    goto LABEL_6;
  if ( !a2 )
  {
    v5 = v3;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v3 + 8LL))(v3);
    goto LABEL_6;
  }
  v8 = *(_DWORD *)a2;
  v9 = *((_DWORD *)a2 + 1);
  v16 = 0LL;
  *(_QWORD *)&v17.m11 = __PAIR64__(v9, v8);
  *(_QWORD *)&v17.m[1][0] = *((_QWORD *)a2 + 2);
  *(_QWORD *)&v17.m[2][0] = *((_QWORD *)a2 + 6);
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v16);
  v4 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v14 = 39;
LABEL_18:
    v13 = D2DFactoryNoRef;
    goto LABEL_21;
  }
  D2DFactoryNoRef = CD2DFactory::CreateTransformedGeometry(v16, *((struct ID2D1Geometry **)this + 1), &v17, &v15);
  v4 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v14 = 45;
    goto LABEL_18;
  }
  v5 = v15;
  v15 = 0LL;
LABEL_6:
  v11 = (CComplexShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           16LL);
  if ( v11 )
    v11 = CComplexShape::CComplexShape(v11, v5);
  if ( v11 )
  {
    *a3 = v11;
    goto LABEL_10;
  }
  v4 = -2147024882;
  v14 = 57;
  v13 = -2147024882;
LABEL_21:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
LABEL_10:
  if ( v15 )
    (*(void (__fastcall **)(struct ID2D1TransformedGeometry *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v5 + 16LL))(v5);
  return v4;
}
