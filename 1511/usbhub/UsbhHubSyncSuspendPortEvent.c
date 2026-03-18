/*
 * XREFs of UsbhHubSyncSuspendPortEvent @ 0x1C0040A90
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C000F3F8 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhSuspendPort @ 0x1C001CE34 (UsbhSuspendPort.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     Usbh_PcLogEntry @ 0x1C00429B8 (Usbh_PcLogEntry.c)
 *     UsbhGetPortStatusBits @ 0x1C00439AC (UsbhGetPortStatusBits.c)
 */

__int64 __fastcall UsbhHubSyncSuspendPortEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char PortStatusBits; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  __int16 v10; // bx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // [rsp+28h] [rbp-50h]
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF
  int v20; // [rsp+90h] [rbp+18h] BYREF

  v19 = a2;
  PortStatusBits = 0;
  FdoExt(a1, a2, a3, a4);
  Log(a1, 512, 1885697579, a3, *(unsigned __int16 *)(a3 + 4));
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v18 = *(unsigned __int16 *)(a3 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      0x57u,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      v18,
      0LL);
  }
  v9 = *(_DWORD *)(a3 + 400);
  if ( (UsbhQueryPortState(a1, *(_WORD *)(a3 + 4), &v19, &v20) & 0xC0000000) != 0xC0000000 )
  {
    v10 = v19;
    if ( (v19 & 1) != 0 )
    {
      v11 = UsbhLatchPdo(a1, *(_WORD *)(a3 + 4), 0LL, 0x7350444Fu);
      v14 = v11;
      if ( v11 )
        PortStatusBits = UsbhGetPortStatusBits(v13, v12, &v19, v11);
      *(_WORD *)(a3 + 420) = v10;
      Usbh_PcLogEntry(a1, a3, v14, 0x10000000, 0, v10, PortStatusBits, 0);
      if ( v14 )
        UsbhUnlatchPdo(a1, v14, 0LL, 0x7350444Fu);
      if ( (UsbhSuspendPort(a1, *(unsigned __int16 *)(a3 + 4), v15, v16) & 0xC0000000) != 0xC0000000 )
        return 5;
    }
  }
  return v9;
}
