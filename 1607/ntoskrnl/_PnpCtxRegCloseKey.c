/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406D7150
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14023B224 (DrvDbGetConfigurationSubKeyCallback.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     PipProcessPendingOsExtensionResources @ 0x1407BB858 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1407BB8DC (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x1407CEE24 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
