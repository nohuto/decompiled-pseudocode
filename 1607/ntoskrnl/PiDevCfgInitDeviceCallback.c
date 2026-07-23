/*
 * XREFs of PiDevCfgInitDeviceCallback @ 0x140639400
 * Callers:
 *     <none>
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x1404DF2D0 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14050E7C8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceContext @ 0x140639568 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140641064 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PiDevCfgInitDeviceCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // al
  int v9; // ecx
  int v11; // [rsp+40h] [rbp-9h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-5h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-1h] BYREF
  _DWORD v14[20]; // [rsp+50h] [rbp+7h] BYREF
  int v15; // [rsp+B0h] [rbp+67h] BYREF
  int v16; // [rsp+C8h] [rbp+7Fh] BYREF

  v14[0] = 0;
  memset(&v14[2], 0, 0x40uLL);
  v5 = *(_DWORD *)(a1 + 28);
  v6 = *(_QWORD *)(a1 + 16);
  Handle = 0LL;
  v15 = 0;
  v12 = 0;
  v16 = 0;
  v11 = 1;
  if ( (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, v6, v5, 983103, 0, (__int64)&Handle, 0LL, 0) >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v16 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v7,
                (__int64)Handle,
                11,
                (__int64)&v11,
                (__int64)&v15,
                (__int64)&v16,
                0) >= 0
      && v11 == 4
      && v16 == 4 )
    {
      v8 = v15;
    }
    else
    {
      v8 = 0;
      v15 = 0;
    }
    if ( (v8 & 0x20) == 0 )
    {
      if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 16), Handle, v14) < 0 )
        goto LABEL_13;
      if ( (int)PiDevCfgCheckDeviceNeedsUpdate((__int64)v14, &v12) >= 0 && v12 )
      {
        v15 |= v12;
        PiDevCfgSetDeviceRegProp(v9, (unsigned int)v14, 11, 4, (__int64)&v15, 4);
      }
    }
    *a3 = 0;
  }
LABEL_13:
  PiDevCfgFreeDeviceContext((__int64)v14);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
