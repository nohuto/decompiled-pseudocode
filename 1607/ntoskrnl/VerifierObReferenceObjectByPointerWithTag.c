/*
 * XREFs of VerifierObReferenceObjectByPointerWithTag @ 0x14071CE3C
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 */

__int64 __fastcall VerifierObReferenceObjectByPointerWithTag(unsigned __int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v8; // r9

  VfUtilCheckKernelAddress(a1, 8LL);
  LOBYTE(v8) = a4;
  return pXdvObReferenceObjectByPointerWithTag(a1, a2, a3, v8);
}
