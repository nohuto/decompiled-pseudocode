/*
 * XREFs of IopStartNextPacket @ 0x14014F528
 * Callers:
 *     IoStartNextPacket @ 0x14014F418 (IoStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x14014F444 (IopStartNextPacketByKeyEx.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     KeRemoveDeviceQueue @ 0x14014F5A4 (KeRemoveDeviceQueue.c)
 */

void __fastcall IopStartNextPacket(__int64 a1, int a2)
{
  KIRQL v2; // di
  PKDEVICE_QUEUE_ENTRY v5; // rax
  PKDEVICE_QUEUE_ENTRY v6; // rbp
  UCHAR Irql; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  Irql = 0;
  if ( a2 )
  {
    IoAcquireCancelSpinLock(&Irql);
    v2 = Irql;
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = KeRemoveDeviceQueue((PKDEVICE_QUEUE)(a1 + 160));
  if ( v5 )
  {
    v6 = v5 - 5;
    *(_QWORD *)(a1 + 32) = v5 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v6[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v2);
    }
    (*(void (__fastcall **)(__int64, PKDEVICE_QUEUE_ENTRY))(*(_QWORD *)(a1 + 8) + 96LL))(a1, v6);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
  }
}
