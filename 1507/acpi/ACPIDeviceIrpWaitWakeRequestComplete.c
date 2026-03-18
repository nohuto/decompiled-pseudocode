/*
 * XREFs of ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C0037DC8
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006B50 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C0041FD8 (ACPIWakeCompleteRequestQueue.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C0008154 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C000B0B0 (ACPIDeviceInternalQueueRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIDeviceIrpWaitWakeRequestComplete(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 v5; // rdx
  KIRQL v6; // bp
  __int64 v7; // r14
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned __int8 v10; // r8
  void (__fastcall *v11)(__int64, _QWORD, _QWORD); // rbx
  KIRQL v12; // al
  KIRQL Irql; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v5 = *(unsigned int *)(a1 + 56);
  v6 = v3;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 0x40) != 0 )
  {
    KeReleaseSpinLock(&AcpiPowerQueueLock, v3);
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
    if ( (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)(v1 + 104), 0LL);
      *(_DWORD *)(a1 + 56) &= ~0x40u;
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
    IoReleaseCancelSpinLock(Irql);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  }
  if ( (*(_QWORD *)(v7 + 904) & 0x500000000LL) != 0 )
  {
    if ( *(int *)(a1 + 256) >= 0 )
    {
      PoSetSystemWake((PIRP)v1);
      v11 = *(void (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 192);
      if ( v11 )
      {
        KeReleaseSpinLock(&AcpiPowerQueueLock, v6);
        v11(v7, *(_QWORD *)(a1 + 200), *(unsigned int *)(a1 + 256));
        v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
        *(_QWORD *)(a1 + 192) = 0LL;
        v6 = v12;
      }
    }
  }
  else
  {
    v8 = *(_DWORD *)(v7 + 448);
    v9 = ACPIGpeIndexToGpeRegister(v8, v5, v4);
    v10 = 1 << (v8 & 7);
    if ( AcpiPowerSavedGpeBitsValid
      && (v10 & *((_BYTE *)GpeSavedWakeMask + v9)) != 0
      && (v10 & *((_BYTE *)GpeSavedWakeStatus + v9)) != 0 )
    {
      AcpiPowerSavedGpeBitsValid = 0;
      PoSetSystemWake((PIRP)v1);
    }
  }
  ACPIDeviceInternalQueueRequest(v7, (__int64 *)a1, *(_DWORD *)(a1 + 56));
  KeReleaseSpinLock(&AcpiPowerQueueLock, v6);
}
