/*
 * XREFs of _PnpCtxRegDeletePath @ 0x1406D70AC
 * Callers:
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632EB8 (PiDevCfgClearDeviceMigrationNode.c)
 * Callees:
 *     _RegRtlDeletePathInternal @ 0x1406E06D0 (_RegRtlDeletePathInternal.c)
 */

__int64 __fastcall PnpCtxRegDeletePath(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // r9
  __int64 v7; // rdx

  if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    v5 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
  else
    v5 = 0LL;
  v7 = a3;
  LOBYTE(a3) = a4;
  return RegRtlDeletePathInternal(a2, v7, a3, v5);
}
