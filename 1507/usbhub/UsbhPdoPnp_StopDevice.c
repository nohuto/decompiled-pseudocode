/*
 * XREFs of UsbhPdoPnp_StopDevice @ 0x1C00546E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C00084E0 (SET_PDO_SWPNPSTATE.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C005362C (UsbhCloseDeviceConfiguration.c)
 */

__int64 __fastcall UsbhPdoPnp_StopDevice(ULONG_PTR a1, IRP *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v6 = PdoExt(a1, (__int64)a2, a3, a4);
  v7 = *((_QWORD *)v6 + 147);
  if ( !v7 )
    UsbhTrapFatal_Dbg(0LL, a1);
  Log(v7, 256, 1399874671, (__int64)a2, 0LL);
  SET_PDO_SWPNPSTATE(a1, 103, 4);
  v9 = UsbhCloseDeviceConfiguration(*((_QWORD *)v6 + 147), a1, &v11, v8);
  Log(*((_QWORD *)v6 + 147), 256, 1936745522, (__int64)a2, v9);
  UsbhUnlinkPdoDeviceHandle(*((_QWORD *)v6 + 147), a1, 2017740854, 1);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
