/*
 * XREFs of ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800DBE20
 * Callers:
 *     <none>
 * Callees:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180027E60 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18002A1D4 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18002E1C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059230 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z @ 0x180067ED4 (-PopRenderParameter@CComposition@@QEAAJW4Enum@MilVisualRenderParameterType@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800F4C14 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PostSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v4; // esi
  struct CVisual *CurrentVisual; // rbx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r9
  int v11; // eax
  int v12; // r9d
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 1;
  v4 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  if ( (*((_BYTE *)CurrentVisual + 90) & 1) != 0 )
  {
    v6 = *((_QWORD *)this - 3);
    v7 = *(_DWORD *)(v6 + 1040);
    if ( v7 )
      *(_DWORD *)(v6 + 1040) = v7 - 1;
  }
  if ( (*((_BYTE *)CurrentVisual + 89) & 1) != 0 )
  {
    --*((_DWORD *)this + 1427);
    *((_BYTE *)CurrentVisual + 89) &= ~1u;
  }
  while ( (int)CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
                 (int *)this + 94,
                 &v14) >= 0
       && *((struct CVisual **)&v14 + 1) == CurrentVisual )
  {
    v8 = CDrawingContext::Pop((CDrawingContext *)((char *)this - 48));
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1614u);
      break;
    }
  }
  if ( *((char *)CurrentVisual + 89) < 0
    && *(_BYTE *)(*((_QWORD *)this + 685) + 32LL)
    && (CDrawingContext::CalcClippedNodeWorldSpaceBounds((__int64)this - 48, (__int64)CurrentVisual, &v14),
        v9 = CDrawingContext::RedrawVisual((CDrawingContext *)((char *)this - 48), (struct MilRectF *)&v14),
        v4 = v9,
        v9 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x231Fu);
  }
  else
  {
    v10 = 0LL;
    if ( *((_DWORD *)CurrentVisual + 188) )
    {
      while ( 1 )
      {
        v11 = CComposition::PopRenderParameter(
                *((_QWORD *)this - 3),
                *(_DWORD *)(*((_QWORD *)CurrentVisual + 91) + 24 * v10));
        v4 = v11;
        if ( v11 < 0 )
          break;
        v10 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v10 >= *((_DWORD *)CurrentVisual + 188) )
          return v4;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2329u);
    }
  }
  return v4;
}
