/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x140550338
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140571E34 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14068D60C (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405504A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDevice @ 0x14067E214 (PnpDisableDevice.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  void *v4; // rsi
  int v5; // r13d
  int v7; // r12d
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  void *v10; // r14
  _DWORD *v11; // rdi
  int v12; // eax
  HANDLE v13; // r8
  __int64 v14; // rdx
  char v15; // al
  char v16; // al
  int v18; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+44h] [rbp-Ch] BYREF
  void *v20; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+58h] BYREF

  Handle = a1;
  v4 = 0LL;
  v5 = a3;
  v20 = 0LL;
  v7 = 0;
  v8 = 1;
  v9 = PnpDeviceObjectFromDeviceInstance((__int64)a2, (__int64)a2, a3, a4);
  v10 = v9;
  if ( v9 )
    v11 = *(_DWORD **)(v9[39] + 40LL);
  else
    v11 = 0LL;
  if ( v11 && ((v11[99] & 0x2000) != 0 && v11[101] == 22 || (v11[99] & 0x2000) != 0 && v11[101] == 29) )
    goto LABEL_23;
  v12 = PnpUnicodeStringToWstr(&v20, 0LL, a2);
  v4 = v20;
  if ( v12 < 0 )
    goto LABEL_23;
  v13 = Handle;
  if ( !Handle )
  {
    if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v20, 0x10u, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
    {
      v13 = Handle;
      v7 = 1;
      goto LABEL_8;
    }
LABEL_23:
    v8 = 0;
    goto LABEL_15;
  }
LABEL_8:
  v22 = 0;
  v18 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v4,
              (__int64)v13,
              11,
              (__int64)&v19,
              (__int64)&v22,
              (__int64)&v18) < 0
    || v19 == 4 && v18 == 4 )
  {
    v15 = v22;
  }
  else
  {
    v15 = 0;
    v22 = 0;
  }
  if ( (v15 & 1) != 0 )
  {
    v16 = 1;
    v22 = 1;
  }
  else
  {
    PnpGetDeviceInstanceCsConfigFlags(a2, v14, &v22);
    v16 = v22;
  }
  if ( (v16 & 7) != 0 )
  {
    v8 = 0;
    if ( v5 )
    {
      if ( v11 && v11[75] != 769 )
        PnpDisableDevice(v11, 22LL);
    }
  }
LABEL_15:
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v7 )
    ZwClose(Handle);
  if ( v4 )
    PnpUnicodeStringToWstrFree(v4, (__int64)a2);
  return v8;
}
