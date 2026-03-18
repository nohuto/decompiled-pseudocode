/*
 * XREFs of CmpRunDownCmRM @ 0x14049B138
 * Callers:
 *     CmShutdownCmRM @ 0x14049B0F8 (CmShutdownCmRM.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDelayFreeCmRm @ 0x14049B2B0 (CmpDelayFreeCmRm.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 */

void __fastcall CmpRunDownCmRM(__int64 *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rax
  struct _KTHREAD *v8; // rax
  __int64 *v9; // rdx
  __int64 **v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  __int64 *v14; // rax
  __int64 ****v15; // rdx
  __int64 ***v16; // rax
  __int64 **v17; // r8
  __int64 ***v18; // rdx
  __int64 *v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v20; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v20 = &v19;
    v19 = (__int64 *)&v19;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v5 = (__int64 *)CmpLazyCommitListHead;
    while ( v5 != &CmpLazyCommitListHead )
    {
      v14 = v5 - 4;
      v5 = (__int64 *)*v5;
      if ( (__int64 *)v14[7] == a1 )
      {
        v15 = (__int64 ****)v14[5];
        v16 = (__int64 ***)(v14 + 4);
        v17 = *v16;
        if ( (*v16)[1] != (__int64 *)v16 || *v15 != v16 )
          __fastfail(3u);
        *v15 = (__int64 ***)v17;
        v17[1] = (__int64 *)v15;
        v18 = (__int64 ***)v20;
        *v16 = &v19;
        v16[1] = (__int64 **)v18;
        if ( *v18 != &v19 )
          __fastfail(3u);
        *v18 = (__int64 **)v16;
        v20 = (__int64 **)v16;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v6 = v19;
      v7 = (__int64 *)*v19;
      if ( (__int64 **)v19[1] != &v19 || (__int64 *)v7[1] != v19 )
        __fastfail(3u);
      v19 = (__int64 *)*v19;
      v7[1] = (__int64)&v19;
      if ( v6 == (__int64 *)&v19 )
        break;
      CmpCleanupTransactionState(a1, v6 - 4, 4LL);
    }
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpRmListLock);
    *((_DWORD *)a1 + 26) |= 8u;
    v9 = (__int64 *)*a1;
    v10 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v10 != a1 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    v11 = a1[10];
    if ( v11 )
    {
      *(_QWORD *)(v11 + 5400) = 0LL;
      a1[10] = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v12 = (void *)a1[7];
    if ( v12 )
    {
      ObDereferenceObjectDeferDelete(v12);
      a1[7] = 0LL;
    }
    v13 = (void *)a1[5];
    if ( v13 )
    {
      ObDereferenceObjectDeferDelete(v13);
      a1[5] = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
