/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x140489874
 * Callers:
 *     PiUEventFreeClientRegistrationContext @ 0x140489DA4 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventNotifyClient @ 0x14048A9FC (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x14048D158 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 * Callees:
 *     PiUEventDereferenceEventEntry @ 0x1404898C4 (PiUEventDereferenceEventEntry.c)
 */

void __fastcall PiUEventDequeuePendingEventWorker(__int64 a1, __int64 *a2, char a3)
{
  __int64 v4; // rdx
  __int64 **v5; // rax

  v4 = *a2;
  v5 = (__int64 **)a2[1];
  if ( *(__int64 **)(v4 + 8) != a2 || *v5 != a2 )
    __fastfail(3u);
  *v5 = (__int64 *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  PiUEventDereferenceEventEntry(a2[3]);
  ExFreePoolWithTag(a2, 0x59706E50u);
}
