/*
 * XREFs of MiDeleteSubsection @ 0x1400E9408
 * Callers:
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     ObCheckCreateObjectAccess @ 0x14046E3E0 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140470650 (ObCheckObjectAccess.c)
 *     SmCrEncCleanup @ 0x1404D1300 (SmCrEncCleanup.c)
 *     SmpKeyedStoreCreate @ 0x1404D1574 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1404D185C (SmProcessCreateRequest.c)
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 *     ObpCheckTraverseAccess @ 0x14062E1F0 (ObpCheckTraverseAccess.c)
 *     SmProcessListRequest @ 0x1406574E4 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1406581B8 (SmcProcessCreateRequest.c)
 *     SmcCacheCleanup @ 0x140658A44 (SmcCacheCleanup.c)
 *     SmcCacheDelete @ 0x140658AC0 (SmcCacheDelete.c)
 *     SmcStoreCreate @ 0x140659274 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1406594B0 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x1406597BC (SmcStoreResize.c)
 *     SmcStoreSlotAbort @ 0x140659AC0 (SmcStoreSlotAbort.c)
 *     SmcStoreSlotReserve @ 0x140659C4C (SmcStoreSlotReserve.c)
 *     SmKmFileInfoCleanup @ 0x14065A208 (SmKmFileInfoCleanup.c)
 *     SmKmKeyGenKeyDelete @ 0x14065A710 (SmKmKeyGenKeyDelete.c)
 *     SmKmKeyGenNewKey @ 0x14065A96C (SmKmKeyGenNewKey.c)
 *     SmKmStoreFileGetExtents @ 0x14065B648 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 * Callees:
 *     <none>
 */

void __stdcall MiDeleteSubsection(PPRIVILEGE_SET Privileges)
{
  ExFreePoolWithTag(Privileges, 0);
}
