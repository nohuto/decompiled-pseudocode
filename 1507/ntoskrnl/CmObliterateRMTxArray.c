/*
 * XREFs of CmObliterateRMTxArray @ 0x14065A634
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 */

__int64 **__fastcall CmObliterateRMTxArray(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 ****v11; // rdx
  __int64 ***v12; // rax
  __int64 **v13; // r8
  __int64 ***v14; // rdx
  signed __int32 v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  __int64 *v18; // rdx
  __int64 *v19; // rax
  __int64 **result; // rax
  __int64 *v21; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v22; // [rsp+28h] [rbp-8h]

  v22 = &v21;
  v21 = (__int64 *)&v21;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  v7 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
  v8 = v7;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (__int64 *)CmpLazyCommitListHead;
  qword_14034D768 = (__int64)v6;
  while ( v9 != &CmpLazyCommitListHead )
  {
    v10 = v9 - 4;
    v9 = (__int64 *)*v9;
    if ( v10[7] == a1 )
    {
      v11 = (__int64 ****)v10[5];
      v12 = (__int64 ***)(v10 + 4);
      v13 = *v12;
      if ( (*v12)[1] != (__int64 *)v12 || *v11 != v12 )
        __fastfail(3u);
      *v11 = (__int64 ***)v13;
      v13[1] = (__int64 *)v11;
      v14 = (__int64 ***)v22;
      *v12 = &v21;
      v12[1] = (__int64 **)v14;
      if ( *v14 != &v21 )
        __fastfail(3u);
      *v14 = (__int64 **)v12;
      v22 = (__int64 **)v12;
    }
  }
  qword_14034D768 = 0LL;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
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
  while ( 1 )
  {
    v18 = v21;
    v19 = (__int64 *)*v21;
    if ( (__int64 **)v21[1] != &v21 || (__int64 *)v19[1] != v21 )
      __fastfail(3u);
    v21 = (__int64 *)*v21;
    v19[1] = (__int64)&v21;
    result = &v21;
    if ( v18 == (__int64 *)&v21 )
      break;
    CmpCleanupTransactionState(a1, v18 - 4, 8, 0);
  }
  return result;
}
