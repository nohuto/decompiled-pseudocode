/*
 * XREFs of DbgkpCloseObject @ 0x14061822C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     DbgkpMarkProcessPeb @ 0x1406184F4 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140619650 (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  struct _FAST_MUTEX *v4; // rbx
  _QWORD *v6; // rsi
  char v7; // bl
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax
  ULONG_PTR v10; // rdi
  _QWORD *v11; // rcx
  char v12; // [rsp+58h] [rbp+20h]

  if ( a4 <= 1 )
  {
    v4 = (struct _FAST_MUTEX *)(a2 + 24);
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v6 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 88) = a2 + 80;
    *(_QWORD *)(a2 + 80) = a2 + 80;
    KeReleaseGuardedMutex(v4);
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v7 = (v12 ^ (2 * ((*(_BYTE *)(a2 + 96) & 2) != 0))) & 2 ^ v12;
    for ( i = 0LL; ; i = (_QWORD *)v10 )
    {
      NextProcess = PsGetNextProcess(i);
      v10 = NextProcess;
      if ( !NextProcess )
        break;
      if ( *(_QWORD *)(NextProcess + 1056) == a2 )
      {
        v7 &= ~1u;
        ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
        if ( *(_QWORD *)(v10 + 1056) == a2 )
        {
          *(_QWORD *)(v10 + 1056) = 0LL;
          v7 |= 1u;
        }
        KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
        if ( (v7 & 1) != 0 )
        {
          DbgkpMarkProcessPeb(v10);
          if ( (v7 & 2) != 0 )
            PsTerminateProcess(v10);
          ObfDereferenceObject((PVOID)a2);
        }
      }
    }
    while ( v6 != (_QWORD *)(a2 + 80) )
    {
      v11 = v6;
      v6 = (_QWORD *)*v6;
      *((_DWORD *)v11 + 18) = -1073740972;
      DbgkpWakeTarget();
    }
  }
}
