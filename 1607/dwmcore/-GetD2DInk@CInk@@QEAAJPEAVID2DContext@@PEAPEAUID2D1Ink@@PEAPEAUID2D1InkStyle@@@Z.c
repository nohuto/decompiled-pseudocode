/*
 * XREFs of ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D758
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D370 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18014D43C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D864 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetD2DInk(CInk *this, struct ID2DContext *a2, struct ID2D1Ink **a3, struct ID2D1InkStyle **a4)
{
  int v5; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int ID2D1InkAndInkStyle; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CD2DInk *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  v5 = *((_DWORD *)this + 8);
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((v5 & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v8;
  if ( (v8 & 6) == 2 )
  {
    ID2D1InkAndInkStyle = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
                            (CInk *)((char *)this + 112),
                            a2,
                            &v13);
    v9 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      v12 = 287;
    }
    else
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, a3, a4);
      v9 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle >= 0 )
        goto LABEL_12;
      v12 = 288;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, v12);
  }
  else
  {
    v9 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x11Cu);
  }
  if ( *a3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    *a3 = 0LL;
  }
  if ( *a4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 16LL))(*a4);
    *a4 = 0LL;
  }
LABEL_12:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v9;
}
