/*
 * XREFs of NtAllocateUuids @ 0x1404C80B0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1404C8260 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x1404C8288 (ExpAllocateUuids.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PUCHAR Seed)
{
  PULARGE_INTEGER v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  _BYTE *v12; // rax
  _BYTE *v13; // rdi
  NTSTATUS v14; // edi
  char v15; // di
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG v23; // [rsp+24h] [rbp-44h] BYREF
  ULONG v24; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v25[4]; // [rsp+30h] [rbp-38h] BYREF

  v7 = Time;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((unsigned __int8)Time & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Time >= 0x7FFFFFFF0000LL )
      Time = (PULARGE_INTEGER)0x7FFFFFFF0000LL;
    LOBYTE(Time->LowPart) = Time->LowPart;
    HIBYTE(Time->QuadPart) = HIBYTE(Time->QuadPart);
    if ( ((unsigned __int8)Range & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (__int64)Range;
    if ( (unsigned __int64)Range >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    if ( ((unsigned __int8)Sequence & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (__int64)Sequence;
    if ( (unsigned __int64)Sequence >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    v10 = (__int64)Seed;
    if ( (unsigned __int64)Seed >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v10 = *(_BYTE *)v10;
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(v10 + 5);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v12, (ULONG_PTR)&ExpUuidLock);
  if ( v13 )
    v13[26] |= 1u;
  v14 = ExpAllocateUuids(v25, &v23, &v24);
  if ( v14 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v20, v21, v22);
    return v14;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf();
    v15 = ExpUuidCacheValid;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
    *v7 = (ULARGE_INTEGER)v25[0];
    *Range = v23;
    *Sequence = v24;
    *(_DWORD *)Seed = *(int *)((char *)&dword_140747294 + 2);
    *((_WORD *)Seed + 2) = word_14074729A;
    return v15 == 0 ? 0x40020056 : 0;
  }
}
