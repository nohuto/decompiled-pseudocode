/*
 * XREFs of ?AddShapeToLifetime@CComposeTop@@AEAAJPEBVCShape@@@Z @ 0x180152F74
 * Callers:
 *     ?NewContentRendered@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180111D5C (-NewContentRendered@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::AddShapeToLifetime(CComposeTop *this, const struct CShape *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  int v6; // eax
  void (__fastcall ***v7)(_QWORD, __int64); // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
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
    v6 = CShape::Combine(*((_QWORD *)this + 20), (__int64)a2, (__int64)a2, 0LL, 0, &v9);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x11Au);
      if ( v9 )
        (**v9)(v9, 1LL);
    }
    else
    {
      v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
      if ( v7 )
        (**v7)(v7, 1LL);
      *((_QWORD *)this + 20) = v9;
    }
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x114u);
  }
  return v5;
}
