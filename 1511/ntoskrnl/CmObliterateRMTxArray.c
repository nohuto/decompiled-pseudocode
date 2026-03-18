/*
 * XREFs of CmObliterateRMTxArray @ 0x1405E3848
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 */

__int64 **__fastcall CmObliterateRMTxArray(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 ****v5; // rcx
  __int64 ***v6; // rax
  __int64 **v7; // r8
  __int64 ***v8; // rcx
  __int64 *v9; // rdx
  __int64 *v10; // rax
  __int64 **result; // rax
  __int64 *v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v13; // [rsp+28h] [rbp-8h]

  v13 = &v12;
  v12 = (__int64 *)&v12;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 *)CmpLazyCommitListHead;
  while ( v3 != &CmpLazyCommitListHead )
  {
    v4 = v3 - 4;
    v3 = (__int64 *)*v3;
    if ( v4[7] == a1 )
    {
      v5 = (__int64 ****)v4[5];
      v6 = (__int64 ***)(v4 + 4);
      v7 = *v6;
      if ( (*v6)[1] != (__int64 *)v6 || *v5 != v6 )
        __fastfail(3u);
      *v5 = (__int64 ***)v7;
      v7[1] = (__int64 *)v5;
      v8 = (__int64 ***)v13;
      *v6 = &v12;
      v6[1] = (__int64 **)v8;
      if ( *v8 != &v12 )
        __fastfail(3u);
      *v8 = (__int64 **)v6;
      v13 = (__int64 **)v6;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  while ( 1 )
  {
    v9 = v12;
    v10 = (__int64 *)*v12;
    if ( (__int64 **)v12[1] != &v12 || (__int64 *)v10[1] != v12 )
      __fastfail(3u);
    v12 = (__int64 *)*v12;
    v10[1] = (__int64)&v12;
    result = &v12;
    if ( v9 == (__int64 *)&v12 )
      break;
    CmpCleanupTransactionState(a1, v9 - 4, 8u, 0);
  }
  return result;
}
