/*
 * XREFs of _PnpCtxRegCreateKey @ 0x1404DDA14
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404DA910 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x1404DAFEC (_PnpSetPropertyWorker.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DDCF8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _CmCreateOrdinalInstanceKey @ 0x14058A6E4 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x14058BF2C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407FA0AC (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407FA2AC (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlCreateKeyTransacted @ 0x1404DE7D8 (_RegRtlCreateKeyTransacted.c)
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
