/*
 * XREFs of MiReleaseSessionVa @ 0x14010876C
 * Callers:
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall MiReleaseSessionVa(__int64 a1, ULONG a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64)(a1 - qword_14034EAB0) >> 21;
  v7 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  --CurrentThread->SpecialApcDisable;
  v8 = (unsigned __int64 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7688);
  v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  RtlClearBits((PRTL_BITMAP)(v7 + 7696), v6, a2);
  if ( (unsigned int)v6 < *(_DWORD *)(v7 + 7712) )
    *(_DWORD *)(v7 + 7712) = v6;
  *(_DWORD *)(v7 + 7820) -= a2;
  v12 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 7688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v12 + 7688));
  KeAbPostRelease(v12 + 7688);
  v13 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v13;
  if ( !v13 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
