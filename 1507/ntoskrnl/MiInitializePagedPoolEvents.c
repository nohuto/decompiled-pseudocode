/*
 * XREFs of MiInitializePagedPoolEvents @ 0x1407CBB28
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407CAE44 (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x1400140A8 (MiFreePoolPagesLeft.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall MiInitializePagedPoolEvents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int16 v10; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_14034FC28, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034FC28, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_14034FC28, v5, (ULONG_PTR)&qword_14034FC28, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = MiFreePoolPagesLeft(6);
  if ( v9 < qword_14034E6C0 )
    KeResetEvent(qword_140353E28);
  else
    KeSetEvent(qword_140353E28, 0, 0);
  if ( v9 <= qword_14034E6B8 )
    KeSetEvent(qword_140353E20, 0, 0);
  else
    KeResetEvent(qword_140353E20);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034FC28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034FC28);
  KeAbPostRelease((ULONG_PTR)&qword_14034FC28);
  v10 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v10;
  if ( !v10 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
