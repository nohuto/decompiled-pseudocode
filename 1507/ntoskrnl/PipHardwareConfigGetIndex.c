/*
 * XREFs of PipHardwareConfigGetIndex @ 0x14058F3C0
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x14058F444 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetIndex(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int Value; // ebx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  Handle = 0LL;
  if ( a2 )
  {
    Value = PipHardwareConfigOpenKey(a1, a2, &Handle);
    if ( Value >= 0 )
    {
      LODWORD(v6) = 4;
      Value = PnpCtxRegQueryValue(v3, Handle, (__int64)L"Id", (__int64)&v7, a2, (__int64)&v6);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Value;
}
