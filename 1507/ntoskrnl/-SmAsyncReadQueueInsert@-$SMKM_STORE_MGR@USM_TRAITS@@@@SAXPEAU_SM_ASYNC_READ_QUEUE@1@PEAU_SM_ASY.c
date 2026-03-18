/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x14014B864
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z @ 0x14013E83C (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAX@Z.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14014B99C (ExQueueWorkItemToPrivatePool.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  volatile signed __int32 *v3; // rdi
  __int128 *v5; // rbx
  unsigned __int8 CurrentIrql; // r15
  ULONG_PTR *v7; // rcx
  ULONG_PTR *result; // rax
  _QWORD *v9; // rcx
  __int128 v10; // xmm0
  ULONG_PTR BugCheckParameter2[2]; // [rsp+20h] [rbp-10h] BYREF
  void *retaddr; // [rsp+48h] [rbp+18h]

  BugCheckParameter2[0] = 0LL;
  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v3 = (volatile signed __int32 *)(a1 + 768);
  *(_DWORD *)(a2 + 32) ^= (*(_DWORD *)(a2 + 32) ^ a3) & 7;
  v5 = (__int128 *)(a1 + 24LL * a3);
  *(_DWORD *)(a2 + 40) ^= (*(_DWORD *)(a2 + 40) ^ (a3 >> 3)) & 3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v3);
  }
  if ( *((_DWORD *)v5 + 4) || *((_DWORD *)v5 + 5) )
  {
    *(_QWORD *)a2 = **((_QWORD **)v5 + 1) + 1LL;
    **((_QWORD **)v5 + 1) = a2;
    *((_QWORD *)v5 + 1) = a2;
    if ( *(_QWORD *)a2 >= (unsigned __int64)(unsigned int)KeNumberProcessors_0 && *((__int128 **)v5 + 1) != v5 )
    {
      v10 = *v5;
      *((_QWORD *)v5 + 1) = v5;
      *(_OWORD *)BugCheckParameter2 = v10;
      *(_QWORD *)v5 = 0LL;
    }
  }
  else
  {
    v7 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a2 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v7 = a2;
    BugCheckParameter2[1] = a2;
  }
  *((_DWORD *)v5 + 4) += *(_DWORD *)BugCheckParameter2[1];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CurrentIrql);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v9 = (_QWORD *)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v9 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    *v9 = 0LL;
    v9[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    v9[3] = v9;
    ExQueueWorkItemToPrivatePool((ULONG_PTR)v9);
  }
  return result;
}
