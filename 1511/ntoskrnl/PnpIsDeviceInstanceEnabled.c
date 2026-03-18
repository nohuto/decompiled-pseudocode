/*
 * XREFs of PnpIsDeviceInstanceEnabled @ 0x1404EFA28
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140507FA4 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14060DBD0 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404EFB98 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpDisableDevice @ 0x1406033A8 (PnpDisableDevice.c)
 */

__int64 __fastcall PnpIsDeviceInstanceEnabled(void *a1, unsigned __int16 *a2, int a3)
{
  void *v3; // rsi
  int v6; // r12d
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  void *v9; // r14
  _DWORD *v10; // rdi
  int v11; // eax
  HANDLE v12; // r8
  __int64 v13; // rdx
  char v14; // al
  char v15; // al
  int v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+44h] [rbp-Ch] BYREF
  void *v19; // [rsp+48h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+40h] BYREF
  int v21; // [rsp+A8h] [rbp+58h] BYREF

  Handle = a1;
  v3 = 0LL;
  v19 = 0LL;
  v6 = 0;
  v7 = 1;
  v8 = PnpDeviceObjectFromDeviceInstance((__int64)a2);
  v9 = v8;
  if ( v8 )
    v10 = *(_DWORD **)(v8[39] + 40LL);
  else
    v10 = 0LL;
  if ( v10 && ((v10[99] & 0x2000) != 0 && v10[101] == 22 || (v10[99] & 0x2000) != 0 && v10[101] == 29) )
    goto LABEL_23;
  v11 = PnpUnicodeStringToWstr(&v19, 0LL, a2);
  v3 = v19;
  if ( v11 < 0 )
    goto LABEL_23;
  v12 = Handle;
  if ( !Handle )
  {
    if ( (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v19, 0x10u, 0, 131097, 0, (__int64)&Handle, 0LL) >= 0 )
    {
      v12 = Handle;
      v6 = 1;
      goto LABEL_8;
    }
LABEL_23:
    v7 = 0;
    goto LABEL_15;
  }
LABEL_8:
  v21 = 0;
  v17 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v3,
              (__int64)v12,
              11,
              (__int64)&v18,
              (__int64)&v21,
              (__int64)&v17) < 0
    || v18 == 4 && v17 == 4 )
  {
    v14 = v21;
  }
  else
  {
    v14 = 0;
    v21 = 0;
  }
  if ( (v14 & 1) != 0 )
  {
    v15 = 1;
    v21 = 1;
  }
  else
  {
    PnpGetDeviceInstanceCsConfigFlags(a2, v13, &v21);
    v15 = v21;
  }
  if ( (v15 & 7) != 0 )
  {
    v7 = 0;
    if ( a3 )
    {
      if ( v10 && v10[75] != 769 )
        PnpDisableDevice(v10, 22LL);
    }
  }
LABEL_15:
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v6 )
    ZwClose(Handle);
  if ( v3 )
    PnpUnicodeStringToWstrFree(v3, (__int64)a2);
  return v7;
}
