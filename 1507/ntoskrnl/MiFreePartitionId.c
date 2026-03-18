/*
 * XREFs of MiFreePartitionId @ 0x1406A3C54
 * Callers:
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall MiFreePartitionId(unsigned __int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_14034F0A8, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034F0A8, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_14034F0A8, v6, (ULONG_PTR)&qword_14034F0A8, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  _bittestandreset((signed __int32 *)qword_14034F0C8->Buffer, a1);
  *(_QWORD *)(qword_14034F0E8 + 8LL * a1) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034F0A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034F0A8);
  KeAbPostRelease((ULONG_PTR)&qword_14034F0A8);
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
