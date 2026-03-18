/*
 * XREFs of ?GetContentBounds@CImageBrush@@MEAAJPEBUBrushContext@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetContentToViewboxScale@CImageBrush@@MEBAJPEAM0@Z @ 0x180085870 (-GetContentToViewboxScale@CImageBrush@@MEBAJPEAM0@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CImageBrush::GetContentBounds(CImageBrush *this, __int64 a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int ContentToViewboxScale; // eax
  float v8; // xmm1_4
  float v10; // [rsp+50h] [rbp+8h] BYREF
  float v11; // [rsp+58h] [rbp+10h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(*((_QWORD *)this + 64) + 8LL) + 184LL))(
         *((_QWORD *)this + 64) + 8LL,
         *(_QWORD *)(a2 + 192),
         0LL,
         a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x135u);
  }
  else
  {
    ContentToViewboxScale = CImageBrush::GetContentToViewboxScale(this, &v10, &v11);
    v6 = ContentToViewboxScale;
    if ( ContentToViewboxScale < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ContentToViewboxScale, 0x137u);
    }
    else
    {
      v8 = v11 * *(float *)(a3 + 12);
      *(float *)(a3 + 8) = v10 * *(float *)(a3 + 8);
      *(float *)(a3 + 12) = v8;
    }
  }
  return v6;
}
