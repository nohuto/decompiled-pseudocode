/*
 * XREFs of HvlQueryVsmConnection @ 0x1400AA1D0
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     VslRegisterLogPages @ 0x140131CF8 (VslRegisterLogPages.c)
 *     VslGetNestedPageProtectionFlags @ 0x14013D140 (VslGetNestedPageProtectionFlags.c)
 *     KeSetPagePrivilege @ 0x140146DA4 (KeSetPagePrivilege.c)
 *     VslConfigureDynamicMemory @ 0x1401C2728 (VslConfigureDynamicMemory.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1401C2DAC (VslQuerySecureKernelProfileInformation.c)
 *     MmSnapTriageDumpInformation @ 0x1401E8040 (MmSnapTriageDumpInformation.c)
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
