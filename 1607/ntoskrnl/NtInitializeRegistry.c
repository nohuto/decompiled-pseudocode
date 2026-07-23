/*
 * XREFs of NtInitializeRegistry @ 0x1405476A4
 * Callers:
 *     <none>
 * Callees:
 *     CmCompleteInitMachineConfig_0 @ 0x140001278 (CmCompleteInitMachineConfig_0.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400C1B90 (PsIsCurrentThreadInServerSilo.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwInitializeRegistry @ 0x14015C070 (ZwInitializeRegistry.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     CmpMarkLockTryAcquired @ 0x140528708 (CmpMarkLockTryAcquired.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     EtwInitialize @ 0x1405531AC (EtwInitialize.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     PsBootPhaseComplete @ 0x14055E510 (PsBootPhaseComplete.c)
 *     ExpRefreshSystemTime @ 0x14055E7F0 (ExpRefreshSystemTime.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     CmpCmdInit @ 0x14056F72C (CmpCmdInit.c)
 *     CmpInitializeSystemHivesLoad @ 0x140577634 (CmpInitializeSystemHivesLoad.c)
 *     CmpUpdatePhaseAccessBit @ 0x14057CD2C (CmpUpdatePhaseAccessBit.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x14057F138 (ExNotifyPlatformBinaryExecuted.c)
 *     PoClearTransitionMarker @ 0x1405808D0 (PoClearTransitionMarker.c)
 *     PnpBootPhaseComplete @ 0x140580CE0 (PnpBootPhaseComplete.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     CmpSaveBootControlSet @ 0x1405F9148 (CmpSaveBootControlSet.c)
 *     CmpSyncNextBackupHive @ 0x140604DDC (CmpSyncNextBackupHive.c)
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
