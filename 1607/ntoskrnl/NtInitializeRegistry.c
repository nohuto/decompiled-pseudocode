/*
 * XREFs of NtInitializeRegistry @ 0x140547164
 * Callers:
 *     <none>
 * Callees:
 *     CmCompleteInitMachineConfig_0 @ 0x140001278 (CmCompleteInitMachineConfig_0.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C3CF0 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwInitializeRegistry @ 0x14015BB00 (ZwInitializeRegistry.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PsCreateSystemThread @ 0x1403E4710 (PsCreateSystemThread.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     CmpMarkLockTryAcquired @ 0x1405281C8 (CmpMarkLockTryAcquired.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     EtwInitialize @ 0x140552C6C (EtwInitialize.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     PsBootPhaseComplete @ 0x14055DFD0 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14055E2B0 (ExpRefreshSystemTime.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     CmpCmdInit @ 0x14056F1EC (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405770F4 (CmpInitializeSystemHivesLoad.c)
 *     CmpUpdatePhaseAccessBit @ 0x14057C880 (CmpUpdatePhaseAccessBit.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x14057EC8C (ExNotifyPlatformBinaryExecuted.c)
 *     PoClearTransitionMarker @ 0x140580424 (PoClearTransitionMarker.c)
 *     PnpBootPhaseComplete @ 0x140580834 (PnpBootPhaseComplete.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     CmpSyncNextBackupHive @ 0x140604D28 (CmpSyncNextBackupHive.c)
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
    CmFirstTime = 0;
    EtwInitialize(2LL);
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
  off_1402F3878(v3);
  CmpUpdatePhaseAccessBit();
  return v4;
}
