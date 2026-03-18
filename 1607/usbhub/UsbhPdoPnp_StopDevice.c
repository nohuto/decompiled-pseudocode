/*
 * XREFs of UsbhPdoPnp_StopDevice @ 0x1C0054C90
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003C04 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C001B744 (SET_PDO_SWPNPSTATE.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0053C34 (UsbhCloseDeviceConfiguration.c)
 */

__int64 __fastcall UsbhPdoPnp_StopDevice(ULONG_PTR a1, IRP *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r9
  int v10; // eax
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = PdoExt(a1, (__int64)a2, a3, a4);
  v7 = *((_QWORD *)v6 + 147);
  if ( !v7 )
    UsbhTrapFatal_Dbg(0LL, a1);
  Log(v7, 256, 1399874671, (__int64)a2, 0LL);
  SET_PDO_SWPNPSTATE(a1, 103LL, 4LL, v8);
  v10 = UsbhCloseDeviceConfiguration(*((_QWORD *)v6 + 147), a1, &v12, v9);
  Log(*((_QWORD *)v6 + 147), 256, 1936745522, (__int64)a2, v10);
  UsbhUnlinkPdoDeviceHandle(*((_QWORD *)v6 + 147), a1, 2017740854, 1);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
