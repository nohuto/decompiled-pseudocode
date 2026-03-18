/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0028D68
 * Callers:
 *     GreMarkUndeletableDC @ 0x1C00207F0 (GreMarkUndeletableDC.c)
 *     DestroyCacheDC @ 0x1C005A3A0 (DestroyCacheDC.c)
 *     GreMarkDCUnreadable @ 0x1C0082754 (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C0082C20 (GreMarkDeletableDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0028CB0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  XDCOBJ::RestoreAttributes(this);
  HmgDecrementShareReferenceCount(*(_QWORD *)this);
}
