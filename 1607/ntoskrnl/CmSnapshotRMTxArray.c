/*
 * XREFs of CmSnapshotRMTxArray @ 0x1404EB0B4
 * Callers:
 *     CmpTryToRundownHive @ 0x1400876A8 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmListGetNextElement @ 0x140402E2C (CmListGetNextElement.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, _DWORD *a2, PVOID **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  PVOID *PoolWithTag; // rdi
  _QWORD *v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebp
  char *NextElement; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  void *v16; // rcx
  PVOID *v17; // r14
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v5 = 0LL;
  PoolWithTag = 0LL;
  if ( a1 )
  {
    v8 = (_QWORD *)(a1 + 16);
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = 0;
      v18 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v8, &v18, 0);
        if ( !NextElement )
          break;
        if ( (*((_DWORD *)NextElement + 12) & 8) == 0 )
        {
          if ( v10 < (unsigned int)v5 )
          {
            v16 = (void *)*((_QWORD *)NextElement + 9);
            PoolWithTag[v10] = v16;
            ObfReferenceObject(v16);
          }
          ++v10;
        }
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
      if ( v10 <= (unsigned int)v5 )
        break;
      if ( PoolWithTag )
      {
        if ( (_DWORD)v5 )
        {
          v17 = PoolWithTag;
          do
          {
            ObfDereferenceObject(*v17++);
            --v5;
          }
          while ( v5 );
        }
        ExFreePoolWithTag(PoolWithTag, 0x36344D43u);
      }
      v5 = v10;
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 8LL * v10, 0x36344D43u);
      if ( !PoolWithTag )
      {
        LODWORD(v5) = 0;
        v3 = -1073741670;
        goto LABEL_9;
      }
    }
    LODWORD(v5) = v10;
    if ( !v10 && PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0x36344D43u);
      PoolWithTag = 0LL;
    }
  }
LABEL_9:
  result = v3;
  *a2 = v5;
  *a3 = PoolWithTag;
  return result;
}
