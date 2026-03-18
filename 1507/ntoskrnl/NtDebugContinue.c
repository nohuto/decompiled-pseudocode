/*
 * XREFs of NtDebugContinue @ 0x1406687C4
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     EtwTraceDebuggerEvent @ 0x14025CE50 (EtwTraceDebuggerEvent.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     DbgkpWakeTarget @ 0x140668390 (DbgkpWakeTarget.c)
 */

NTSTATUS __stdcall NtDebugContinue(HANDLE DebugObject, PCLIENT_ID AppClientId, NTSTATUS ContinueStatus)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v6; // r9
  NTSTATUS v7; // edi
  char v8; // r12
  __int64 v9; // r14
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int8 CurrentIrql; // r13
  struct _KEVENT *v14; // r9
  char *v15; // r8
  char *v16; // rcx
  _QWORD *v17; // rdx
  void **v18; // rax
  unsigned __int8 v19; // r15
  signed __int32 v20; // eax
  CLIENT_ID v21; // [rsp+40h] [rbp-38h]
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = *AppClientId;
  if ( ContinueStatus != -2147418111
    && (ContinueStatus <= 0x10000
     || ContinueStatus > 65538
     && ContinueStatus != 1073807361
     && (ContinueStatus <= 1073807362 || ContinueStatus > 1073807364)) )
  {
    return -1073741811;
  }
  result = ObReferenceObjectByHandle(DebugObject, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  v7 = result;
  if ( result >= 0 )
  {
    v8 = 0;
    v9 = 0LL;
    v10 = (volatile signed __int32 *)((char *)Object + 24);
    v11 = KeAbPreAcquire((ULONG_PTR)Object + 24, 0LL, 0LL, v6);
    v12 = v11;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(v10, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)v10, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    *((_QWORD *)v10 + 1) = KeGetCurrentThread();
    *((_DWORD *)v10 + 12) = CurrentIrql;
    v14 = (struct _KEVENT *)Object;
    v15 = (char *)Object + 80;
    v16 = (char *)*((_QWORD *)Object + 10);
    if ( v16 != (char *)Object + 80 )
    {
      do
      {
        if ( (HANDLE)*((_QWORD *)v16 + 5) == v21.UniqueProcess )
        {
          if ( v8 )
          {
            *((_DWORD *)v16 + 19) &= ~4u;
            KeSetEvent(v14, 0, 0);
            break;
          }
          if ( (HANDLE)*((_QWORD *)v16 + 6) == v21.UniqueThread && (*((_DWORD *)v16 + 19) & 1) != 0 )
          {
            v17 = *(_QWORD **)v16;
            v18 = (void **)*((_QWORD *)v16 + 1);
            if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 || *v18 != v16 )
              __fastfail(3u);
            *v18 = v17;
            v17[1] = v18;
            v9 = (__int64)v16;
            v8 = 1;
          }
        }
        v16 = *(char **)v16;
      }
      while ( v16 != v15 );
    }
    *((_QWORD *)v10 + 1) = 0LL;
    v19 = *((_BYTE *)v10 + 48);
    v20 = _InterlockedCompareExchange(v10, 1, 0);
    if ( v20 )
      ExpReleaseFastMutexContended(v10, v20);
    __writecr8(v19);
    KeAbPostRelease((ULONG_PTR)v10);
    ObfDereferenceObject(Object);
    if ( !v8 )
      return -1073741811;
    if ( (PerfGlobalGroupMask & 0x400000) != 0 )
      EtwTraceDebuggerEvent(*(_QWORD *)(v9 + 56), *(_QWORD *)(v9 + 64), 2);
    *(_DWORD *)(v9 + 132) = ContinueStatus;
    *(_DWORD *)(v9 + 72) = 0;
    DbgkpWakeTarget(v9);
    return v7;
  }
  return result;
}
