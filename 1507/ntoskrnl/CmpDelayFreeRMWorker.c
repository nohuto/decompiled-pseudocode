/*
 * XREFs of CmpDelayFreeRMWorker @ 0x140559334
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 */

void __fastcall CmpDelayFreeRMWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v7; // cf
  PERESOURCE *v8; // rbx
  __int64 v9; // rax
  unsigned __int8 v10; // di
  signed __int32 v11; // eax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int8 v15; // bl
  signed __int32 v16; // eax

  v4 = KeAbPreAcquire((ULONG_PTR)&CmpDelayFreeRMLock, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v7 = _interlockedbittestandreset((volatile signed __int32 *)&CmpDelayFreeRMLock, 0);
  if ( !v7 )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayFreeRMLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  while ( 1 )
  {
    v8 = (PERESOURCE *)CmpDelayFreeRMListHead;
    qword_14034D528 = (__int64)KeGetCurrentThread();
    dword_14034D550 = CurrentIrql;
    if ( CmpDelayFreeRMListHead == &CmpDelayFreeRMListHead )
      break;
    v9 = *(_QWORD *)CmpDelayFreeRMListHead;
    if ( *((PVOID **)CmpDelayFreeRMListHead + 1) != &CmpDelayFreeRMListHead
      || *(PVOID *)(v9 + 8) != CmpDelayFreeRMListHead )
    {
      __fastfail(3u);
    }
    CmpDelayFreeRMListHead = *(PVOID *)CmpDelayFreeRMListHead;
    *(_QWORD *)(v9 + 8) = &CmpDelayFreeRMListHead;
    qword_14034D528 = 0LL;
    v10 = dword_14034D550;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayFreeRMLock, 1, 0);
    if ( v11 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayFreeRMLock, v11);
    __writecr8(v10);
    KeAbPostRelease((ULONG_PTR)&CmpDelayFreeRMLock);
    CmpLockRegistryExclusive();
    ExDeleteResourceLite(v8[16]);
    ExFreePoolWithTag(v8[16], 0);
    ExFreePoolWithTag(v8, 0x6D524D43u);
    CmpUnlockRegistry();
    v13 = KeAbPreAcquire((ULONG_PTR)&CmpDelayFreeRMLock, 0LL, 0LL, v12);
    v14 = v13;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v7 = _interlockedbittestandreset((volatile signed __int32 *)&CmpDelayFreeRMLock, 0);
    if ( !v7 )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpDelayFreeRMLock, v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
  }
  qword_14034D528 = 0LL;
  v15 = dword_14034D550;
  CmpDelayFreeRMWorkItemActive = 0;
  v16 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpDelayFreeRMLock, 1, 0);
  if ( v16 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpDelayFreeRMLock, v16);
  __writecr8(v15);
  KeAbPostRelease((ULONG_PTR)&CmpDelayFreeRMLock);
}
