/*
 * XREFs of ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006190
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00062E4 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048F10 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0049954 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

__int64 __fastcall ACPIDeviceIrpWaitWakeRequestPending(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rsi
  char v7; // r8
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v14; // [rsp+48h] [rbp-10h]
  KIRQL Irql; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a4 + 40);
  v5 = qword_1C002C340;
  v6 = *(_QWORD *)(a4 + 200);
  v7 = 0;
  v10 = qword_1C002C340;
  if ( v4 )
  {
    v11 = v4[1];
    v7 = *(_QWORD *)(a4 + 40);
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v5 = (__int64 *)v4[70];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (__int64 *)v4[71];
    }
  }
  v14 = (__int64)v10;
  LOBYTE(v10) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v10,
    17,
    34,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a4,
    a2,
    v7,
    (__int64)v5,
    v14);
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  ++*(_DWORD *)(a4 + 112);
  if ( a2 < 0 )
  {
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    *(_DWORD *)(a4 + 256) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(a4);
  }
  else
  {
    v12 = (__int64 *)qword_1C0073FD8;
    if ( *(__int64 **)qword_1C0073FD8 != &AcpiPowerWaitWakeList )
      __fastfail(3u);
    *(_QWORD *)a4 = &AcpiPowerWaitWakeList;
    *(_QWORD *)(a4 + 8) = v12;
    *v12 = a4;
    qword_1C0073FD8 = a4;
    if ( *(_BYTE *)(v6 + 68) )
    {
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      ACPIDeviceCancelWaitWakeIrp(v4[90], v6);
    }
    else
    {
      *(_DWORD *)(a4 + 56) |= 0x40u;
      ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
      _InterlockedExchange64((volatile __int64 *)(v6 + 104), (__int64)ACPIDeviceCancelWaitWakeIrp);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(Irql);
    }
  }
  return ACPIDereferenceWaitWakePowerRequest(a4);
}
