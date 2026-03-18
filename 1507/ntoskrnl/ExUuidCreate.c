/*
 * XREFs of ExUuidCreate @ 0x1404EBB90
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     CmpUuidCreate @ 0x1404EB848 (CmpUuidCreate.c)
 *     NtCreateJobObject @ 0x1404EB86C (NtCreateJobObject.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14068BD84 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x14070D5EC (BiCreateObject.c)
 *     VerifierExUuidCreate @ 0x140741C34 (VerifierExUuidCreate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x14055593C (ExpUuidSaveSequenceNumberIf.c)
 *     ExpUuidGetValues @ 0x1405C235C (ExpUuidGetValues.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  __int64 v1; // r9
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS Values; // r14d
  __int64 v5; // rsi
  char v6; // cl
  int v7; // eax
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // r9
  signed __int8 v12; // cf
  __int64 v13; // rbp
  __int16 v14; // ax
  __int16 v15; // ax

  CurrentThread = KeGetCurrentThread();
  Values = 0;
  while ( 1 )
  {
    do
    {
      v5 = ExpUuidCachedValues;
      v6 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_14077E284;
      *(_DWORD *)&Uuid->Data4[4] = dword_14077E288;
      v7 = _InterlockedDecrement(&dword_14077E280);
    }
    while ( v5 != ExpUuidCachedValues );
    if ( v7 >= 0 )
    {
      v8 = v5 - v7;
      Uuid->Data1 = v8;
      Uuid->Data2 = WORD2(v8);
      Uuid->Data3 = HIWORD(v8) & 0xFFF | 0x1000;
      if ( !v6 )
        return 1073872982;
      return Values;
    }
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0LL, v1);
    v12 = _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL);
    v13 = v10;
    if ( v12 )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v10, (ULONG_PTR)&ExpUuidLock, v11);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    if ( v5 == ExpUuidCachedValues )
      break;
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    v14 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
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
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return Values;
}
