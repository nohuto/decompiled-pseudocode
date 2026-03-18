/*
 * XREFs of _PnpCtxRegCopyTree @ 0x1406D7020
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635E44 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgMigrateService @ 0x14063AE30 (PiDevCfgMigrateService.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlCopyTreeInternal @ 0x1406E0128 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegCopyTree(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL), 0);
  else
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, 0LL, 0);
}
