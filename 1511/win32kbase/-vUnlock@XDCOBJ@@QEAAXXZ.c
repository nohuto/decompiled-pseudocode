/*
 * XREFs of ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C00C05D0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031A10 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall XDCOBJ::vUnlock(XDCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    XDCOBJ::RestoreAttributes(this);
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
}
