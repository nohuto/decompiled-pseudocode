/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x14057171C
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PnpSetTargetDeviceRemove @ 0x140484C7C (PnpSetTargetDeviceRemove.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14050E7C8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceContext @ 0x140639568 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140641064 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1)
{
  bool v2; // zf
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // eax
  _QWORD *v9; // rcx
  int v10; // [rsp+70h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  _DWORD v12[24]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v13; // [rsp+F0h] [rbp+67h] BYREF
  int v14; // [rsp+100h] [rbp+77h] BYREF
  int v15; // [rsp+108h] [rbp+7Fh] BYREF

  v12[0] = 0;
  memset(&v12[2], 0, 0x40uLL);
  v2 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle = 0LL;
  v13 = 0;
  v10 = 0;
  v15 = 1;
  v14 = 0;
  if ( !v2
    && *(_QWORD *)(a1 + 48)
    && (int)CmOpenDeviceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a1 + 48),
              0x10u,
              0,
              983103,
              0,
              (__int64)&Handle,
              0LL) >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    v14 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v3,
                (__int64)Handle,
                11,
                (__int64)&v15,
                (__int64)&v13,
                (__int64)&v14,
                0) >= 0
      && v15 == 4
      && v14 == 4 )
    {
      v4 = v13;
    }
    else
    {
      v4 = 0;
      v13 = 0;
    }
    if ( (v4 & 0x40000) != 0 )
    {
      if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), Handle, v12) < 0 )
        goto LABEL_10;
      LOBYTE(v6) = (PiDevCfgFlags & 2) != 0;
      if ( ((unsigned __int8)v6 & ((v13 & 0x400) != 0)) != 0 )
      {
        v7 = v13 & 0xFFFFFFDF;
      }
      else
      {
        v8 = PiDevCfgCheckDeviceNeedsUpdate(v12, &v10);
        v7 = v13;
        if ( v8 >= 0 )
          v7 = v10 | v13;
      }
      v13 = v7 & 0xFFFBFFFF;
      PiDevCfgSetDeviceRegProp(v6, (unsigned int)v12, 11, 4, (__int64)&v13, 4);
      LOBYTE(v4) = v13;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v9 = *(_QWORD **)(a1 + 32);
      if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
      {
        PnpRequestDeviceAction(v9, 1, 1, 0LL, 0LL, 0LL);
        PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL);
      }
      else
      {
        PnpSetTargetDeviceRemove(v9, 0, 0, 0, 0, 18, -1073740651, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
LABEL_10:
  PiDevCfgFreeDeviceContext((__int64)v12);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
