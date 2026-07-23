/*
 * XREFs of _PnpCtxRegCreateKey @ 0x140512D88
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DED30 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x14051299C (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140512B14 (_PnpSetPropertyWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D78FC (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DE838 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1404DD8A0 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        char *a2,
        const WCHAR *a3,
        __int64 a4,
        ACCESS_MASK a5,
        void *a6,
        HANDLE *a7,
        ULONG *a8)
{
  if ( a1 && *(_QWORD *)a1 )
    return RegRtlCreateKeyTransacted(a2, a3, 0, a5, a6, 0, a7, a8, *(HANDLE *)(*(_QWORD *)a1 + 8LL));
  else
    return RegRtlCreateKeyTransacted(a2, a3, 0, a5, a6, 0, a7, a8, 0LL);
}
