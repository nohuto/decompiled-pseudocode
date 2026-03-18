/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C001F1D8
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C001D9C0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0021590 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055948 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001FB10 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001FC80 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbp
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rax

  v7 = PdoExt(a2, a2, a3, a4);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v9 = result;
  if ( result )
  {
    Log(a1, 32, 1919306033, 0LL, result);
    v7[444] &= v10;
    v13 = FdoExt(a1, v11, v12, v10);
    if ( *((_QWORD *)v13 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v13 + 560))(*((_QWORD *)v13 + 529), v9, 0LL);
    return UsbhDerefPdoDeviceHandle(a1, v9, a3, 1232235619LL);
  }
  return result;
}
