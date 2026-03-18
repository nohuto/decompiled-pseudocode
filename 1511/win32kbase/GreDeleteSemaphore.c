/*
 * XREFs of GreDeleteSemaphore @ 0x1C0059DB0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0038390 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00599A0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0059CD4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteSemaphore @ 0x1C0059DA0 (EngDeleteSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B3CF0 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00BB1EC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00BED30 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0059E20 (MultiUserGreTrackRemoveEngResource.c)
 */

__int64 __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  __int64 result; // rax

  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    return Win32FreePool();
  }
  return result;
}
