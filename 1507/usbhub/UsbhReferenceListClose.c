/*
 * XREFs of UsbhReferenceListClose @ 0x1C004A764
 * Callers:
 *     Usbh_PnpRemove @ 0x1C004BDB0 (Usbh_PnpRemove.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x1C00257E0 (UsbhReferenceListRemove.c)
 */

void __fastcall UsbhReferenceListClose(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rsi

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  v6 = FdoExt(a1, v3, v4, v5);
  Log(a1, 8, 1919312716, *((unsigned __int8 *)v6 + 2480), 0LL);
  if ( *((_BYTE *)v6 + 2480) )
  {
    *((_BYTE *)v6 + 2480) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v2);
    UsbhReferenceListRemove(a1, a1);
    KeWaitForSingleObject(v6 + 622, Executive, 0, 0, 0LL);
  }
  else
  {
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v2);
  }
}
