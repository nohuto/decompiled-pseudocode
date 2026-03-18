/*
 * XREFs of PiDqDeleteUserObjectFromLoadedHives @ 0x140631668
 * Callers:
 *     PiDqObjectManagerHandleObjectEvent @ 0x1404DE2A0 (PiDqObjectManagerHandleObjectEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404FDB8C (_SysCtxRegOpenKey.c)
 *     PiDqDeleteUserObject @ 0x140631594 (PiDqDeleteUserObject.c)
 *     _PnpCtxRegEnumKey @ 0x1406D70F0 (_PnpCtxRegEnumKey.c)
 */

NTSTATUS __fastcall PiDqDeleteUserObjectFromLoadedHives(int a1, int a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  unsigned int i; // ebx
  __int64 v8; // rcx
  HANDLE v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v12[512]; // [rsp+58h] [rbp-B0h] BYREF

  v9 = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v4 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v4 = 0LL;
  result = SysCtxRegOpenKey(v4, 0LL, (__int64)L"\\REGISTRY\\USER", 0, 8u, (__int64)&v9);
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      LODWORD(v10) = 256;
      result = PnpCtxRegEnumKey(v6, v9, i, v12, &v10);
      if ( result < 0 )
        break;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v8 = **(_QWORD **)&PiPnpRtlCtx;
      else
        v8 = 0LL;
      if ( (int)SysCtxRegOpenKey(v8, (__int64)v9, (__int64)v12, 0, 1u, (__int64)Handle) >= 0 )
      {
        PiDqDeleteUserObject((__int64)Handle[0], a1, a2);
        ZwClose(Handle[0]);
      }
    }
  }
  if ( v9 )
    return ZwClose(v9);
  return result;
}
