/*
 * XREFs of CmSnapshotRMTxArray @ 0x1404EF218
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2, PVOID **a3, __int64 a4)
{
  unsigned int v4; // ebx
  PVOID **v5; // r12
  __int64 v6; // rsi
  PVOID *PoolWithTag; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebp
  struct _KTHREAD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 NextElement; // rax
  signed __int32 v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 result; // rax
  void *v19; // rcx
  PVOID *v20; // r14
  __int64 v21; // [rsp+60h] [rbp+8h]
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF
  PVOID **v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v4 = 0;
  v5 = a3;
  v6 = 0LL;
  PoolWithTag = 0LL;
  if ( a1 )
  {
    v21 = a1 + 16;
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = 0;
      v22 = 0LL;
      --CurrentThread->KernelApcDisable;
      v11 = KeGetCurrentThread();
      v12 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
      v13 = v12;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v12);
      if ( v13 )
        *(_BYTE *)(v13 + 26) |= 1u;
      qword_14034D768 = (__int64)v11;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v21, &v22, 0LL);
        if ( !NextElement )
          break;
        if ( (*(_DWORD *)(NextElement + 104) & 8) == 0 )
        {
          if ( v10 < (unsigned int)v6 )
          {
            v19 = *(void **)(NextElement + 64);
            PoolWithTag[v10] = v19;
            ObfReferenceObject(v19);
          }
          ++v10;
        }
      }
      qword_14034D768 = 0LL;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      v5 = v23;
      if ( v15 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v15);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v16 = KeGetCurrentThread();
      v17 = v16->KernelApcDisable + 1;
      v16->KernelApcDisable = v17;
      if ( !v17
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
        && !v16->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v10 <= (unsigned int)v6 )
        break;
      if ( PoolWithTag )
      {
        if ( (_DWORD)v6 )
        {
          v20 = PoolWithTag;
          do
          {
            ObfDereferenceObject(*v20++);
            --v6;
          }
          while ( v6 );
        }
        ExFreePoolWithTag(PoolWithTag, 0x36344D43u);
      }
      v6 = v10;
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v10, 0x36344D43u);
      if ( !PoolWithTag )
      {
        LODWORD(v6) = 0;
        v4 = -1073741670;
        goto LABEL_16;
      }
    }
    LODWORD(v6) = v10;
    if ( !v10 && PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0x36344D43u);
      PoolWithTag = 0LL;
    }
  }
LABEL_16:
  result = v4;
  *a2 = v6;
  *v5 = PoolWithTag;
  return result;
}
