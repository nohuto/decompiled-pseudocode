/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C001F0D8
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C000C4B4 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C001FAE0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0055AB8 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C001C0A0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C470 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rax

  v7 = PdoExt(a2, a2, a3, a4);
  v8 = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v9 = v8;
  if ( v8 )
  {
    Log(a1, 32, 1919306033, 0LL, v8);
    v7[444] &= v10;
    v13 = FdoExt(a1, v11, v12, v10);
    if ( *((_QWORD *)v13 + 560) )
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))v13 + 560))(*((_QWORD *)v13 + 529), v9, 0LL);
    UsbhDerefPdoDeviceHandle(a1, v9, a3, 1232235619LL);
  }
}
