/*
 * XREFs of NtInitializeRegistry @ 0x140583714
 * Callers:
 *     <none>
 * Callees:
 *     CmCompleteInitMachineConfig_0 @ 0x140001270 (CmCompleteInitMachineConfig_0.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140016968 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwInitializeRegistry @ 0x140180DF0 (ZwInitializeRegistry.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     PsBootPhaseComplete @ 0x1405A4884 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405B9910 (CmpInitializeSystemHivesLoad.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405BF940 (CmpUpdatePhaseAccessBit.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1405C0FE8 (ExNotifyPlatformBinaryExecuted.c)
 *     PnpBootPhaseComplete @ 0x1405C217C (PnpBootPhaseComplete.c)
 *     PoClearTransitionMarker @ 0x1405C2574 (PoClearTransitionMarker.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     CmpSyncNextBackupHive @ 0x14065C7C4 (CmpSyncNextBackupHive.c)
 */

NTSTATUS __stdcall NtInitializeRegistry(USHORT Flag)
{
  PVOID *v3; // rcx
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // di
  bool v6; // di
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  HANDLE ThreadHandle; // [rsp+58h] [rbp+10h] BYREF

  if ( KeGetCurrentThread()->PreviousMode == 1 )
  {
    if ( Flag != 1002 )
      return ZwInitializeRegistry(Flag);
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
      return CmpSyncNextBackupHive();
    return -1073741727;
  }
  if ( Flag > 0x3E9u )
    return -1073741811;
  if ( Flag < 2u )
  {
    v6 = Flag == 1;
    if ( CmFirstTime != 1 )
      return -1073741790;
    EtwpFileSystemReady = 1;
    CmFirstTime = 0;
    CmCompleteInitMachineConfig_0();
    CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v7) = v6;
    CmpCmdInit(v7);
    CmpUnlockRegistry();
    if ( !v6 )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || CmpShareSystemHives )
      {
        CmpFinishSystemHivesLoad((PVOID)1);
      }
      else
      {
        v8 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, CmpFinishSystemHivesLoad, 0LL);
        if ( v8 < 0 )
          KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v8);
        ZwClose(ThreadHandle);
      }
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete();
    }
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    NlsLocaleSectionPointer = (PVOID)1;
    ExNotifyPlatformBinaryExecuted();
    CmpShareSystemHives = 0;
    if ( !v6 )
      IopCopyBootLogRegistryToFile();
    return 0;
  }
  v4 = 0;
  if ( PsIsCurrentThreadInServerSilo() )
    return 0;
  if ( !CmBootAcceptFirstTime )
    return -1073741790;
  CmBootAcceptFirstTime = 0;
  v5 = Flag - 2;
  if ( !v5 )
    return -1073741811;
  if ( CmpLKGEnabled )
    v4 = CmpSaveBootControlSet(v5);
  off_140321BA8(v3);
  CmpUpdatePhaseAccessBit();
  return v4;
}
