/*
 * XREFs of ExUuidCreate @ 0x1404A2404
 * Callers:
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     CmpUuidCreate @ 0x14049F598 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x14061FE90 (-CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140640250 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x1406D2334 (BiCreateObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1404E5644 (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x140580AC0 (ExpUuidGetValues.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS Values; // esi
  __int64 v4; // rdi
  char v5; // cl
  int v6; // eax
  __int64 v7; // rdi
  _BYTE *v9; // rax
  signed __int8 v10; // cf
  _BYTE *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v4 = ExpUuidCachedValues;
      v5 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_140747294;
      *(_DWORD *)&Uuid->Data4[4] = dword_140747298;
      v6 = _InterlockedDecrement(&dword_140747290);
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
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v9, (ULONG_PTR)&ExpUuidLock);
    if ( v11 )
      v11[26] |= 1u;
    if ( v4 == ExpUuidCachedValues )
      break;
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12, v13, v14);
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
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v15, v16, v17);
  return Values;
}
