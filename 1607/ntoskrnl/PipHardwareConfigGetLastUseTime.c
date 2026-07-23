/*
 * XREFs of PipHardwareConfigGetLastUseTime @ 0x14062999C
 * Callers:
 *     PnpGetStableSystemBootTime @ 0x14062D8CC (PnpGetStableSystemBootTime.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x1405500C4 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigGetLastUseTime(__int64 a1, void *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  Handle = 0LL;
  if ( a2 )
  {
    v3 = PipHardwareConfigOpenKey(a1, (__int64)a2, &Handle);
    if ( v3 >= 0 )
    {
      LODWORD(v6) = 8;
      v3 = PnpCtxRegQueryValue(v4, Handle, L"LastUse", &v7, a2, (unsigned int *)&v6);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
