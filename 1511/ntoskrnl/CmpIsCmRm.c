/*
 * XREFs of CmpIsCmRm @ 0x1403D5A78
 * Callers:
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmListGetNextElement @ 0x1403D72EC (CmListGetNextElement.c)
 */

char __fastcall CmpIsCmRm(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  __int64 NextElement; // rax
  char v5; // r8
  char v6; // al
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement(&CmpRmListHead, &v8, 0LL);
    if ( !NextElement )
      break;
    if ( (_QWORD *)NextElement == a1 )
    {
      if ( a1[6] && a1[7] && a1[4] )
      {
        v6 = 0;
        if ( a1[5] )
          v6 = v5 + 1;
        v2 = v6;
      }
      break;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
