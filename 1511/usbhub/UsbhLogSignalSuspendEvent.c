/*
 * XREFs of UsbhLogSignalSuspendEvent @ 0x1C0026510
 * Callers:
 *     Usbh_PCE_wDone_Action @ 0x1C0017DA0 (Usbh_PCE_wDone_Action.c)
 *     UsbhSignalSuspendEvent @ 0x1C00419C0 (UsbhSignalSuspendEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042A38 (UsbhiSignalSuspendEvent.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 __fastcall UsbhLogSignalSuspendEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  KSPIN_LOCK *v7; // rbp
  KIRQL v8; // r14

  v6 = 0;
  v7 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 1236);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  Log(a1, 16, 1936282453, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 744), 0, 0);
    v6 = 1;
  }
  KeReleaseSpinLock(v7, v8);
  return v6;
}
