/*
 * XREFs of BiIsOfflineHandle @ 0x14012E5FC
 * Callers:
 *     BcdFlushStore @ 0x140532F44 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140534100 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14053CDE8 (BcdCloseStore.c)
 *     BcdDeleteElement @ 0x14053D75C (BcdDeleteElement.c)
 *     BcdQueryObject @ 0x14053D87C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053DBA4 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1406D20DC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1406D216C (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1406D21C0 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
