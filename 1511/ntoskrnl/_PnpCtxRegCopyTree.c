/*
 * XREFs of _PnpCtxRegCopyTree @ 0x1406927A4
 * Callers:
 *     PiDevCfgConfigureSoftwareDevices @ 0x140514214 (PiDevCfgConfigureSoftwareDevices.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegCopyTree(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL), 0);
  else
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, 0LL, 0);
}
