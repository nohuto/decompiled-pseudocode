/*
 * XREFs of PopFxUnregisterDeviceOrWait @ 0x1404A1280
 * Callers:
 *     PoFxAbandonDevice @ 0x1404A1158 (PoFxAbandonDevice.c)
 *     PoFxUnregisterDevice @ 0x140634148 (PoFxUnregisterDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PopFxLockDevice @ 0x1400DA88C (PopFxLockDevice.c)
 *     PopFxUnregisterDevice @ 0x14063517C (PopFxUnregisterDevice.c)
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
