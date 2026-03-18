/*
 * XREFs of ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x18000DEB0
 * Callers:
 *     ?UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisualImage@@_NAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180003688 (-UpdateNodeCVIRenderTarget@CDrawingContext@@QEAAXPEBVCVisualTree@@PEAVCVisual@@PEAVCCachedVisual.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z @ 0x18000D48C (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800AF228 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 */

void CThreadContext::UnregisterGraphWalkRoot(void)
{
  int Current; // eax
  __int64 v1; // rdx
  CPtrArrayBase *v2; // [rsp+40h] [rbp+8h] BYREF

  Current = CThreadContext::GetCurrent(&v2);
  if ( Current < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Current, 0x8Cu);
  }
  else
  {
    if ( (*(_QWORD *)v2 & 2) != 0 )
      v1 = *(_QWORD *)(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v1 = *(_QWORD *)v2 & 1LL;
    CPtrArrayBase::RemoveAt(v2, v1 - 1);
  }
}
