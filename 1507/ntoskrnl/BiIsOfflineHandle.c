/*
 * XREFs of BiIsOfflineHandle @ 0x14014FE60
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140569050 (BcdForciblyUnloadStore.c)
 *     PopBcdClearPendingResume @ 0x14056E3CC (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 *     BcdQueryObject @ 0x14056F12C (BcdQueryObject.c)
 *     BcdDeleteElement @ 0x14056F1C8 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14056F7E4 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14070D28C (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14070D304 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14070D344 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
