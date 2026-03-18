/*
 * XREFs of PipHardwareConfigGetLastUseTime @ 0x14067A45C
 * Callers:
 *     PnpGetStableSystemBootTime @ 0x14067E2EC (PnpGetStableSystemBootTime.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x14058F444 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetLastUseTime(__int64 a1, __int64 a2)
{
  int Value; // ebx
  __int64 v4; // rcx
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
      LODWORD(v6) = 8;
      Value = PnpCtxRegQueryValue(v4, Handle, (__int64)L"LastUse", (__int64)&v7, a2, (__int64)&v6);
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
