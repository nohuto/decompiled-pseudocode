/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x14053E1A4
 * Callers:
 *     BcdFlushStore @ 0x140532A04 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140533BC0 (BcdForciblyUnloadStore.c)
 *     BcdOpenSystemStore @ 0x14053BF2C (BcdOpenSystemStore.c)
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
 *     ZwReleaseMutant @ 0x14015A080 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
