/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C002FA28
 * Callers:
 *     ?vInit@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002F378 (-vInit@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002F9BC (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 * Callees:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap_0 @ 0x1C0001100 (DEVLOCKOBJ_bPrepareTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0 @ 0x1C0001108 (IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0.c)
 */

__int64 __fastcall DEVLOCKOBJ::bPrepareTrgDco(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  if ( (int)IsDEVLOCKOBJ_bPrepareTrgDcoSupported_0() < 0 )
    return 0LL;
  else
    return DEVLOCKOBJ_bPrepareTrgDcoWrap_0();
}
