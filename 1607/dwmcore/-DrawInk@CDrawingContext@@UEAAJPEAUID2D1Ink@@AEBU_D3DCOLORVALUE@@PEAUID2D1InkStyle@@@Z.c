/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801226C0
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D370 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18006F230 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // r9d
  unsigned int v16; // [rsp+20h] [rbp-38h]

  v4 = (unsigned __int64)this + 128;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 128)) )
  {
    v10 = -2147467263;
    v16 = 2151;
    v14 = -2147467263;
    goto LABEL_13;
  }
  v9 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 2139;
    goto LABEL_10;
  }
  v11 = *((_DWORD *)this + 83);
  v12 = 0;
  if ( v11 )
  {
    v13 = v11 - 1;
    if ( v13 )
    {
      if ( v13 == 3 )
        v12 = 2;
    }
    else
    {
      v12 = 1;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct ID2D1Ink *, const struct _D3DCOLORVALUE *, struct ID2D1InkStyle *, bool, int))(**((_QWORD **)this + 57) + 184LL))(
         *((_QWORD *)this + 57),
         v4 & -(__int64)(this != 0LL),
         a2,
         a3,
         a4,
         *((_DWORD *)this + 82) != 0,
         v12);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 2147;
LABEL_10:
    v14 = v9;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v16);
  }
  return v10;
}
