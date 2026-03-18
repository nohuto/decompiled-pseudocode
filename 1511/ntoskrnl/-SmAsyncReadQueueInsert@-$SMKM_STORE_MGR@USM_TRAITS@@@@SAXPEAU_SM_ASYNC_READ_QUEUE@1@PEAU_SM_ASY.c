/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140116010
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14010BC20 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140116144 (ExQueueWorkItemToPrivatePool.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  KSPIN_LOCK *v3; // r14
  __int128 *v5; // rdi
  KIRQL v6; // r15
  unsigned __int64 v7; // rbx
  ULONG_PTR *result; // rax
  ULONG_PTR *v9; // rdx
  _QWORD *v10; // rcx
  __int128 v11; // xmm0
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v3 = (KSPIN_LOCK *)(a1 + 768);
  *(_DWORD *)(a2 + 32) ^= (*(_DWORD *)(a2 + 32) ^ a3) & 7;
  v5 = (__int128 *)(a1 + 24LL * a3);
  *(_DWORD *)(a2 + 40) ^= (*(_DWORD *)(a2 + 40) ^ (a3 >> 3)) & 3;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 768));
  if ( *((_DWORD *)v5 + 4) || *((_DWORD *)v5 + 5) )
  {
    *(_QWORD *)a2 = **((_QWORD **)v5 + 1) + 1LL;
    **((_QWORD **)v5 + 1) = a2;
    *((_QWORD *)v5 + 1) = a2;
    v7 = *(_QWORD *)a2;
    if ( v7 >= KeQueryActiveProcessorCountEx(0xFFFFu) && *((__int128 **)v5 + 1) != v5 )
    {
      v11 = *v5;
      *((_QWORD *)v5 + 1) = v5;
      *(_OWORD *)BugCheckParameter2 = v11;
      *(_QWORD *)v5 = 0LL;
    }
  }
  else
  {
    v9 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a2 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v9 = a2;
    BugCheckParameter2[1] = a2;
  }
  *((_DWORD *)v5 + 4) += *(_DWORD *)BugCheckParameter2[1];
  KeReleaseSpinLock(v3, v6);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v10 = (_QWORD *)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v10 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    *v10 = 0LL;
    v10[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    v10[3] = v10;
    ExQueueWorkItemToPrivatePool((ULONG_PTR)v10);
  }
  return result;
}
