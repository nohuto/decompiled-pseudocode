/*
 * XREFs of DrvDbInitializeDatabaseNodeVersion @ 0x1406E3B28
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x1404DD3F0 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x1406E260C (DrvDbSetDriverDatabaseMappedProperty.c)
 */

__int64 __fastcall DrvDbInitializeDatabaseNodeVersion(__int64 **a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  Handle = 0LL;
  v4 = *(_QWORD *)(a2 + 80);
  if ( *a1 )
    v5 = **a1;
  else
    v5 = 0LL;
  v6 = SysCtxRegOpenKey(v5, v4, 0LL, 0, 2u, (__int64)&Handle);
  if ( v6 >= 0 )
    v6 = DrvDbSetDriverDatabaseMappedProperty(
           (__int64)a1,
           *(const wchar_t **)(a2 + 24),
           (__int64)Handle,
           (__int64)&DEVPKEY_DriverDatabase_Version,
           7,
           (PCWSTR)(a2 + 60),
           4u);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
