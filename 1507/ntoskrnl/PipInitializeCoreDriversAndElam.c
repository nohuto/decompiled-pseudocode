/*
 * XREFs of PipInitializeCoreDriversAndElam @ 0x1407B7DC8
 * Callers:
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x1407B7E7C (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     PipInitializeDriverDependentDLLs @ 0x1407B8164 (PipInitializeDriverDependentDLLs.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407BA5D4 (PipInitializeEarlyLaunchDrivers.c)
 *     KeInitAmd64SpecificState @ 0x1407BA6E4 (KeInitAmd64SpecificState.c)
 */

__int64 __fastcall PipInitializeCoreDriversAndElam(__int64 a1)
{
  __int64 result; // rax

  PipInitializeDriverDependentDLLs(0LL, a1);
  PipInitializeCoreDriversByGroup(0LL, a1);
  PspPicoRegistrationDisabled = 1;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  PspKernelRangeList = 0LL;
  qword_1403212D0 = 0LL;
  PspKernelRanges = 0LL;
  qword_1403212C0 = 0LL;
  PipInitializeEarlyLaunchDrivers(a1);
  PnpBootDriverCallbackRegistrationClosed = 1;
  PnpNotifyEarlyLaunchStatusUpdate(0LL);
  PipInitializeDriverDependentDLLs(1LL, a1);
  PipInitializeCoreDriversByGroup(1LL, a1);
  result = PipInitializeCoreDriversByGroup(2LL, a1);
  PnpCoreDriverGroupLoadPhase = 3;
  return result;
}
