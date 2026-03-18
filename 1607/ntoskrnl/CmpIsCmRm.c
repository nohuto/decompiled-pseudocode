/*
 * XREFs of CmpIsCmRm @ 0x1404DA06C
 * Callers:
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     CmListGetNextElement @ 0x140402E2C (CmListGetNextElement.c)
 */

char __fastcall CmpIsCmRm(char *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  char *NextElement; // rax
  char v5; // r8
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v11 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement(&CmpRmListHead, &v11, 0);
    if ( !NextElement )
      break;
    if ( NextElement == a1 )
    {
      if ( *((_QWORD *)a1 + 6) && *((_QWORD *)a1 + 7) && *((_QWORD *)a1 + 4) )
      {
        v6 = 0;
        if ( *((_QWORD *)a1 + 5) )
          v6 = v5 + 1;
        v2 = v6;
      }
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v2;
}
