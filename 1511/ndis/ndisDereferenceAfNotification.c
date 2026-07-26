/*
 * XREFs of ndisDereferenceAfNotification @ 0x1C004D324
 * Callers:
 *     ndisCreateNotifyQueue @ 0x1C00ED190 (ndisCreateNotifyQueue.c)
 *     ndisNotifyAfRegistration @ 0x1C00ED410 (ndisNotifyAfRegistration.c)
 *     ndisMFinishQueuedPendingOpen @ 0x1C00EE7B0 (ndisMFinishQueuedPendingOpen.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisDereferenceAfNotification(__int64 a1)
{
  KIRQL v2; // si
  struct _KEVENT *v3; // rcx

  if ( (unsigned __int8)byte_1C008371A >= 4u )
    WPP_SF_q(0x3Eu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1112), 0xFFFFFFFF) == 1 )
  {
    v3 = *(struct _KEVENT **)(a1 + 1120);
    if ( v3 )
      KeSetEvent(v3, 0, 0);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v2);
  if ( (unsigned __int8)byte_1C008371A >= 4u )
    WPP_SF_q(0x3Fu, &WPP_d29b05a9accab437aa613ff999d87cb7_Traceguids, a1);
}
