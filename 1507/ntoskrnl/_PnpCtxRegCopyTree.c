/*
 * XREFs of _PnpCtxRegCopyTree @ 0x140712344
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x140683E18 (PiDevCfgConfigureSoftwareDevices.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegCopyTree(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL), 0);
  else
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, 0LL, 0);
}
