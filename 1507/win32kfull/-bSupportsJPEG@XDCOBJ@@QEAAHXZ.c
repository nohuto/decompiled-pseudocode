/*
 * XREFs of ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C02693B0
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02693E4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSupportsJPEG(XDCOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx

  v1 = *(_QWORD *)this;
  v2 = 1;
  if ( (*(_DWORD *)(v1 + 76) & 1) == 0 || *(_DWORD *)(v1 + 32) == 1 )
    return 0;
  return v2;
}
