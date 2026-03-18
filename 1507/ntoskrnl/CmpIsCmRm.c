/*
 * XREFs of CmpIsCmRm @ 0x1404EF7E8
 * Callers:
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

char __fastcall CmpIsCmRm(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rbp
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rdi
  __int64 NextElement; // rax
  signed __int32 v12; // r10d
  signed __int32 v13; // eax
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeGetCurrentThread();
  v8 = KeAbPreAcquire((ULONG_PTR)&CmpRmListLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandreset((volatile signed __int32 *)&CmpRmListLock, 0);
  v10 = v8;
  if ( !v9 )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpRmListLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_14034D4C8 = (__int64)v7;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(&CmpRmListHead, &v20, 0LL);
    if ( !NextElement )
      break;
    if ( (_QWORD *)NextElement == a1 )
    {
      if ( a1[6] )
      {
        if ( a1[7] )
        {
          if ( a1[4] )
          {
            v5 = 0;
            if ( a1[5] )
              v5 = v12;
          }
        }
      }
      qword_14034D4C8 = 0LL;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpRmListLock, v12, 0);
      if ( v13 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpRmListLock, v13);
      KeAbPostRelease((ULONG_PTR)&CmpRmListLock);
      v14 = KeGetCurrentThread();
      v15 = v14->KernelApcDisable + 1;
      v14->KernelApcDisable = v15;
      if ( !v15
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
        && !v14->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return v5;
    }
  }
  qword_14034D4C8 = 0LL;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpRmListLock, v12, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpRmListLock, v17);
  KeAbPostRelease((ULONG_PTR)&CmpRmListLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0;
}
