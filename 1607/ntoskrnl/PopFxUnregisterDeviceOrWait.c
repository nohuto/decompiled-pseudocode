/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x1404C7B8C
 * Callers:
 *     PoFxAbandonDevice @ 0x1404C61AC (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x14066C560 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     PopFxLockDevice @ 0x14009EDE0 (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x14066D58C (PopFxUnregisterDevice.c)
 */

LONG __fastcall PopFxUnregisterDeviceOrWait(struct _KEVENT *a1)
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
