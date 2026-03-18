/*
 * XREFs of ExReleaseExtensionTable @ 0x1400B6E88
 * Callers:
 *     LsaFreeReturnBuffer @ 0x1404F1A6C (LsaFreeReturnBuffer.c)
 *     PcwAddInstance @ 0x1404F1B90 (PcwAddInstance.c)
 *     LsaLookupAuthenticationPackage @ 0x14052E0D4 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x14052E138 (LsaRegisterLogonProcess.c)
 *     PcwCloseInstance @ 0x14054C9AC (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x14054CD60 (PcwCreateInstance.c)
 *     BCryptHashData @ 0x140550390 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x1405503FC (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140550440 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x14055049C (BCryptCreateHash.c)
 *     BCryptGetProperty @ 0x140550520 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405505A0 (BCryptOpenAlgorithmProvider.c)
 *     PcwRegister @ 0x1405538AC (PcwRegister.c)
 *     PspNetRateControlDispatch @ 0x1406805D8 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14068CBE0 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14068CC74 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14068CCF0 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14068CD70 (LsaCallAuthenticationPackage.c)
 *     LsaDeregisterLogonProcess @ 0x14068CE08 (LsaDeregisterLogonProcess.c)
 *     LsaLogonUser @ 0x14068CE4C (LsaLogonUser.c)
 *     PcwUnregister @ 0x1406B6AD4 (PcwUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 8);
}
