/*
 * XREFs of ExReleaseExtensionTable @ 0x1400E8ECC
 * Callers:
 *     LsaDeregisterLogonProcess @ 0x1403B5898 (LsaDeregisterLogonProcess.c)
 *     PcwCloseInstance @ 0x1404B0694 (PcwCloseInstance.c)
 *     LsaFreeReturnBuffer @ 0x1404B06C8 (LsaFreeReturnBuffer.c)
 *     PcwAddInstance @ 0x1404B070C (PcwAddInstance.c)
 *     LsaLookupAuthenticationPackage @ 0x1404EC33C (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x1404EC3D8 (LsaRegisterLogonProcess.c)
 *     BCryptHashData @ 0x1405221BC (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x140522228 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x14052226C (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x1405222C8 (BCryptCreateHash.c)
 *     BCryptGetProperty @ 0x14052234C (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x1405223CC (BCryptOpenAlgorithmProvider.c)
 *     PcwRegister @ 0x140527F1C (PcwRegister.c)
 *     PcwCreateInstance @ 0x1405425C0 (PcwCreateInstance.c)
 *     PspNetRateControlDispatch @ 0x140642198 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x14064D530 (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x14064D5C4 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x14064D630 (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x14064D6C8 (LsaLogonUser.c)
 *     PcwUnregister @ 0x140674194 (PcwUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 8);
}
