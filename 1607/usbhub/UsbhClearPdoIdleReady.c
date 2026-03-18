/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C00210BC
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C001ACE0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0022BF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00560E8 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C00202C0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0020430 (UsbhRefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00295A0 (_guard_dispatch_icall_nop.c)
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
