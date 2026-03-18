/*
 * XREFs of UsbhSetResumePending @ 0x1C0025250
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x1C000D1E0 (Usbh_PCE_Resume_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSetPcqEventStatus @ 0x1C00252D0 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSetResumePending(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v6; // rbx
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // al

  v6 = (KSPIN_LOCK *)FdoExt(a1, a2, a3, a4);
  UsbhSetPcqEventStatus(a1, a2, 1LL, 10LL);
  v7 = v6 + 618;
  v8 = KeAcquireSpinLockRaiseToDpc(v6 + 618);
  *(_BYTE *)(a2 + 2838) = 0;
  LOBYTE(v6) = v8;
  *(_DWORD *)(a2 + 696) = 3;
  KeResetEvent((PRKEVENT)(a2 + 712));
  KeReleaseSpinLock(v7, (KIRQL)v6);
}
