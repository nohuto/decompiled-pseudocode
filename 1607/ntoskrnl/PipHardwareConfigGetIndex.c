/*
 * XREFs of PipHardwareConfigGetIndex @ 0x140550040
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x1405500C4 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetIndex(__int64 a1, void *a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  Handle = 0LL;
  if ( a2 )
  {
    v4 = PipHardwareConfigOpenKey(a1, a2, &Handle);
    if ( v4 >= 0 )
    {
      LODWORD(v6) = 4;
      v4 = PnpCtxRegQueryValue(v3, Handle, L"Id", &v7, a2, (unsigned int *)&v6);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
