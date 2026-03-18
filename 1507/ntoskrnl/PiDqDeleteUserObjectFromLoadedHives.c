/*
 * XREFs of PiDqDeleteUserObjectFromLoadedHives @ 0x140681F74
 * Callers:
 *     PiDqObjectManagerHandleObjectEvent @ 0x140542A88 (PiDqObjectManagerHandleObjectEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14058BF10 (_PnpCtxRegEnumKey.c)
 *     PiDqDeleteUserObject @ 0x140681EA0 (PiDqDeleteUserObject.c)
 */

NTSTATUS __fastcall PiDqDeleteUserObjectFromLoadedHives(int a1, int a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  __int64 v6; // rcx
  int i; // ebx
  __int64 v8; // rcx
  HANDLE v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h] BYREF
  WCHAR v12[256]; // [rsp+58h] [rbp-B0h] BYREF

  v9 = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v4 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v4 = 0LL;
  result = SysCtxRegOpenKey(v4, 0LL, L"\\REGISTRY\\USER", 0, 8u, &v9);
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      LODWORD(v10) = 256;
      result = PnpCtxRegEnumKey(v6, v9);
      if ( result < 0 )
        break;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v8 = **(_QWORD **)&PiPnpRtlCtx;
      else
        v8 = 0LL;
      if ( (int)SysCtxRegOpenKey(v8, (char *)v9, v12, 0, 1u, &Handle) >= 0 )
      {
        PiDqDeleteUserObject((__int64)Handle, a1, a2);
        ZwClose(Handle);
      }
    }
  }
  if ( v9 )
    return ZwClose(v9);
  return result;
}
