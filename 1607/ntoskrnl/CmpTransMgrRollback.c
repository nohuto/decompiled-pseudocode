/*
 * XREFs of CmpTransMgrRollback @ 0x1404CBA14
 * Callers:
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     CmpAbortLightWeightTransaction @ 0x1404CB8DC (CmpAbortLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1404CE378 (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x140605A30 (CmpRmUnDoPhase.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // r8d
  int v12; // eax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v13, 0);
    v6 = NextElement;
    if ( !NextElement )
      break;
    v11 = *((_DWORD *)NextElement + 16);
    if ( (v11 & 1) == 0 )
    {
      ++*a2;
      v12 = *((_DWORD *)NextElement + 17);
      if ( v12 )
      {
        if ( v12 == 12 && !*((_DWORD *)v6 + 24) )
          *((_DWORD *)v6 + 24) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 32LL);
      }
      else if ( !*((_DWORD *)v6 + 22) )
      {
        *((_DWORD *)v6 + 22) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 32LL);
      }
      *((_DWORD *)v6 + 16) = v11 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return 0LL;
}
