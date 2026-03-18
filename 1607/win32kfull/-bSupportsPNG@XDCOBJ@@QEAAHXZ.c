/*
 * XREFs of ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1C02662DC
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0266338 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
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
