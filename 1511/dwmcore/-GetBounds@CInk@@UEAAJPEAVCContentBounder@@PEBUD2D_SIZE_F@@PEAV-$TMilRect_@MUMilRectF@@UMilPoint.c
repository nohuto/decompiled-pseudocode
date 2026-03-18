/*
 * XREFs of ?GetBounds@CInk@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D810
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18012D5E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18012DA5C (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  int v5; // eax
  unsigned int v6; // edi
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1Ink *v8; // rsi
  struct ID2D1InkStyle *v9; // r14
  int v10; // eax
  struct ID2D1InkStyle *v12; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1Ink *v13; // [rsp+38h] [rbp-28h] BYREF
  CD2DInk *v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v5 = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
         (struct IDeviceResourceNotify *)(a1 + 40),
         0LL,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v14, &v13, &v12);
    v8 = v13;
    v6 = ID2D1InkAndInkStyle;
    v9 = v12;
    if ( ID2D1InkAndInkStyle >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)v13 + 104LL))(
              v13,
              v12,
              0LL,
              &v15);
      v6 = v10;
      if ( v10 >= 0 )
        *a4 = v15;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Cu);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x1Au);
    }
    if ( v8 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v9 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x18u);
  }
  return v6;
}
