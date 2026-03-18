/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119E5C
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800EA6F8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119DC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D558 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180078D54 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800790B4 (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180079110 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z @ 0x180119C7C (-AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, struct MilRectF *a2)
{
  CRectangleShape *v4; // rax
  unsigned int v5; // edi
  int v6; // eax
  struct CShape *v7; // rsi
  int v8; // eax
  struct CShape *v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-40h] BYREF

  v10 = 0LL;
  CRectangleShape::CRectangleShape((CRectangleShape *)v11, 0.0, 0.0, 0.0, 0.0);
  CRectangleShape::Set((CRectangleShape *)v11, a2);
  if ( *((_QWORD *)this + 19) )
    goto LABEL_6;
  v4 = (CRectangleShape *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            32LL);
  if ( v4 )
    v4 = CRectangleShape::CRectangleShape(v4, 0.0, 0.0, 0.0, 0.0);
  *((_QWORD *)this + 19) = v4;
  if ( v4 )
  {
LABEL_6:
    v6 = CShape::Combine(*((_QWORD *)this + 2), 0LL, (__int64)v11, (__int64)this + 88, 1, &v10);
    v7 = v10;
    v5 = v6;
    if ( v6 >= 0 )
    {
      v8 = CComposeTop::AddShapeToLifetime(this, v10);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBDu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB1u);
    }
    if ( v7 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v7)(v7, 1LL);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA4u);
  }
  CRectangleShape::~CRectangleShape((CRectangleShape *)v11);
  return v5;
}
