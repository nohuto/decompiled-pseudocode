/*
 * XREFs of UsbhSetPdoIdleReady @ 0x1C001C3B0
 * Callers:
 *     UsbhBusIf_SuspendChildHub @ 0x1C000B930 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetDx @ 0x1C001FC88 (UsbhPdoSetDx.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055770 (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C470 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbp
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax

  v7 = PdoExt(a2, a2, a3, a4);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v9 = result;
  if ( result )
  {
    Log(a1, 32, 1919306034, 0LL, result);
    v7[444] = 1;
    v13 = FdoExt(a1, v10, v11, v12);
    if ( *((_QWORD *)v13 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, __int64))v13 + 560))(*((_QWORD *)v13 + 529), v9, 1LL);
    return UsbhDerefPdoDeviceHandle(a1, v9, a3, 1232364915LL);
  }
  return result;
}
