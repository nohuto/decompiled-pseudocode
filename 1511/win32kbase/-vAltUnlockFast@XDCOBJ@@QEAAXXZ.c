/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031AC8
 * Callers:
 *     GreMarkUndeletableDC @ 0x1C0044580 (GreMarkUndeletableDC.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 *     GreMarkDCUnreadable @ 0x1C006D6A0 (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C007F670 (GreMarkDeletableDC.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  XDCOBJ::RestoreAttributes(this);
  HmgDecrementShareReferenceCount(*(_QWORD *)this);
}
