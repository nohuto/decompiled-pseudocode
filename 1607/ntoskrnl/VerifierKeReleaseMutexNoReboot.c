/*
 * XREFs of VerifierKeReleaseMutexNoReboot @ 0x1407124C4
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierKeReleaseMutexNoReboot(unsigned __int64 a1, char a2)
{
  __int64 v4; // rdx

  VfUtilCheckKernelAddress(a1, 56LL);
  LOBYTE(v4) = a2;
  return pXdvKeReleaseMutex(a1, v4);
}
