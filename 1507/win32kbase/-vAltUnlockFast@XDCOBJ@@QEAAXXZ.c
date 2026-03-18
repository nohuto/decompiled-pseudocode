/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003BBD8
 * Callers:
 *     GreMarkUndeletableDC @ 0x1C0054AC0 (GreMarkUndeletableDC.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     GreMarkDeletableDC @ 0x1C0070790 (GreMarkDeletableDC.c)
 *     GreMarkDCUnreadable @ 0x1C007E1F0 (GreMarkDCUnreadable.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C003BB20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(XDCOBJ *this)
{
  XDCOBJ::RestoreAttributes(this);
  HmgDecrementShareReferenceCount(*(_QWORD *)this);
}
