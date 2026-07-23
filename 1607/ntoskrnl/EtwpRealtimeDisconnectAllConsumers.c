/*
 * XREFs of EtwpRealtimeDisconnectAllConsumers @ 0x1404945AC
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     EtwpShutdownConsumers @ 0x1404944FC (EtwpShutdownConsumers.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 */

void __fastcall EtwpRealtimeDisconnectAllConsumers(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rdi
  __int64 v4; // rax
  struct _KEVENT *v5; // rcx

  v2 = (__int64 **)(a1 + 328);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    --*(_DWORD *)(a1 + 344);
    v5 = (struct _KEVENT *)v3[6];
    *((_BYTE *)v3 + 90) |= 4u;
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(v3);
  }
}
