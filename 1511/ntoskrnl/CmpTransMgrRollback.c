/*
 * XREFs of CmpTransMgrRollback @ 0x1404BA9E8
 * Callers:
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     CmRmFinalizeRecovery @ 0x1404C2C8C (CmRmFinalizeRecovery.c)
 *     CmpRmUnDoPhase @ 0x1405E6328 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  char *v6; // rdx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  *a2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 104) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v10, 0);
    v6 = NextElement;
    if ( !NextElement )
      break;
    v8 = *((_DWORD *)NextElement + 16);
    if ( (v8 & 1) == 0 )
    {
      ++*a2;
      v9 = *((_DWORD *)NextElement + 17);
      if ( v9 )
      {
        if ( v9 == 12 && !*((_DWORD *)v6 + 22) )
          *((_DWORD *)v6 + 22) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 40LL);
      }
      else if ( !*((_DWORD *)v6 + 20) )
      {
        *((_DWORD *)v6 + 20) = *(_DWORD *)(*((_QWORD *)v6 + 6) + 40LL);
      }
      *((_DWORD *)v6 + 16) = v8 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
