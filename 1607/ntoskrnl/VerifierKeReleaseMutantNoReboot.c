/*
 * XREFs of VerifierKeReleaseMutantNoReboot @ 0x140712428
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierKeReleaseMutantNoReboot(unsigned __int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8

  VfUtilCheckKernelAddress(a1, 56LL);
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a3;
  return pXdvKeReleaseMutant(a1, a2, v9, v8);
}
