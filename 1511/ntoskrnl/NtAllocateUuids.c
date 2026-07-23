/*
 * XREFs of NtAllocateUuids @ 0x140487D14
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140487EDC (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x140487F04 (ExpAllocateUuids.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PUCHAR Seed)
{
  PULARGE_INTEGER v7; // r14
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _BYTE *v10; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  NTSTATUS v14; // edi
  char v15; // di
  ULONG v17; // [rsp+24h] [rbp-44h] BYREF
  ULONG v18; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v19[4]; // [rsp+30h] [rbp-38h] BYREF

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
  v12 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v12, (ULONG_PTR)&ExpUuidLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = ExpAllocateUuids(v19, &v17, &v18);
  if ( v14 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    return v14;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf();
    v15 = ExpUuidCacheValid;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    *v7 = (ULARGE_INTEGER)v19[0];
    *Range = v17;
    *Sequence = v18;
    *(_DWORD *)Seed = *(int *)((char *)&dword_1406FB2A4 + 2);
    *((_WORD *)Seed + 2) = HIWORD(dword_1406FB2A8);
    return v15 == 0 ? 0x40020056 : 0;
  }
}
