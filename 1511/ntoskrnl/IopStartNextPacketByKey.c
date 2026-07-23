/*
 * XREFs of IopStartNextPacketByKey @ 0x1401BB850
 * Callers:
 *     IopStartNextPacketByKeyEx @ 0x14011B10C (IopStartNextPacketByKeyEx.c)
 *     IoStartNextPacketByKey @ 0x1401BB4C8 (IoStartNextPacketByKey.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1401C7920 (KeRemoveByKeyDeviceQueue.c)
 */

void __fastcall IopStartNextPacketByKey(__int64 a1, int a2, ULONG a3)
{
  KIRQL v3; // di
  PKDEVICE_QUEUE_ENTRY v7; // rax
  PKDEVICE_QUEUE_ENTRY v8; // rsi
  UCHAR v9; // [rsp+38h] [rbp+10h] BYREF

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
