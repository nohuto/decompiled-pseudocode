/*
 * XREFs of _PnpCtxRegCloseKey @ 0x14071233C
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407E6EF4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407E6F78 (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407FA0AC (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407FA2AC (PipCommitPendingService.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
