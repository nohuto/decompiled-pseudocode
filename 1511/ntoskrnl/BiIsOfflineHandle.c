/*
 * XREFs of BiIsOfflineHandle @ 0x14011BBD4
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1404F4C48 (BcdForciblyUnloadStore.c)
 *     PopBcdClearPendingResume @ 0x1404FBDA4 (PopBcdClearPendingResume.c)
 *     BcdCloseStore @ 0x1404FBE3C (BcdCloseStore.c)
 *     BcdQueryObject @ 0x1404FC68C (BcdQueryObject.c)
 *     BcdDeleteElement @ 0x1404FC728 (BcdDeleteElement.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1404FCD44 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1404FD0D8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1404FD444 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14068D774 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14068D7EC (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14068D82C (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
