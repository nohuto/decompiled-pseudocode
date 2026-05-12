/*
 * XREFs of StorSetIoGatewayEmptyEvent @ 0x1C0034C28
 * Callers:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0053274 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall StorSetIoGatewayEmptyEvent(__int64 a1, struct _KEVENT *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1, &LockHandle);
  if ( *(_DWORD *)(a1 + 192) )
    *(_QWORD *)(a1 + 200) = a2;
  else
    KeSetEvent(a2, 0, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
