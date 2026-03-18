/*
 * XREFs of ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C02693CC
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02693E4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bSupportsPNG(XDCOBJ *this)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 76LL) & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 32LL) == 1 )
    return 0LL;
  return result;
}
