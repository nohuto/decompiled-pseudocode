/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111D5C
 * Callers:
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800BC9F0 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111CC4 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@PEAV-$CMatrix@UPageInPixels@CoordinateSpace@@.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z @ 0x180152F74 (-AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, const struct MilRectF *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // eax
  struct CShape *v7; // rdi
  int v8; // eax
  struct CShape *v10; // [rsp+30h] [rbp-19h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-9h] BYREF
  int v12; // [rsp+58h] [rbp+Fh]
  int v13; // [rsp+5Ch] [rbp+13h]
  int v14; // [rsp+60h] [rbp+17h]
  _BYTE v15[16]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v16; // [rsp+78h] [rbp+2Fh]

  v10 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v11[1] = v15;
  v11[0] = &CRectanglesShape::`vftable';
  v11[2] = v15;
  v12 = 1;
  v13 = 1;
  CRectanglesShape::SetSingleRect((CRectanglesShape *)v11, a2);
  if ( *((_QWORD *)this + 20) )
    goto LABEL_6;
  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         64LL);
  if ( v4 )
  {
    *(_QWORD *)v4 = &CRectanglesShape::`vftable';
    *(_DWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 8) = v4 + 40;
    *(_QWORD *)(v4 + 16) = v4 + 40;
    *(_DWORD *)(v4 + 24) = 1;
    *(_DWORD *)(v4 + 28) = 1;
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  *((_QWORD *)this + 20) = v4;
  if ( v4 )
  {
LABEL_6:
    v6 = CShape::Combine(*((_QWORD *)this + 2), v3, (__int64)v11, (__int64)this + 92, 1, &v10);
    v7 = v10;
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xABu);
    }
    else
    {
      v8 = CComposeTop::AddShapeToLifetime(this, v10);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB7u);
    }
    if ( v7 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v7)(v7, 1LL);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA0u);
  }
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v11);
  return v5;
}
