/*
 * XREFs of ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18014D43C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D864 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  struct ID2D1Ink *v4; // rdi
  struct ID2D1InkStyle *v5; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  int ID2D1InkAndInkStyle; // eax
  int v10; // eax
  struct ID2D1Ink *v12; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1InkStyle *v13; // [rsp+38h] [rbp-28h] BYREF
  CD2DInk *v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v7 = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
         (struct IDeviceResourceNotify *)(a1 + 112),
         0LL,
         &v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x18u);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v14, &v12, &v13);
    v8 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x1Au);
      v4 = v12;
      v5 = v13;
    }
    else
    {
      v4 = v12;
      v5 = v13;
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)v12 + 104LL))(
              v12,
              v13,
              0LL,
              &v15);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Cu);
      else
        *a4 = v15;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}
