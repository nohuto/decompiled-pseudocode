/*
 * XREFs of UsbhSetPdoIdleReady @ 0x1C001FA4C
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C001F100 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetDx @ 0x1C002208C (UsbhPdoSetDx.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055600 (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001FB10 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
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
