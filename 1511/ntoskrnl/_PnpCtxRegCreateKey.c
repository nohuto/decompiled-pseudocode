/*
 * XREFs of _PnpCtxRegCreateKey @ 0x14045D0B0
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404444DC (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404ED090 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1405177F8 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405186F0 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x140783928 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140783B28 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x140444F38 (_RegRtlCreateKeyTransacted.c)
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
