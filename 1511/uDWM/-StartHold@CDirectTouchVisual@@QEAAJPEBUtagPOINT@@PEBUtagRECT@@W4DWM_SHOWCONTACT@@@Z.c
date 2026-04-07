/*
 * XREFs of ?StartHold@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180046FC0
 * Callers:
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047320 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180046E00 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180046E74 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::StartHold(__int64 a1, const struct tagPOINT *a2, const struct tagRECT *a3)
{
  float v6; // xmm3_4
  double v7; // xmm1_8

  CDirectTouchVisual::StopTimer((CDirectTouchVisual *)a1);
  v6 = *(float *)(a1 + 344);
  *(_DWORD *)(a1 + 352) = -1;
  *(_BYTE *)(a1 + 384) = 0;
  CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)a1, a2, a3, v6);
  CImage::SetBitmapSource(*(CImage **)(a1 + 392), *(struct CBitmapSource **)(a1 + 400));
  if ( (*(_BYTE *)(a1 + 352) & 8) != 0 )
    v7 = DOUBLE_1_0;
  else
    v7 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v7);
  return 0LL;
}
