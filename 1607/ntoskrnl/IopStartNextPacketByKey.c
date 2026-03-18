/*
 * XREFs of IopStartNextPacketByKey @ 0x1401C96BC
 * Callers:
 *     IopStartNextPacketByKeyEx @ 0x1400AE404 (IopStartNextPacketByKeyEx.c)
 *     IoStartNextPacketByKey @ 0x1401C92C4 (IoStartNextPacketByKey.c)
 * Callees:
 *     IoAcquireCancelSpinLock @ 0x140078440 (IoAcquireCancelSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1401D68CC (KeRemoveByKeyDeviceQueue.c)
 */

void __fastcall IopStartNextPacketByKey(__int64 a1, int a2, ULONG a3)
{
  KIRQL v3; // di
  PKDEVICE_QUEUE_ENTRY v7; // rax
  PKDEVICE_QUEUE_ENTRY v8; // rsi
  KIRQL v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v9 = 0;
  if ( a2 )
  {
    IoAcquireCancelSpinLock(&v9);
    v3 = v9;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = KeRemoveByKeyDeviceQueue((PKDEVICE_QUEUE)(a1 + 160), a3);
  if ( v7 )
  {
    v8 = v7 - 5;
    *(_QWORD *)(a1 + 32) = v7 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v8[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v3);
    }
    (*(void (__fastcall **)(__int64, PKDEVICE_QUEUE_ENTRY))(*(_QWORD *)(a1 + 8) + 96LL))(a1, v8);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v3);
  }
}
