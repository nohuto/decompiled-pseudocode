/*
 * XREFs of CmSnapshotRMTxArray @ 0x14049B3B0
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
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
  __int64 result; // rax
  void *v13; // rcx
  PVOID *v14; // r14
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

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
      v15 = 0LL;
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v8, &v15, 0);
        if ( !NextElement )
          break;
        if ( (*((_DWORD *)NextElement + 26) & 8) == 0 )
        {
          if ( v10 < (unsigned int)v5 )
          {
            v13 = (void *)*((_QWORD *)NextElement + 8);
            PoolWithTag[v10] = v13;
            ObfReferenceObject(v13);
          }
          ++v10;
        }
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v10 <= (unsigned int)v5 )
        break;
      if ( PoolWithTag )
      {
        if ( (_DWORD)v5 )
        {
          v14 = PoolWithTag;
          do
          {
            ObfDereferenceObject(*v14++);
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
