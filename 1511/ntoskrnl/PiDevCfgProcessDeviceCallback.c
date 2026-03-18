/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x14053B0A0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PnpSetTargetDeviceRemove @ 0x14049EB40 (PnpSetTargetDeviceRemove.c)
 *     PiDevCfgInitDeviceContext @ 0x14051047C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140514F8C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14053B1A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140607950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  __int64 v5; // rcx
  unsigned int v6; // edx
  int v7; // eax
  _QWORD *v8; // rcx
  int v9; // [rsp+70h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v11[12]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v12; // [rsp+F0h] [rbp+67h] BYREF
  int v13; // [rsp+100h] [rbp+77h] BYREF
  int v14; // [rsp+108h] [rbp+7Fh] BYREF

  LODWORD(v11[0]) = 0;
  memset(&v11[1], 0, 0x40uLL);
  Handle = 0LL;
  v12 = 0;
  v9 = 0;
  v14 = 1;
  v13 = 0;
  if ( *(_QWORD *)(a1 + 48)
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
    v2 = *(_QWORD *)(a1 + 48);
    v13 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v2,
                (__int64)Handle,
                11,
                (__int64)&v14,
                (__int64)&v12,
                (__int64)&v13) >= 0
      && v14 == 4
      && v13 == 4 )
    {
      v3 = v12;
    }
    else
    {
      v3 = 0;
      v12 = 0;
    }
    if ( (v3 & 0x40000) != 0 )
    {
      if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)Handle, v11) < 0 )
        goto LABEL_9;
      LOBYTE(v5) = (PiDevCfgFlags & 2) != 0;
      if ( ((unsigned __int8)v5 & ((v12 & 0x400) != 0)) != 0 )
      {
        v6 = v12 & 0xFFFFFFDF;
      }
      else
      {
        v7 = PiDevCfgCheckDeviceNeedsUpdate(v11, &v9);
        v6 = v12;
        if ( v7 >= 0 )
          v6 = v9 | v12;
      }
      v12 = v6 & 0xFFFBFFFF;
      PiDevCfgSetDeviceRegProp(v5, (__int64)v11, 0xBu, 4u, (__int64)&v12, 4u);
      LOBYTE(v3) = v12;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v8 = *(_QWORD **)(a1 + 32);
      if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
      {
        PnpRequestDeviceAction(v8, 1, 1, 0LL, 0LL, 0LL);
        PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL);
      }
      else
      {
        PnpSetTargetDeviceRemove(v8, 0, 0, 0, 0, 18, -1073740651, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
LABEL_9:
  PiDevCfgFreeDeviceContext(v11);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
