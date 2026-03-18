/*
 * XREFs of AlpcRegisterLogRoutine @ 0x1406207D0
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1404B8278 (EtwpEnableKernelTrace.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // esi
  _QWORD *v2; // rbx
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  __int64 (__fastcall **i)(__int64, int); // rax
  PVOID **v8; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x634C6C41u);
  v1 = 0;
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = EtwpTraceALPC;
  v4 = KeAbPreAcquire((ULONG_PTR)&AlpcpLogLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpLogLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&AlpcpLogLock, v4, (ULONG_PTR)&AlpcpLogLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  for ( i = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (__int64 (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (__int64 (__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v2, 0);
      v1 = -1073740008;
      goto LABEL_15;
    }
  }
  v8 = (PVOID **)off_1402D3478;
  *v2 = &AlpcpLogCallbackListHead;
  v2[1] = v8;
  if ( *v8 != &AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v8 = (PVOID *)v2;
  off_1402D3478 = (_UNKNOWN **)v2;
  AlpcpLogEnabled = 1;
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v1;
}
