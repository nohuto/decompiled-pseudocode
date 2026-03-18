/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x1404FD760
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1404F4C48 (BcdForciblyUnloadStore.c)
 *     BcdOpenSystemStore @ 0x1404FB6B8 (BcdOpenSystemStore.c)
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
 *     ZwReleaseMutant @ 0x140150A20 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
