/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180137610
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180137564 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // r14
  int FirstAvailableD2DContext; // eax
  struct ID2DContext *v11; // rsi
  unsigned int v12; // edi
  int v13; // eax
  struct ID2DContext *v15; // [rsp+60h] [rbp+8h] BYREF

  v6 = a6;
  v15 = 0LL;
  *a6 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)(a1 - 24),
                               &v15);
  v11 = v15;
  v12 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v15 + 264LL))(
            v15,
            a2,
            a3,
            a4,
            a5,
            v6);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1B8u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x1B2u);
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v11 + 16LL))(v11);
  return v12;
}
