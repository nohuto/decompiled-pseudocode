/*
 * XREFs of UsbhSignalPauseEvent @ 0x1C001D304
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C001D1CC (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C0020810 (Usbh_PCE_psPAUSED_Action.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhSignalPauseEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r10
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // si

  FdoExt(a1, a2, a3, a4);
  Log(a1, 16, 1936281683, 0LL, *(unsigned __int16 *)(a2 + 4));
  v7 = (KSPIN_LOCK *)(v6 + 4944);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 4944));
  if ( *(_QWORD *)(a2 + 792) )
  {
    *(_QWORD *)(a2 + 792) = 0LL;
    KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
  }
  KeReleaseSpinLock(v7, v8);
}
