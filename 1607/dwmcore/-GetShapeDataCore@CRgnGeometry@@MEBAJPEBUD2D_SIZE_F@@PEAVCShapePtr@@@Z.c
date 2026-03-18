/*
 * XREFs of ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002FB50
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18002C248 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x18002C2C8 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRgnGeometry::GetShapeDataCore(
        CRgnGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v5; // edi
  void *(__fastcall *v6)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CRegionShape *v7; // rax
  CRegionShape *v8; // rbx
  const struct tagRECT *v9; // rdx

  v5 = 0;
  v6 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v6 == WPF::ProcessHeapImpl::Alloc )
    v7 = (CRegionShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v7 = (CRegionShape *)v6(WPF::g_pProcessHeap, 16uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_QWORD *)v7 + 1) = 0LL;
    *(_QWORD *)v7 = &CRegionShape::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = (const struct tagRECT *)*((_QWORD *)this + 23);
    if ( v9 )
      CRegionShape::BuildFromRects(v8, v9, *((_DWORD *)this + 44) >> 4);
    else
      CRegionShape::SetEmpty(v8);
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v8;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x29u);
  }
  return v5;
}
