/*
 * XREFs of CmpRunDownCmRM @ 0x1404EEE04
 * Callers:
 *     CmShutdownCmRM @ 0x1404EEDC4 (CmShutdownCmRM.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmpDelayFreeCmRm @ 0x1404EF054 (CmpDelayFreeCmRm.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 */

void __fastcall CmpRunDownCmRM(__int64 *a1, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rsi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rdi
  __int64 *v11; // rcx
  signed __int32 v12; // eax
  __int64 v13; // r9
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  __int64 *v16; // rdx
  __int64 *v17; // rax
  struct _KTHREAD *v18; // rax
  struct _KTHREAD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 *v22; // rcx
  __int64 **v23; // rax
  __int64 v24; // rax
  signed __int32 v25; // eax
  struct _KTHREAD *v26; // rcx
  __int16 v27; // ax
  void *v28; // rcx
  void *v29; // rcx
  __int64 *v30; // rax
  __int64 ****v31; // rdx
  __int64 ***v32; // rax
  __int64 **v33; // r8
  __int64 ***v34; // rdx
  __int64 *v35; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v36; // [rsp+28h] [rbp-8h]

  if ( a1 && !*((_DWORD *)a1 + 16) )
  {
    v36 = &v35;
    v35 = (__int64 *)&v35;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeGetCurrentThread();
    v8 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
    v10 = v8;
    if ( !v9 )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = (__int64 *)CmpLazyCommitListHead;
    qword_14034D768 = (__int64)v7;
    while ( v11 != &CmpLazyCommitListHead )
    {
      v30 = v11 - 4;
      v11 = (__int64 *)*v11;
      if ( (__int64 *)v30[7] == a1 )
      {
        v31 = (__int64 ****)v30[5];
        v32 = (__int64 ***)(v30 + 4);
        v33 = *v32;
        if ( (*v32)[1] != (__int64 *)v32 || *v31 != v32 )
          __fastfail(3u);
        *v31 = (__int64 ***)v33;
        v33[1] = (__int64 *)v31;
        v34 = (__int64 ***)v36;
        *v32 = &v35;
        v32[1] = (__int64 **)v34;
        if ( *v34 != &v35 )
          __fastfail(3u);
        *v34 = (__int64 **)v32;
        v36 = (__int64 **)v32;
      }
    }
    qword_14034D768 = 0LL;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
    if ( v12 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v12);
    KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
    v14 = KeGetCurrentThread();
    v15 = v14->KernelApcDisable + 1;
    v14->KernelApcDisable = v15;
    if ( !v15
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
      && !v14->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    while ( 1 )
    {
      v16 = v35;
      v17 = (__int64 *)*v35;
      if ( (__int64 **)v35[1] != &v35 || (__int64 *)v17[1] != v35 )
        __fastfail(3u);
      v35 = (__int64 *)*v35;
      v17[1] = (__int64)&v35;
      if ( v16 == (__int64 *)&v35 )
        break;
      CmpCleanupTransactionState(a1, v16 - 4, 4LL);
    }
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = KeGetCurrentThread();
    v20 = KeAbPreAcquire((ULONG_PTR)&CmpRmListLock, 0LL, 0LL, v13);
    v9 = _interlockedbittestandreset((volatile signed __int32 *)&CmpRmListLock, 0);
    v21 = v20;
    if ( !v9 )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpRmListLock, v20);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    qword_14034D4C8 = (__int64)v19;
    *((_DWORD *)a1 + 26) |= 8u;
    v22 = (__int64 *)*a1;
    v23 = (__int64 **)a1[1];
    if ( *(__int64 **)(*a1 + 8) != a1 || *v23 != a1 )
      __fastfail(3u);
    *v23 = v22;
    v22[1] = (__int64)v23;
    v24 = a1[10];
    if ( v24 )
    {
      *(_QWORD *)(v24 + 5400) = 0LL;
      a1[10] = 0LL;
    }
    qword_14034D4C8 = 0LL;
    v25 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpRmListLock, 1, 0);
    if ( v25 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpRmListLock, v25);
    KeAbPostRelease((ULONG_PTR)&CmpRmListLock);
    v26 = KeGetCurrentThread();
    v27 = v26->KernelApcDisable + 1;
    v26->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v28 = (void *)a1[7];
    if ( v28 )
    {
      ObDereferenceObjectDeferDelete(v28);
      a1[7] = 0LL;
    }
    v29 = (void *)a1[5];
    if ( v29 )
    {
      ObDereferenceObjectDeferDelete(v29);
      a1[5] = 0LL;
    }
    if ( a2 == 1 )
      CmpDelayFreeCmRm(a1);
  }
}
