/*
 * XREFs of PsIsHostSilo @ 0x140079F68
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     SeCreateClientSecurityEx @ 0x14040F250 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140412280 (SepCreateClientSecurityEx.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046B43C (IopAllocateFoExtensionsOnCreate.c)
 *     MmMapApiSetView @ 0x14046BD4C (MmMapApiSetView.c)
 *     PsRegisterSiloMonitor @ 0x140551E98 (PsRegisterSiloMonitor.c)
 *     EtwInitializeSiloState @ 0x1405631E8 (EtwInitializeSiloState.c)
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14056B9C0 (SepRmLsaConnectRequest.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140579BE8 (ObpCreateDosDevicesDirectory.c)
 *     ObInitServerSilo @ 0x140579FFC (ObInitServerSilo.c)
 *     PspCatchCriticalBreak @ 0x14067FBF8 (PspCatchCriticalBreak.c)
 *     SeInitServerSilo @ 0x14068CAF4 (SeInitServerSilo.c)
 *     SepUpdateSiloInClientSecurity @ 0x140692638 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsHostSilo(__int64 a1)
{
  return a1 == 0;
}
