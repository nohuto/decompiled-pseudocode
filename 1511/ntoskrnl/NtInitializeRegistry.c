/*
 * XREFs of NtInitializeRegistry @ 0x14050C454
 * Callers:
 *     <none>
 * Callees:
 *     CmCompleteInitMachineConfig_0 @ 0x140001270 (CmCompleteInitMachineConfig_0.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140079E5C (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwInitializeRegistry @ 0x140152460 (ZwInitializeRegistry.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 *     AlpcMessageDeleteProcedure @ 0x1404E2C00 (AlpcMessageDeleteProcedure.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     ExpRefreshSystemTime @ 0x14051ECD8 (ExpRefreshSystemTime.c)
 *     PsBootPhaseComplete @ 0x14051ED68 (PsBootPhaseComplete.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     PnpBootPhaseComplete @ 0x140523EA0 (PnpBootPhaseComplete.c)
 *     CmpCmdInit @ 0x1405301A0 (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x14054307C (CmpInitializeSystemHivesLoad.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     CmpUpdatePhaseAccessBit @ 0x1405480E8 (CmpUpdatePhaseAccessBit.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140549C30 (ExNotifyPlatformBinaryExecuted.c)
 *     PoClearTransitionMarker @ 0x14054B15C (PoClearTransitionMarker.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     CmpSyncNextBackupHive @ 0x1405E57D8 (CmpSyncNextBackupHive.c)
 */

NTSTATUS __stdcall NtInitializeRegistry(USHORT Flag)
{
  PVOID *v3; // rcx
  NTSTATUS v4; // ebx
  unsigned __int16 v5; // di
  bool v6; // di
  __int64 v7; // rcx
  NTSTATUS v8; // eax
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  _QWORD v11[4]; // [rsp+50h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+98h] [rbp+28h] BYREF

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
    PopAcquirePolicyLock();
    PopThermalCriticalShutdownEnabled = 1;
    if ( PopThermalCriticalShutdownInitiated )
    {
      v10 = 0;
      v9 = 0xC000000400000006uLL;
      v11[1] = 0LL;
      v11[2] = 0LL;
      v11[0] = 0x8000000001LL;
      PopCriticalShutdownInProgress = 1;
      PopExecutePowerAction((__int64)v11, 0, &v9, 5, 1u);
    }
    PopReleasePolicyLock();
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
  off_1402D2A58(v3);
  CmpUpdatePhaseAccessBit();
  return v4;
}
