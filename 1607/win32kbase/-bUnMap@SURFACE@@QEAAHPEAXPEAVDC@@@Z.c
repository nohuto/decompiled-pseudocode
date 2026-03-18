/*
 * XREFs of ?bUnMap@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0025D50
 * Callers:
 *     ?bUnMap@SURFREFVIEW@@QEAAHXZ @ 0x1C0075790 (-bUnMap@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C000D7B8 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C000D8F0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMap(SURFACE *this, void *a2, struct DC *a3)
{
  W32PIDLOCK *v4; // rbx

  if ( (*((_QWORD *)this + 31) || (*((_DWORD *)this + 29) & 1) != 0) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v4 = (SURFACE *)((char *)this + 272);
    W32PIDLOCK::vUnlockSingleThread((SURFACE *)((char *)this + 272));
    W32PIDLOCK::vUnlockSimple(v4);
  }
  return 1LL;
}
