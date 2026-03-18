/*
 * XREFs of GetStyleWindow @ 0x1C0066940
 * Callers:
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0005B40 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C0007C40 (NtUserHwndSetRedirectionInfo.c)
 *     UpdateRedirectedDCE @ 0x1C000B310 (UpdateRedirectedDCE.c)
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     UnredirectDCEs @ 0x1C0010144 (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0012A30 (UserGetRedirectedWindowOrigin.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     CalcVisRgn @ 0x1C005D6D0 (CalcVisRgn.c)
 *     SpbCheckDce @ 0x1C005E760 (SpbCheckDce.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0061170 (GreUpdateSpriteVisRgn.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxSimpleDoSyncPaint @ 0x1C007CE24 (xxxSimpleDoSyncPaint.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00DF69C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 *     xxxDesktopPaintCallback @ 0x1C0151610 (xxxDesktopPaintCallback.c)
 *     xxxPrintWindow @ 0x1C01E7A14 (xxxPrintWindow.c)
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
