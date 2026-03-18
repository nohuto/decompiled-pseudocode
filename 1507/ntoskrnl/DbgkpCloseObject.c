/*
 * XREFs of DbgkpCloseObject @ 0x140666AD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     DbgkpMarkProcessPeb @ 0x140666EA8 (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140668390 (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, struct _KEVENT *a2, __int64 a3, unsigned __int64 a4)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // si
  LIST_ENTRY *Flink; // rsi
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // bl
  _QWORD *i; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int8 v19; // r12
  unsigned __int8 v20; // r15
  signed __int32 v21; // eax
  unsigned __int64 NextProcess; // rax
  ULONG_PTR v23; // rdi
  LIST_ENTRY *v24; // rcx
  char v25; // [rsp+68h] [rbp+20h]

  if ( a4 <= 1 )
  {
    v5 = (ULONG_PTR)&a2[1];
    v6 = KeAbPreAcquire((ULONG_PTR)&a2[1], 0LL, 0LL, a4);
    v7 = v6;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
      ExpAcquireFastMutexContended(v5, v6);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    *(_DWORD *)(v5 + 48) = CurrentIrql;
    a2[4].Header.LockNV |= 1u;
    Flink = a2[3].Header.WaitListHead.Flink;
    a2[3].Header.WaitListHead.Blink = &a2[3].Header.WaitListHead;
    a2[3].Header.WaitListHead.Flink = &a2[3].Header.WaitListHead;
    *(_QWORD *)(v5 + 8) = 0LL;
    v10 = *(_BYTE *)(v5 + 48);
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)v5, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)v5, v11);
    __writecr8(v10);
    KeAbPostRelease(v5);
    KeSetEvent(a2, 0, 0);
    v15 = (v25 ^ (2 * ((a2[4].Header.Type & 2) != 0))) & 2 ^ v25;
    for ( i = 0LL; ; i = (_QWORD *)v23 )
    {
      NextProcess = PsGetNextProcess(i, v12, v13, v14);
      v23 = NextProcess;
      if ( !NextProcess )
        break;
      if ( *(struct _KEVENT **)(NextProcess + 1056) == a2 )
      {
        v15 &= ~1u;
        v17 = KeAbPreAcquire((ULONG_PTR)&DbgkpProcessDebugPortMutex, 0LL, 0LL, v14);
        v18 = v17;
        v19 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&DbgkpProcessDebugPortMutex, v17);
        if ( v18 )
          *(_BYTE *)(v18 + 26) |= 1u;
        qword_14034D468 = (__int64)KeGetCurrentThread();
        dword_14034D490 = v19;
        if ( *(struct _KEVENT **)(v23 + 1056) == a2 )
        {
          *(_QWORD *)(v23 + 1056) = 0LL;
          v15 |= 1u;
        }
        qword_14034D468 = 0LL;
        v20 = dword_14034D490;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
        if ( v21 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v21);
        __writecr8(v20);
        KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
        if ( (v15 & 1) != 0 )
        {
          DbgkpMarkProcessPeb(v23);
          if ( (v15 & 2) != 0 )
            PsTerminateProcess(v23, 0xC0000354);
          ObfDereferenceObject(a2);
        }
      }
    }
    while ( Flink != &a2[3].Header.WaitListHead )
    {
      v24 = Flink;
      Flink = Flink->Flink;
      LODWORD(v24[4].Blink) = -1073740972;
      DbgkpWakeTarget();
    }
  }
}
