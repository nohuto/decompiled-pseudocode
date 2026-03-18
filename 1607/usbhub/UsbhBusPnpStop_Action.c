/*
 * XREFs of UsbhBusPnpStop_Action @ 0x1C003F500
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C0003EAC (Usbh_BS_BusSuspend.c)
 *     Usbh_BS_BusRun @ 0x1C000CDE4 (Usbh_BS_BusRun.c)
 *     Usbh_BS_BusPause @ 0x1C000D114 (Usbh_BS_BusPause.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhDisablePortIndicators @ 0x1C003DC6C (UsbhDisablePortIndicators.c)
 *     UsbhPCE_Close @ 0x1C00410BC (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1C00412C8 (UsbhPCE_HW_Stop.c)
 *     UsbhDecrementHubIsrWorkerReference @ 0x1C00433E0 (UsbhDecrementHubIsrWorkerReference.c)
 *     UsbhDisablePort @ 0x1C004366C (UsbhDisablePort.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044DC4 (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhFreeTimerObject @ 0x1C0045C80 (UsbhFreeTimerObject.c)
 */

void __fastcall UsbhBusPnpStop_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int16 v14; // r13
  unsigned __int16 i; // bp
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rbx
  void *v21; // rcx
  void *v22; // rcx
  unsigned __int16 v23; // [rsp+60h] [rbp+18h] BYREF

  v6 = FdoExt(a1, a2, a3, a4);
  Log(a1, 2048, 1114862657, 0LL, 0LL);
  UsbhDisablePortIndicators(a1, v7, v8, v9);
  Log(a1, 2048, 1346458929, 0LL, 0LL);
  v13 = *((_QWORD *)v6 + 382);
  v14 = v12 + 1;
  for ( i = v12 + 1; i <= *((unsigned __int8 *)FdoExt(a1, v10, v11, v12) + 2938); i += v14 )
  {
    UsbhPCE_HW_Stop(a1, i, a2);
    UsbhQueryPortState(a1, i, (__int64)&v23, 0LL);
    Log(a1, 2048, 1937010756, v13, v23);
    if ( v16 >= 0 && (v23 & 2) != 0 )
      UsbhDisablePort(a1);
    UsbhPCE_Close(a1, v13, a2);
    v13 += 2928LL;
  }
  Usbh_BusPnpStop_PdoEvent(a1, a2);
  v20 = FdoExt(a1, v17, v18, v19);
  Log(a1, 4, 1212764791, a1, (int)v20[685]);
  UsbhDecrementHubIsrWorkerReference(a1);
  KeWaitForSingleObject(v20 + 686, Executive, 0, 0, 0LL);
  UsbhFreeTimerObject(a1, v6 + 680);
  UsbhFreeTimerObject(a1, v6 + 682);
  UsbhFreeTimerObject(a1, v6 + 692);
  UsbhFreeTimerObject(a1, v6 + 694);
  IoFreeIrp(*((PIRP *)v6 + 333));
  v21 = (void *)*((_QWORD *)v6 + 334);
  *((_QWORD *)v6 + 333) = 0LL;
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    *((_QWORD *)v6 + 334) = 0LL;
  }
  v22 = (void *)*((_QWORD *)v6 + 335);
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    *((_QWORD *)v6 + 335) = 0LL;
  }
}
