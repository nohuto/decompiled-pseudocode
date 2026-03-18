/*
 * XREFs of GreDeleteSemaphore @ 0x1C006A130
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0069C90 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C006A050 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteSemaphore @ 0x1C006A120 (EngDeleteSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00BE240 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00C6ECC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C00CAA00 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C006A1A0 (MultiUserGreTrackRemoveEngResource.c)
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
