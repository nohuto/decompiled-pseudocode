/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18010CBC0
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D510 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180037090 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180046830 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // ecx
  int v13; // ebp
  int v14; // ecx
  unsigned int v16; // [rsp+20h] [rbp-48h]

  v4 = (unsigned __int64)this + 56;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 56)) )
  {
    v10 = -2147467263;
    v16 = 2158;
    v11 = -2147467263;
    goto LABEL_13;
  }
  v9 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 2146;
LABEL_4:
    v11 = v9;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v16);
    return v10;
  }
  v12 = *((_DWORD *)this + 63);
  v13 = 0;
  if ( v12 )
  {
    v14 = v12 - 1;
    if ( v14 )
    {
      if ( v14 == 3 )
        v13 = 2;
    }
    else
    {
      v13 = 1;
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, struct ID2D1Ink *, const struct _D3DCOLORVALUE *, struct ID2D1InkStyle *, bool, int))(**((_QWORD **)this + 47) + 192LL))(
         *((_QWORD *)this + 47),
         v4 & -(__int64)(this != 0LL),
         a2,
         a3,
         a4,
         *((_DWORD *)this + 62) != 0,
         v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    v16 = 2154;
    goto LABEL_4;
  }
  return v10;
}
