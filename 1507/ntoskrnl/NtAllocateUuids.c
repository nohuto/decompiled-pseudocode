/*
 * XREFs of NtAllocateUuids @ 0x140555758
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x14055593C (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x140555964 (ExpAllocateUuids.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PUCHAR Seed)
{
  PULARGE_INTEGER v7; // r14
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _BYTE *v10; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  NTSTATUS v15; // esi
  char v16; // si
  __int16 v17; // ax
  __int16 v19; // ax
  ULONG v20; // [rsp+24h] [rbp-44h] BYREF
  ULONG v21; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v22[4]; // [rsp+30h] [rbp-38h] BYREF

  v7 = Time;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Time & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Time >= MmUserProbeAddress )
      Time = (PULARGE_INTEGER)MmUserProbeAddress;
    LOBYTE(Time->LowPart) = Time->LowPart;
    HIBYTE(Time->QuadPart) = HIBYTE(Time->QuadPart);
    if ( ((unsigned __int8)Range & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = Range;
    if ( (unsigned __int64)Range >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
    if ( ((unsigned __int8)Sequence & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = Sequence;
    if ( (unsigned __int64)Sequence >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v10 = Seed;
    if ( (unsigned __int64)Seed >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[5] = v10[5];
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0LL, (__int64)Seed);
  v14 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v12, (ULONG_PTR)&ExpUuidLock, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = ExpAllocateUuids(v22, &v20, &v21);
  if ( v15 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    v19 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v15;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf();
    v16 = ExpUuidCacheValid;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    v17 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    *v7 = (ULARGE_INTEGER)v22[0];
    *Range = v20;
    *Sequence = v21;
    *(_DWORD *)Seed = *(int *)((char *)&dword_14077E284 + 2);
    *((_WORD *)Seed + 2) = HIWORD(dword_14077E288);
    return v16 == 0 ? 0x40020056 : 0;
  }
}
