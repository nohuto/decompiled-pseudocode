/*
 * XREFs of ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159290
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1400DCA70 (KeResumeClockTimerFromIdle.c)
 *     KiIntSteerConnect @ 0x14012D37C (KiIntSteerConnect.c)
 *     KiIsInterruptTypeSecondary @ 0x14012D8E0 (KiIsInterruptTypeSecondary.c)
 *     IoInitializeBugCheckProgress @ 0x1401C60F0 (IoInitializeBugCheckProgress.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopCheckpointSystemSleep @ 0x1403CEBA4 (PopCheckpointSystemSleep.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 *     KeInitializeTimerTable @ 0x14054E370 (KeInitializeTimerTable.c)
 *     IopConnectInterruptFullySpecified @ 0x14057A334 (IopConnectInterruptFullySpecified.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D044 (IopAllocatePassiveInterruptBlock.c)
 *     PopInitPlatformSettings @ 0x1407BAB80 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

char ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator()
{
  return 0;
}
