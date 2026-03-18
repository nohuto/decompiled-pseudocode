/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x1403EF44C
 * Callers:
 *     PiUEventNotifyClient @ 0x1403F0784 (PiUEventNotifyClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14048A41C (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleGetEvent @ 0x14048CB44 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 * Callees:
 *     PiUEventDereferenceEventEntry @ 0x1403EF49C (PiUEventDereferenceEventEntry.c)
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
