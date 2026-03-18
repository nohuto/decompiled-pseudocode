/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x14069FF70
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcUnregisterLogRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  PVOID *v9; // rax
  void *(__fastcall **v10)(__int64, int); // rcx
  bool v11; // zf
  void *(__fastcall *v13)(__int64, int); // rdx
  PVOID *v14; // rax

  v4 = -1073741275;
  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpLogLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpLogLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpLogLock, v5, (ULONG_PTR)&AlpcpLogLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (PVOID *)AlpcpLogCallbackListHead;
  v10 = (void *(__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
  v11 = AlpcpLogCallbackListHead == &AlpcpLogCallbackListHead;
  if ( AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead )
  {
    while ( v10[2] != EtwpTraceALPC )
    {
      v10 = (void *(__fastcall **)(__int64, int))*v10;
      if ( v10 == (void *(__fastcall **)(__int64, int))&AlpcpLogCallbackListHead )
        goto LABEL_8;
    }
    v13 = *v10;
    v14 = (PVOID *)v10[1];
    if ( *((void *(__fastcall ***)(__int64, int))*v10 + 1) != v10 || *v14 != v10 )
      __fastfail(3u);
    *v14 = v13;
    *((_QWORD *)v13 + 1) = v14;
    ExFreePoolWithTag(v10, 0);
    v9 = (PVOID *)AlpcpLogCallbackListHead;
    v4 = 0;
LABEL_8:
    v11 = v9 == &AlpcpLogCallbackListHead;
  }
  AlpcpLogEnabled = !v11;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v4;
}
