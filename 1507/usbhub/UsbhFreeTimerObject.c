/*
 * XREFs of UsbhFreeTimerObject @ 0x1C00458D8
 * Callers:
 *     UsbhBusPnpStart @ 0x1C001CED0 (UsbhBusPnpStart.c)
 *     UsbhBusPnpStop_Action @ 0x1C003EFB0 (UsbhBusPnpStop_Action.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001A5B0 (UsbhDisableTimerObject.c)
 */

void __fastcall UsbhFreeTimerObject(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rbx
  KIRQL v10; // al
  KIRQL v11; // r14

  v6 = (KSPIN_LOCK *)FdoExt(a1, (__int64)a2, a3, a4);
  Log(a1, 0x2000, 1718773076, (__int64)a2, *a2);
  v9 = (void *)*a2;
  if ( *a2 )
  {
    UsbhDisableTimerObject(a1, *a2, v7, v8);
    v10 = KeAcquireSpinLockRaiseToDpc(v6 + 466);
    *a2 = 0LL;
    v11 = v10;
    Log(a1, 0x2000, 1718768689, (__int64)v9, 0LL);
    ExFreePoolWithTag(v9, 0);
    KeReleaseSpinLock(v6 + 466, v11);
  }
}
