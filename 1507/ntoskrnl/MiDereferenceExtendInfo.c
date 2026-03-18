/*
 * XREFs of MiDereferenceExtendInfo @ 0x140133614
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_14034E7A0, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E7A0, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_14034E7A0, v8, (ULONG_PTR)&qword_14034E7A0, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v7 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E7A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E7A0);
  KeAbPostRelease((ULONG_PTR)&qword_14034E7A0);
  v12 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v12;
  if ( !v12 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
