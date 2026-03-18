/*
 * XREFs of _PnpCtxRegCloseKey @ 0x14069279C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407555C4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x140755648 (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140783928 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140783B28 (PipCommitPendingService.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
