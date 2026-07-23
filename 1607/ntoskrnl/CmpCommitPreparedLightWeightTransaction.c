/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x14053B03C
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
 *     CmpProcessLightWeightUOW @ 0x14053B24C (CmpProcessLightWeightUOW.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *NextElement; // rax
  int v8; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+38h] [rbp-70h] BYREF
  __int64 v10; // [rsp+40h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-60h] BYREF
  int *v12; // [rsp+68h] [rbp-40h]
  int v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+74h] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-30h] BYREF

  if ( a1 )
  {
    v1 = 0;
    if ( stru_1402F34E0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F34E0, 1uLL) )
      TlgWrite(&stru_1402F34E0, &unk_14027AF8F, 0LL, 0LL, 2u, &pData);
    v10 = MEMORY[0xFFFFF78000000014];
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
    v9 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v9, 0);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v10, 1LL);
      ++v1;
    }
    if ( stru_1402F34E0.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_1402F34E0, 1uLL) )
      {
        v14 = 0;
        v12 = &v8;
        v8 = v1;
        v13 = 4;
        TlgWrite(&stru_1402F34E0, &unk_14027AF4C, 0LL, 0LL, 3u, &v11);
      }
    }
  }
}
