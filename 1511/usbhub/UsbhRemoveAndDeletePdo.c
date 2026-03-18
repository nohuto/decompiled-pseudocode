/*
 * XREFs of UsbhRemoveAndDeletePdo @ 0x1C0054E24
 * Callers:
 *     UsbhDeleteOrphanPdo @ 0x1C00537EC (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhFreeID @ 0x1C00058A4 (UsbhFreeID.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 */

void __fastcall UsbhRemoveAndDeletePdo(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  KIRQL v6; // bl
  KIRQL v7; // bp

  v5 = PdoExt((__int64)a1, a2, a3, a4);
  RtlFreeUnicodeString((PUNICODE_STRING)(v5 + 662));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  UsbhFreeID((__int64)(v5 + 522));
  UsbhFreeID((__int64)(v5 + 518));
  UsbhFreeID((__int64)(v5 + 526));
  UsbhFreeID((__int64)(v5 + 534));
  UsbhFreeID((__int64)(v5 + 530));
  UsbhFreeID((__int64)(v5 + 538));
  UsbhFreeID((__int64)(v5 + 542));
  UsbhFreeID((__int64)(v5 + 546));
  UsbhFreeID((__int64)(v5 + 554));
  UsbhFreeID((__int64)(v5 + 550));
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v6);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 348);
  if ( v5[698] == 1 )
  {
    v5[698] = 0;
    USBD_RemoveDeviceFromGlobalList(a1);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v5 + 348, v7);
  IoDeleteDevice(a1);
}
