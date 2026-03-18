/*
 * XREFs of MmGetPageFileForCrashDump @ 0x1406A54C8
 * Callers:
 *     IoConfigureCrashDump @ 0x14016BF80 (IoConfigureCrashDump.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MmGetPageFileForCrashDump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int16 v14; // cx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)qword_1403540A0, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)qword_1403540A0, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(qword_1403540A0, v7, (ULONG_PTR)qword_1403540A0, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( Count )
  {
    v11 = qword_1403551E0;
    v12 = Count;
    do
    {
      v13 = *v11;
      if ( (*(_BYTE *)(*v11 + 164LL) & 0x50) == 0 && *(_QWORD *)(v13 + 16) > v6 )
      {
        v5 = *(_QWORD *)(v13 + 184);
        v6 = *(_QWORD *)(v13 + 16);
      }
      ++v11;
      --v12;
    }
    while ( v12 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403540A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_1403540A0);
  KeAbPostRelease((ULONG_PTR)qword_1403540A0);
  v14 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v14;
  if ( !v14 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
