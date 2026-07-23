/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x14053E6E4
 * Callers:
 *     BcdFlushStore @ 0x140532F44 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140534100 (BcdForciblyUnloadStore.c)
 *     BcdOpenSystemStore @ 0x14053C46C (BcdOpenSystemStore.c)
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
 *     ZwReleaseMutant @ 0x14015A5F0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
