/*
 * XREFs of ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4
 * Callers:
 *     sub_1C005E7E0 @ 0x1C005E7E0 (sub_1C005E7E0.c)
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 *     sub_1C00A64F0 @ 0x1C00A64F0 (sub_1C00A64F0.c)
 *     sub_1C00BF1C0 @ 0x1C00BF1C0 (sub_1C00BF1C0.c)
 *     sub_1C00BF2D0 @ 0x1C00BF2D0 (sub_1C00BF2D0.c)
 *     sub_1C00C5900 @ 0x1C00C5900 (sub_1C00C5900.c)
 *     DxgkIsPrimarySource @ 0x1C00C6310 (DxgkIsPrimarySource.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C00D7050 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012BCF0 (-DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C012C2FC (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C01465A4 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016FE50 (DpiEnableMsBddFallbackDriver.c)
 *     sub_1C0182FB0 @ 0x1C0182FB0 (sub_1C0182FB0.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsBddFallbackDriver(DXGADAPTER *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 71);
  return (v1 & 0x20) != 0 && (v1 & 4) != 0;
}
