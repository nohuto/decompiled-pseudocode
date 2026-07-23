/*
 * XREFs of CmpRunDownCmRM @ 0x1404BCEDC
 * Callers:
 *     CmShutdownCmRM @ 0x1404BCE9C (CmShutdownCmRM.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmpDelayFreeCmRm @ 0x1404BD054 (CmpDelayFreeCmRm.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 */

void __fastcall CmpRunDownCmRM(__int64 *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdx
  __int64 *v10; // rax
  struct _KTHREAD *v11; // rax
  __int64 *v12; // rdx
  __int64 **v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rcx
  void *v19; // rcx
  __int64 *v20; // rax
  __int64 ****v21; // rdx
  __int64 ***v22; // rax
  __int64 **v23; // r8
  _QWORD *v24; // rdx
  __int64 *v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v26; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v26 = &v25;
    v25 = (__int64 *)&v25;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v5 = (__int64 *)CmpLazyCommitListHead;
    while ( v5 != &CmpLazyCommitListHead )
    {
      v20 = v5 - 4;
      v5 = (__int64 *)*v5;
      if ( (__int64 *)v20[8] == a1 )
      {
        v21 = (__int64 ****)v20[5];
        v22 = (__int64 ***)(v20 + 4);
        v23 = *v22;
        if ( (*v22)[1] != (__int64 *)v22 || *v21 != v22 )
          __fastfail(3u);
        *v21 = (__int64 ***)v23;
        v23[1] = (__int64 *)v21;
        v24 = v26;
        if ( *v26 != (__int64 *)&v25 )
          __fastfail(3u);
        v22[1] = v26;
        *v22 = &v25;
        *v24 = v22;
        v26 = (__int64 **)v22;
      }
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
    while ( 1 )
    {
      v9 = v25;
      v10 = (__int64 *)*v25;
      if ( (__int64 **)v25[1] != &v25 || (__int64 *)v10[1] != v25 )
        __fastfail(3u);
      v25 = (__int64 *)*v25;
      v10[1] = (__int64)&v25;
      if ( v9 == (__int64 *)&v25 )
        break;
      CmpCleanupTransactionState(a1, v9 - 4, 4LL);
    }
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpRmListLock);
    *((_DWORD *)a1 + 26) |= 8u;
    v12 = (__int64 *)*a1;
    v13 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v13 != a1 )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = (__int64)v13;
    v14 = a1[10];
    if ( v14 )
    {
      *(_QWORD *)(v14 + 5400) = 0LL;
      a1[10] = 0LL;
    }
    ExReleaseFastMutexUnsafe(&CmpRmListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
    v18 = (void *)a1[7];
    if ( v18 )
    {
      ObDereferenceObjectDeferDelete(v18);
      a1[7] = 0LL;
    }
    v19 = (void *)a1[5];
    if ( v19 )
    {
      ObDereferenceObjectDeferDelete(v19);
      a1[5] = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
