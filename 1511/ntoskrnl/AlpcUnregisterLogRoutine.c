/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x1406208F4
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1404B8504 (EtwpDisableKernelTrace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 AlpcUnregisterLogRoutine()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rbx
  PVOID *v4; // rax
  __int64 (__fastcall **v5)(__int64, int); // rcx
  bool v6; // zf
  __int64 (__fastcall *v8)(__int64, int); // rdx
  PVOID *v9; // rax

  v0 = -1073741275;
  v1 = KeAbPreAcquire((ULONG_PTR)&AlpcpLogLock, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpLogLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&AlpcpLogLock, v1, (ULONG_PTR)&AlpcpLogLock);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  v4 = (PVOID *)AlpcpLogCallbackListHead;
  v5 = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
  v6 = AlpcpLogCallbackListHead == &AlpcpLogCallbackListHead;
  if ( AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead )
  {
    while ( v5[2] != EtwpTraceALPC )
    {
      v5 = (__int64 (__fastcall **)(__int64, int))*v5;
      if ( v5 == (__int64 (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead )
        goto LABEL_8;
    }
    v8 = *v5;
    v9 = (PVOID *)v5[1];
    if ( *((__int64 (__fastcall ***)(__int64, int))*v5 + 1) != v5 || *v9 != v5 )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)v8 + 1) = v9;
    ExFreePoolWithTag(v5, 0);
    v4 = (PVOID *)AlpcpLogCallbackListHead;
    v0 = 0;
LABEL_8:
    v6 = v4 == &AlpcpLogCallbackListHead;
  }
  AlpcpLogEnabled = !v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v0;
}
