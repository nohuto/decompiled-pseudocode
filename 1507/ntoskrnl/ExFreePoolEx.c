/*
 * XREFs of ExFreePoolEx @ 0x140123144
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     CmpCheckKeyBodyAccess @ 0x1404C17F0 (CmpCheckKeyBodyAccess.c)
 *     ObCheckCreateObjectAccess @ 0x1404D0EC4 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 *     SmProcessCreateRequest @ 0x1404F946C (SmProcessCreateRequest.c)
 *     SmpKeyedStoreCreate @ 0x1404F9F74 (SmpKeyedStoreCreate.c)
 *     SmCrEncCleanup @ 0x1404FA2D0 (SmCrEncCleanup.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 *     ObpCheckTraverseAccess @ 0x1406ABF00 (ObpCheckTraverseAccess.c)
 *     SmProcessListRequest @ 0x1406D97B8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 *     SmcCacheCleanup @ 0x1406DAEB8 (SmcCacheCleanup.c)
 *     SmcCacheDelete @ 0x1406DAF34 (SmcCacheDelete.c)
 *     SmcStoreCreate @ 0x1406DB7E4 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1406DBA20 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1406DBDB4 (SmcStoreResize.c)
 *     SmcStoreSlotAbort @ 0x1406DC14C (SmcStoreSlotAbort.c)
 *     SmcStoreSlotReserve @ 0x1406DC350 (SmcStoreSlotReserve.c)
 *     SmKmFileInfoCleanup @ 0x1406DC94C (SmKmFileInfoCleanup.c)
 *     SmKmKeyGenKeyDelete @ 0x1406DCEF0 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenNewKey @ 0x1406DD190 (SmKmKeyGenNewKey.c)
 *     SmKmStoreFileGetExtents @ 0x1406DDE9C (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreePoolEx(PPRIVILEGE_SET Privileges)
{
  ExFreePoolWithTag(Privileges, 0);
}
