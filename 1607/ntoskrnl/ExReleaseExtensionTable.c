/*
 * XREFs of ExReleaseExtensionTable @ 0x1400B4CB0
 * Callers:
 *     LsaFreeReturnBuffer @ 0x1404D4200 (LsaFreeReturnBuffer.c)
 *     PcwAddInstance @ 0x1404D4324 (PcwAddInstance.c)
 *     LsaLookupAuthenticationPackage @ 0x14052E614 (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x14052E678 (LsaRegisterLogonProcess.c)
 *     PcwCloseInstance @ 0x14054CEEC (PcwCloseInstance.c)
 *     PcwCreateInstance @ 0x14054D2A0 (PcwCreateInstance.c)
 *     BCryptHashData @ 0x1405508D0 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x14055093C (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x140550980 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1405509DC (BCryptCreateHash.c)
 *     BCryptGetProperty @ 0x140550A60 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140550AE0 (BCryptOpenAlgorithmProvider.c)
 *     PcwRegister @ 0x140553DEC (PcwRegister.c)
 *     PspNetRateControlDispatch @ 0x1406806BC (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14068CCC4 (BCryptGenerateSymmetricKey.c)
 *     BCryptImportKeyPair @ 0x14068CD58 (BCryptImportKeyPair.c)
 *     BCryptSetProperty @ 0x14068CDD4 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14068CE54 (LsaCallAuthenticationPackage.c)
 *     LsaDeregisterLogonProcess @ 0x14068CEEC (LsaDeregisterLogonProcess.c)
 *     LsaLogonUser @ 0x14068CF30 (LsaLogonUser.c)
 *     PcwUnregister @ 0x1406B6C0C (PcwUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 8);
}
