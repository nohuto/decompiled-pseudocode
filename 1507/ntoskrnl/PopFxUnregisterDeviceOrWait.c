/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x140538690
 * Callers:
 *     PoFxAbandonDevice @ 0x140538568 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x1406B37CC (PoFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PopFxLockDevice @ 0x14011BF2C (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
 */

NTSTATUS __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
{
  ULONG_PTR v2; // rax

  _m_prefetchw(&a1[12].Header.WaitListHead);
  if ( (_InterlockedOr((volatile signed __int32 *)&a1[12].Header.WaitListHead, 8u) & 8) != 0 )
    return KeWaitForSingleObject(&a1[4], Executive, 0, 0, 0LL);
  v2 = PopFxLockDevice((__int64)a1, 0);
  if ( v2 )
    return PopFxUnregisterDevice(v2);
  else
    return KeSetEvent(a1 + 4, 0, 0);
}
