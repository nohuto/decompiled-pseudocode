/*
 * XREFs of PiCreateDriverSwDevices @ 0x14050FA08
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14051230C (PnpDeviceObjectToDeviceInstance.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1405634B4 (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall PiCreateDriverSwDevices(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp-10h] BYREF
  int v7; // [rsp+38h] [rbp-8h]
  HANDLE v8; // [rsp+50h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v8 = 0LL;
  v2 = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 131097LL);
  if ( v2 >= 0 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v3 = **(_QWORD **)&PiPnpRtlCtx;
    else
      v3 = 0LL;
    v4 = SysCtxRegOpenKey(v3, (__int64)Handle, (__int64)L"Devices", 0, 0x20019u, (__int64)&v8);
    v2 = v4;
    if ( v4 >= 0 )
    {
      v7 = 0;
      v6 = a1;
      v2 = PnpCtxRegEnumKeyWithCallback(*(_QWORD *)&PiPnpRtlCtx, v8, PiCreateDriverSwDeviceCallback, &v6);
      if ( v2 >= 0 && v7 < 0 )
        v2 = v7;
    }
    else if ( v4 == -1073741772 )
    {
      v2 = 0;
    }
  }
  if ( v8 )
    ZwClose(v8);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v2;
}
