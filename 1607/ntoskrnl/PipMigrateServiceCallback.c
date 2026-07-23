/*
 * XREFs of PipMigrateServiceCallback @ 0x1407CEE24
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x1404DFCAC (_PnpCtxRegOpenKey.c)
 *     PiDevCfgMigrateService @ 0x14063AEE4 (PiDevCfgMigrateService.c)
 *     _PnpCtxRegCloseKey @ 0x1406D7150 (_PnpCtxRegCloseKey.c)
 */

__int64 __fastcall PipMigrateServiceCallback(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rcx
  void *v6; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( (int)PnpCtxRegOpenKey(a1, a2, a3, 0, 983103, (__int64)&v6) >= 0 )
    PiDevCfgMigrateService(v4, a3, v6);
  if ( v6 )
    PnpCtxRegCloseKey(v4, v6);
  return 0LL;
}
