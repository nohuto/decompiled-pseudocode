/*
 * XREFs of BiIsOfflineHandle @ 0x14012E08C
 * Callers:
 *     BcdFlushStore @ 0x140532A04 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140533BC0 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14053C8A8 (BcdCloseStore.c)
 *     BcdDeleteElement @ 0x14053D21C (BcdDeleteElement.c)
 *     BcdQueryObject @ 0x14053D33C (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14053D664 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1406D1FA4 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1406D2034 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1406D2088 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
