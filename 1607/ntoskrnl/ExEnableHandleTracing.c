/*
 * XREFs of ExEnableHandleTracing @ 0x1406AD4DC
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14067D510 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140029750 (PsChargeProcessNonPagedPoolQuota.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x140087454 (MmGetMaximumNonPagedPoolInBytes.c)
 *     ExpUnlockHandleTableExclusive @ 0x1400A6FC4 (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x1400A7004 (ExpLockHandleTableExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406AD484 (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // r14
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  ULONG_PTR v8; // rbp
  char *PoolWithTag; // rax
  char *v10; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *v12; // rbx

  v2 = a2;
  if ( a2 )
  {
    if ( a2 >= ExHandleTraceDbMinStacks )
    {
      if ( a2 > ExHandleTraceDbMaxStacks )
        v2 = ExHandleTraceDbMaxStacks;
    }
    else
    {
      v2 = ExHandleTraceDbMinStacks;
    }
    while ( ((v2 - 1) & v2) != 0 )
      v2 = ((v2 - 1) | v2) + 1;
  }
  else
  {
    v2 = ExHandleTraceDbDefaultStacks;
  }
  v4 = 160LL * v2 + 80;
  _InterlockedExchangeAdd(&ExpTotalTraceBuffers, v2);
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v6 > (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    result = 3221225626LL;
LABEL_13:
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    return result;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    result = PsChargeProcessNonPagedPoolQuota(*(_QWORD *)(a1 + 16), v4);
    if ( (int)result < 0 )
      goto LABEL_13;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x6474624Fu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v2);
    if ( v8 )
      PsReturnProcessNonPagedPoolQuota(v8, v4);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v4);
  *(_DWORD *)v10 = 1;
  *((_DWORD *)v10 + 1) = v2;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_DWORD *)v10 + 8) = 0;
  *((_DWORD *)v10 + 4) = 1;
  KeInitializeEvent((PRKEVENT)(v10 + 40), SynchronizationEvent, 0);
  if ( v8 )
    *(_BYTE *)(a1 + 44) |= 1u;
  CurrentThread = KeGetCurrentThread();
  ExpLockHandleTableExclusive(a1, (__int64)CurrentThread);
  v12 = *(_DWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v10;
  if ( v12 )
  {
    if ( (v12[2] & 8) == 0 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
LABEL_24:
    *((_DWORD *)v10 + 2) = 8;
LABEL_25:
  *(_BYTE *)(a1 + 44) |= 2u;
  ExpUnlockHandleTableExclusive(a1, (__int64)CurrentThread);
  if ( v12 )
    ExDereferenceHandleDebugInfo(a1, v12);
  return 0LL;
}
