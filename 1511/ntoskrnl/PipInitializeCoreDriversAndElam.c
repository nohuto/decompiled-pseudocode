/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x140750C54
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlConnectSwInterrupt @ 0x14074F444 (HvlConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x14074F4C0 (KeInitAmd64SpecificState.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14074F500 (PipInitializeEarlyLaunchDrivers.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140750D18 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x140751248 (PipInitializeDriverDependentDLLs.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0x40uLL);
  PspKernelRanges = 0LL;
  qword_1402D2180 = 0LL;
  HvlConnectSwInterrupt(0LL, 0LL);
  PipInitializeEarlyLaunchDrivers(a1, v2);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
