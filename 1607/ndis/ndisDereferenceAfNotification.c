/*
 * XREFs of ndisDereferenceAfNotification @ 0x1C0051D84
 * Callers:
 *     ndisCreateNotifyQueue @ 0x1C00F3E80 (ndisCreateNotifyQueue.c)
 *     ndisNotifyAfRegistration @ 0x1C00F4100 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00F5440 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall ndisDereferenceAfNotification(__int64 a1)
{
  KIRQL v2; // si
  struct _KEVENT *v3; // rcx

  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_q(0x3Eu, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1120), 0xFFFFFFFF) == 1 )
  {
    v3 = *(struct _KEVENT **)(a1 + 1128);
    if ( v3 )
      KeSetEvent(v3, 0, 0);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v2);
  if ( (unsigned __int8)byte_1C00895DA >= 4u )
    WPP_SF_q(0x3Fu, &WPP_3d0b798491933f9ef0d7aa79c6629068_Traceguids, a1);
}
