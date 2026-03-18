/*
 * XREFs of ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025E5E8
 * Callers:
 *     GreRealizePalette @ 0x1C0111C40 (GreRealizePalette.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C02A5DE8 (--1MDCOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0019FD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlockNoNullSet(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  }
}
