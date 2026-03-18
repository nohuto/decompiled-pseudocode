/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z @ 0x180130ACC
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FCDEC (-NewContentRendered@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800165BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  CRectangleShape *v4; // rax
  unsigned int v5; // edi
  int v6; // eax
  void (__fastcall ***v7)(_QWORD, __int64); // rsi
  void (__fastcall ***v8)(_QWORD, __int64); // r14
  void (__fastcall ***v10)(_QWORD, __int64); // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
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
    v6 = CShape::Combine(*((_QWORD *)this + 19), 0LL, (__int64)a2, 0LL, 0, &v10);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 19);
      if ( v8 )
        (**v8)(*((_QWORD *)this + 19), 1LL);
      *((_QWORD *)this + 19) = v10;
      v7 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x122u);
      v7 = v10;
    }
    if ( v7 )
      (**v7)(v7, 1LL);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x11Au);
  }
  return v5;
}
