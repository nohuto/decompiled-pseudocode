/*
 * XREFs of CmObliterateRMTxArray @ 0x1406032B4
 * Callers:
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 */

__int64 **__fastcall CmObliterateRMTxArray(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rdx
  __int64 *v4; // rax
  __int64 ****v5; // rcx
  __int64 ***v6; // rax
  __int64 **v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 **result; // rax
  __int64 *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v16; // [rsp+28h] [rbp-8h]

  v16 = &v15;
  v15 = (__int64 *)&v15;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 *)CmpLazyCommitListHead;
  while ( v3 != &CmpLazyCommitListHead )
  {
    v4 = v3 - 4;
    v3 = (__int64 *)*v3;
    if ( v4[8] == a1 )
    {
      v5 = (__int64 ****)v4[5];
      v6 = (__int64 ***)(v4 + 4);
      v7 = *v6;
      if ( (*v6)[1] != (__int64 *)v6 || *v5 != v6 )
        __fastfail(3u);
      *v5 = (__int64 ***)v7;
      v7[1] = (__int64 *)v5;
      v8 = v16;
      if ( *v16 != (__int64 *)&v15 )
        __fastfail(3u);
      v6[1] = v16;
      *v6 = &v15;
      *v8 = v6;
      v16 = (__int64 **)v6;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  while ( 1 )
  {
    v12 = v15;
    v13 = (__int64 *)*v15;
    if ( (__int64 **)v15[1] != &v15 || (__int64 *)v13[1] != v15 )
      __fastfail(3u);
    v15 = (__int64 *)*v15;
    v13[1] = (__int64)&v15;
    result = &v15;
    if ( v12 == (__int64 *)&v15 )
      break;
    CmpCleanupTransactionState(a1, v12 - 4, 8, 0);
  }
  return result;
}
