/*
 * XREFs of NtDebugContinue @ 0x140619A4C
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     EtwTraceDebuggerEvent @ 0x1402258C8 (EtwTraceDebuggerEvent.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     DbgkpWakeTarget @ 0x140619650 (DbgkpWakeTarget.c)
 */

NTSTATUS __stdcall NtDebugContinue(HANDLE DebugObject, PCLIENT_ID AppClientId, NTSTATUS ContinueStatus)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  char v7; // r15
  __int64 v8; // rsi
  char *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  CLIENT_ID v13; // [rsp+40h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = *AppClientId;
  if ( ContinueStatus != -2147418111
    && (ContinueStatus <= 0x10000
     || ContinueStatus > 65538
     && ContinueStatus != 1073807361
     && (ContinueStatus <= 1073807362 || ContinueStatus > 1073807364)) )
  {
    return -1073741811;
  }
  result = ObReferenceObjectByHandle(DebugObject, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  v6 = result;
  if ( result >= 0 )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = (char *)Object;
    ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
    v10 = *((_QWORD *)v9 + 10);
    if ( (char *)v10 == v9 + 80 )
      goto LABEL_21;
    while ( 1 )
    {
      if ( *(HANDLE *)(v10 + 40) == v13.UniqueProcess )
      {
        if ( v7 )
        {
          *(_DWORD *)(v10 + 76) &= ~4u;
          KeSetEvent((PRKEVENT)v9, 0, 0);
LABEL_21:
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 24));
          ObfDereferenceObject(v9);
          if ( !v7 )
            return -1073741811;
          if ( (PerfGlobalGroupMask & 0x400000) != 0 )
            EtwTraceDebuggerEvent(*(_QWORD *)(v8 + 56), *(_QWORD *)(v8 + 64), 2);
          *(_DWORD *)(v8 + 132) = ContinueStatus;
          *(_DWORD *)(v8 + 72) = 0;
          DbgkpWakeTarget(v8);
          return v6;
        }
        if ( *(HANDLE *)(v10 + 48) == v13.UniqueThread && (*(_DWORD *)(v10 + 76) & 1) != 0 )
        {
          v11 = *(_QWORD *)v10;
          v12 = *(_QWORD **)(v10 + 8);
          if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
            __fastfail(3u);
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          v8 = v10;
          v7 = 1;
        }
      }
      v10 = *(_QWORD *)v10;
      if ( (char *)v10 == v9 + 80 )
        goto LABEL_21;
    }
  }
  return result;
}
