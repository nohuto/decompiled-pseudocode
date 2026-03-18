/*
 * XREFs of _PnpCtxRegCreateKey @ 0x14048706C
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x140486C80 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140486DF8 (_PnpSetPropertyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x1404FAC30 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404FBDA0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1406D77C4 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DE700 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1404FA914 (_RegRtlCreateKeyTransacted.c)
 */

__int64 __fastcall PnpCtxRegCreateKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // [rsp+28h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  if ( a1 && *(_QWORD *)a1 )
    v10 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  else
    v10 = 0LL;
  v9 = 0;
  return RegRtlCreateKeyTransacted(a2, a3, 0LL, a5, a6, v9, a7, a8, v10);
}
