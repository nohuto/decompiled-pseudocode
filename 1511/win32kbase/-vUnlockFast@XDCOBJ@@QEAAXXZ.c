/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00319F0
 * Callers:
 *     GreSelectBrush @ 0x1C006E460 (GreSelectBrush.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C0070EB0 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     GreSelectPen @ 0x1C00B3090 (GreSelectPen.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  XDCOBJ::RestoreAttributes(this);
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
