/*
 * XREFs of ndisDereferenceAfNotification @ 0x1C004CAE4
 * Callers:
 *     ndisCreateNotifyQueue @ 0x1C00F31B0 (ndisCreateNotifyQueue.c)
 *     ndisNotifyAfRegistration @ 0x1C00F3430 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00F4650 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisDereferenceAfNotification(__int64 a1)
{
  KIRQL v2; // si
  struct _KEVENT *v3; // rcx

  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_q(0x3Eu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1112), 0xFFFFFFFF) == 1 )
  {
    v3 = *(struct _KEVENT **)(a1 + 1120);
    if ( v3 )
      KeSetEvent(v3, 0, 0);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v2);
  if ( (unsigned __int8)byte_1C008531A >= 4u )
    WPP_SF_q(0x3Fu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, a1);
}
