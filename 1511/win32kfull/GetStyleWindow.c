/*
 * XREFs of GetStyleWindow @ 0x1C0054CF0
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0007AC0 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C0009D40 (NtUserHwndSetRedirectionInfo.c)
 *     SpbCheckDce @ 0x1C004C480 (SpbCheckDce.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C004EF40 (GreUpdateSpriteVisRgn.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0067FF4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     CalcVisRgn @ 0x1C006AE10 (CalcVisRgn.c)
 *     UnredirectDCEs @ 0x1C007A574 (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A940 (UserGetRedirectedWindowOrigin.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 *     UpdateRedirectedDCE @ 0x1C00FBE70 (UpdateRedirectedDCE.c)
 *     xxxDesktopPaintCallback @ 0x1C010D470 (xxxDesktopPaintCallback.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 *     xxxPrintWindow @ 0x1C01E7E84 (xxxPrintWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStyleWindow(__int64 a1, int a2)
{
  __int64 v2; // r10

  v2 = a1;
  if ( !a1 )
    return a1;
  do
  {
    if ( ((unsigned __int8)a2 & *(_BYTE *)(BYTE1(a2) + a1 + 40)) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 88);
  }
  while ( a1 );
  if ( a1 && (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29D && a1 != v2 && (a2 == 2848 || a2 == 2568) )
    return 0LL;
  else
    return a1;
}
