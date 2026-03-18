/*
 * XREFs of GetStyleWindow @ 0x1C007A490
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     UnredirectDCEs @ 0x1C0063228 (UnredirectDCEs.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C00632E0 (UserGetRedirectedWindowOrigin.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     SpbCheckDce @ 0x1C0072680 (SpbCheckDce.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0075160 (GreUpdateSpriteVisRgn.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     CalcVisRgn @ 0x1C00D5A60 (CalcVisRgn.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     UpdateRedirectedDCE @ 0x1C011D160 (UpdateRedirectedDCE.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     xxxDesktopPaintCallback @ 0x1C012D500 (xxxDesktopPaintCallback.c)
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0215C30 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserHwndSetRedirectionInfo @ 0x1C02161B0 (NtUserHwndSetRedirectionInfo.c)
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
