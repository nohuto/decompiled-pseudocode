/*
 * XREFs of UsbhCancelResetTimeout @ 0x1C000FBE4
 * Callers:
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x1C001EA00 (UsbhReset1Complete.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhCancelEnumeration @ 0x1C0026DB0 (UsbhCancelEnumeration.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044578 (UsbhSoftDisconnectPdo.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050570 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C0050D10 (UsbhReset1Debounce.c)
 *     UsbhReset1DropDevice @ 0x1C0050F30 (UsbhReset1DropDevice.c)
 *     UsbhReset2CycleDevice @ 0x1C0051410 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C0051470 (UsbhReset2DropDevice.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhWait @ 0x1C001E700 (UsbhWait.c)
 *     UsbhReferenceListRemove @ 0x1C0024EB0 (UsbhReferenceListRemove.c)
 *     UsbhWaitForResetTimeout @ 0x1C0026964 (UsbhWaitForResetTimeout.c)
 *     UsbhCancelQueuedTimeout @ 0x1C0026F6C (UsbhCancelQueuedTimeout.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 */

void __fastcall UsbhCancelResetTimeout(__int64 a1, __int64 a2, int a3)
{
  char v5; // bp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // rdi
  KSPIN_LOCK *v11; // rdi
  KIRQL v12; // r12
  void *v13; // r10
  KIRQL v14; // al
  KIRQL v15; // al
  KIRQL v16; // r10

  v5 = 1;
  Log(*(_QWORD *)(a2 + 16), 4, 1667322452, a2, *(unsigned __int16 *)(a2 + 4));
  v9 = *(_QWORD *)(a2 + 16);
  if ( !v9 )
    UsbhTrapFatal_Dbg(0LL, 0LL, v7, v8);
  v10 = *(_DWORD **)(v9 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(v9, 0LL, v7, v8);
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(v9, *(_QWORD *)(v9 + 64), v7, v8);
  v11 = (KSPIN_LOCK *)(v10 + 1236);
  if ( KeCancelTimer((PKTIMER)(a2 + 552)) )
  {
    v12 = KeAcquireSpinLockRaiseToDpc(v11);
    Log(*(_QWORD *)(a2 + 16), 4, 1667322417, a2, _InterlockedExchange64((volatile __int64 *)(a2 + 680), 0LL));
    *(_DWORD *)(a2 + 696) = 0;
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    if ( !a3 )
      *(_DWORD *)(a2 + 696) = 0;
    Log(*(_QWORD *)(a2 + 16), 4, 1667323992, a2, *(unsigned __int16 *)(a2 + 4));
    KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
    if ( *(_DWORD *)(a2 + 696) == 1 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeReleaseSpinLock(v11, v12);
      UsbhWait(a1, 50LL);
    }
    else
    {
      KeReleaseSpinLock(v11, v12);
    }
    if ( a3 == 1 )
      UsbhDisablePort(a1);
  }
  else
  {
    v5 = 0;
    v15 = KeAcquireSpinLockRaiseToDpc(v11);
    if ( *(_DWORD *)(a2 + 696) == 4 )
    {
      KeReleaseSpinLock(v11, v15);
      if ( !(unsigned __int8)UsbhCancelQueuedTimeout(a1, a2) )
        UsbhWaitForResetTimeout(a1, a2);
    }
    else
    {
      Log(*(_QWORD *)(a2 + 16), 4, 1668768052, 0, *(unsigned __int16 *)(a2 + 4));
      KeReleaseSpinLock(v11, v16);
      UsbhWaitForResetTimeout(a1, a2);
      UsbhCancelQueuedTimeout(a1, a2);
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc(v11);
  KeReleaseSpinLock(v11, v14);
  if ( v5 )
    UsbhReferenceListRemove(*(_QWORD *)(a2 + 16), a2 + 552);
}
