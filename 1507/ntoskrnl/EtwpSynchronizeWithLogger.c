/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x14054D790
 * Callers:
 *     EtwpFlushTrace @ 0x14054D090 (EtwpFlushTrace.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x14054D698 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x1400A4880 (KeInsertQueueDpc.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 472);
  KeResetEvent((PRKEVENT)(a1 + 472));
  _InterlockedOr((volatile signed __int32 *)(a1 + 836), a2);
  if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
  {
    KeSetEvent((PRKEVENT)(a1 + 496), 0, 0);
  }
  else if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 836), 8u) )
  {
    KeInsertQueueDpc((PRKDPC)(a1 + 584), 0LL, 0LL);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 56);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 56) = 0;
  return v5;
}
