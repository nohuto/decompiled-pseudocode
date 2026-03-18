/*
 * XREFs of ExEnableHandleTracing @ 0x14066C82C
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x14063EDC4 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400612C0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     ExpUnlockHandleTableExclusive @ 0x14009642C (ExpUnlockHandleTableExclusive.c)
 *     ExpLockHandleTableExclusive @ 0x14009646C (ExpLockHandleTableExclusive.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x1400F47D8 (MmGetMaximumNonPagedPoolInBytes.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExDereferenceHandleDebugInfo @ 0x14066C7D4 (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2)
{
  signed int v3; // ebx
  __int64 v4; // r14
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  struct _KPROCESS *v8; // rbp
  char *PoolWithTag; // rax
  char *v10; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  _DWORD *v12; // rbx

  if ( a2 )
  {
    v3 = 128;
    if ( a2 >= 0x80 )
    {
      v3 = a2;
      if ( a2 > 0x20000 )
        v3 = 0x20000;
    }
    while ( ((v3 - 1) & v3) != 0 )
      v3 = ((v3 - 1) | v3) + 1;
  }
  else
  {
    v3 = 4096;
  }
  v4 = 160LL * v3 + 80;
  _InterlockedExchangeAdd(&ExpTotalTraceBuffers, v3);
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v6 > (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    result = 3221225626LL;
LABEL_13:
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
    return result;
  }
  v8 = *(struct _KPROCESS **)(a1 + 16);
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
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
    if ( v8 )
      PsReturnProcessNonPagedPoolQuota(v8, v4);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v4);
  *(_DWORD *)v10 = 1;
  *((_DWORD *)v10 + 1) = v3;
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
