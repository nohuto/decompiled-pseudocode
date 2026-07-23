/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x14053B14C
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14053ADB0 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     CmpCleanupLightWeightPrepare @ 0x14053AED8 (CmpCleanupLightWeightPrepare.c)
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char *NextElement; // rax
  __int64 v7; // r8
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v12; // [rsp+58h] [rbp-30h] BYREF

  if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 1uLL) )
    TlgWrite(&stru_1402F34E0, &unk_14027AF1B, 0LL, 0LL, 2u, &pData);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
    v10 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v10, 0);
      if ( !NextElement )
        break;
      v8 = CmpProcessLightWeightUOW(NextElement, 0LL, v7);
      if ( v8 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1);
        goto LABEL_10;
      }
    }
  }
  v8 = 0;
LABEL_10:
  if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 1uLL) )
    TlgWrite(&stru_1402F34E0, &unk_14027AEEA, 0LL, 0LL, 2u, &v12);
  return (unsigned int)v8;
}
