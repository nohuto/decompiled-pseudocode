/*
 * XREFs of VerifierObGetObjectSecurity @ 0x14071CCAC
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObGetObjectSecurity(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  VfUtilCheckKernelAddress(a1, 8LL);
  return pXdvObGetObjectSecurity(a1, a2, a3);
}
