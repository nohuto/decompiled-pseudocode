/*
 * XREFs of ?PreCompute@CHwndRenderTargetRemoteApp@@UEAAJXZ @ 0x1800FA6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::PreCompute(struct CVisualTree **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisualTree::PreCompute(this[7], 0LL);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x74u);
  return v2;
}
