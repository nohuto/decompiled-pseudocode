/*
 * XREFs of HvlQueryVsmConnection @ 0x1400A8750
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     VslRegisterLogPages @ 0x140132268 (VslRegisterLogPages.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D6B0 (VslGetNestedPageProtectionFlags.c)
 *     KeSetPagePrivilege @ 0x140147314 (KeSetPagePrivilege.c)
 *     VslConfigureDynamicMemory @ 0x1401C260C (VslConfigureDynamicMemory.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401C2C90 (VslQuerySecureKernelProfileInformation.c)
 *     MmSnapTriageDumpInformation @ 0x1401E7E6C (MmSnapTriageDumpInformation.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x1407BD344 (KiSwInterruptPresent.c)
 *     VslpIumPhase0Initialize @ 0x1407CE270 (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
