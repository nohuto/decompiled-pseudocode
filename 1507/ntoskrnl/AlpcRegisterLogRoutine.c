/*
 * XREFs of AlpcRegisterLogRoutine @ 0x14069FE4C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  _QWORD *PoolWithTag; // rax
  __int64 v1; // r9
  unsigned int v2; // esi
  _QWORD *v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  void *(__fastcall **i)(__int64, int); // rax
  PVOID **v10; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x634C6C41u);
  v2 = 0;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = EtwpTraceALPC;
  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpLogLock, 0LL, 0LL, v1);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpLogLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpLogLock, v5, (ULONG_PTR)&AlpcpLogLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  for ( i = (void *(__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (void *(__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (void *(__fastcall **)(__int64, int))*i )
  {
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v3, 0);
      v2 = -1073740008;
      goto LABEL_15;
    }
  }
  v10 = (PVOID **)off_1403225A0;
  *v3 = &AlpcpLogCallbackListHead;
  v3[1] = v10;
  if ( *v10 != &AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v10 = (PVOID *)v3;
  off_1403225A0 = (_UNKNOWN **)v3;
  AlpcpLogEnabled = 1;
LABEL_15:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpLogLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpLogLock);
  return v2;
}
