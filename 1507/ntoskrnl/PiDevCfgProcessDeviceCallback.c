/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x1405B1FA0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpSetTargetDeviceRemove @ 0x1405353A4 (PnpSetTargetDeviceRemove.c)
 *     PiDevCfgInitDeviceContext @ 0x14058A12C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405B20A8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14068CBF4 (PiDevCfgSetDeviceRegProp.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  unsigned int v5; // edx
  int v6; // eax
  _QWORD *v7; // rcx
  int v8; // [rsp+70h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v10[12]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v11; // [rsp+F0h] [rbp+67h] BYREF
  int v12; // [rsp+100h] [rbp+77h] BYREF
  int v13; // [rsp+108h] [rbp+7Fh] BYREF

  LODWORD(v10[0]) = 0;
  memset(&v10[1], 0, 0x40uLL);
  Handle = 0LL;
  v11 = 0;
  v8 = 0;
  v13 = 1;
  v12 = 0;
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
    v12 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v2,
                (__int64)Handle,
                11,
                (__int64)&v13,
                (__int64)&v11,
                (__int64)&v12) >= 0
      && v13 == 4
      && v12 == 4 )
    {
      v3 = v11;
    }
    else
    {
      v3 = 0;
      v11 = 0;
    }
    if ( (v3 & 0x40000) != 0 )
    {
      if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)Handle, v10) < 0 )
        goto LABEL_9;
      if ( (PiDevCfgFlags & 2) != 0 && (v11 & 0x400) != 0 )
      {
        v5 = v11 & 0xFFFFFFDF;
      }
      else
      {
        v6 = PiDevCfgCheckDeviceNeedsUpdate(v10, &v8);
        v5 = v11;
        if ( v6 >= 0 )
          v5 = v8 | v11;
      }
      v11 = v5 & 0xFFFBFFFF;
      PiDevCfgSetDeviceRegProp(PiPnpRtlCtx, (unsigned int)v10, 11, 4, (__int64)&v11, 4);
      LOBYTE(v3) = v11;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v7 = *(_QWORD **)(a1 + 32);
      if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
      {
        PnpRequestDeviceAction(v7, 1, 1, 0LL, 0LL, 0LL);
        PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL);
      }
      else
      {
        PnpSetTargetDeviceRemove(v7, 0, 0, 0, 0, 18, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
LABEL_9:
  PiDevCfgFreeDeviceContext(v10);
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
