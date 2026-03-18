/*
 * XREFs of ExUuidCreate @ 0x140487608
 * Callers:
 *     CmpUuidCreate @ 0x14048548C (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14060C1C8 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x14068DAD4 (BiCreateObject.c)
 *     VerifierExUuidCreate @ 0x1406C0440 (VerifierExUuidCreate.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x140487EDC (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x14054AED0 (ExpUuidGetValues.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // esi
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rbp

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_1406FB2A4;
      *(_DWORD *)&Uuid->Data4[4] = dword_1406FB2A8;
      v6 = _InterlockedDecrement(&dword_1406FB2A0);
    }
    while ( v4 != ExpUuidCachedValues );
    if ( v6 >= 0 )
    {
      v7 = v4 - v6;
      Uuid->Data1 = v7;
      Uuid->Data2 = WORD2(v7);
      Uuid->Data3 = HIWORD(v7) & 0xFFF | 0x1000;
      if ( !v5 )
        return 1073872982;
      return Values;
    }
    --CurrentThread->KernelApcDisable;
    v9 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v9, (ULONG_PTR)&ExpUuidLock);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    if ( v4 == ExpUuidCachedValues )
      break;
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  Values = ExpUuidGetValues(&ExpUuidCachedValues);
  if ( !Values )
  {
    ExpUuidSaveSequenceNumberIf();
    goto LABEL_14;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return Values;
}
