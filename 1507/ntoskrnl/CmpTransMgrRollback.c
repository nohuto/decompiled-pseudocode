/*
 * XREFs of CmpTransMgrRollback @ 0x1405640A8
 * Callers:
 *     CmRmFinalizeRecovery @ 0x1404EC588 (CmRmFinalizeRecovery.c)
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  char *NextElement; // rax
  signed __int32 v11; // r10d
  char *v12; // rdx
  signed __int32 v13; // eax
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeGetCurrentThread();
  v8 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
  v9 = v8;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  qword_14034D768 = (__int64)v7;
  *(_DWORD *)(a1 + 104) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v19, 0);
    v12 = NextElement;
    if ( !NextElement )
      break;
    v17 = *((_DWORD *)NextElement + 16);
    if ( ((unsigned __int8)v17 & (unsigned __int8)v11) == 0 )
    {
      *a2 += v11;
      v18 = *((_DWORD *)NextElement + 17);
      if ( v18 )
      {
        if ( v18 == 12 && !*((_DWORD *)v12 + 22) )
          *((_DWORD *)v12 + 22) = *(_DWORD *)(*((_QWORD *)v12 + 6) + 40LL);
      }
      else if ( !*((_DWORD *)v12 + 20) )
      {
        *((_DWORD *)v12 + 20) = *(_DWORD *)(*((_QWORD *)v12 + 6) + 40LL);
      }
      *((_DWORD *)v12 + 16) = v11 | v17;
    }
  }
  qword_14034D768 = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, v11, 0);
  if ( v13 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v13);
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
  return 0LL;
}
