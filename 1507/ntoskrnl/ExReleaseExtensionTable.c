/*
 * XREFs of ExReleaseExtensionTable @ 0x1401207F8
 * Callers:
 *     LsaDeregisterLogonProcess @ 0x14040A64C (LsaDeregisterLogonProcess.c)
 *     PcwCloseInstance @ 0x14053C65C (PcwCloseInstance.c)
 *     LsaFreeReturnBuffer @ 0x14053C690 (LsaFreeReturnBuffer.c)
 *     PcwAddInstance @ 0x14053C6D4 (PcwAddInstance.c)
 *     LsaLookupAuthenticationPackage @ 0x1405647EC (LsaLookupAuthenticationPackage.c)
 *     LsaRegisterLogonProcess @ 0x14056488C (LsaRegisterLogonProcess.c)
 *     BCryptHashData @ 0x14058F728 (BCryptHashData.c)
 *     BCryptDestroyHash @ 0x14058F794 (BCryptDestroyHash.c)
 *     BCryptFinishHash @ 0x14058F7D8 (BCryptFinishHash.c)
 *     BCryptCreateHash @ 0x14058F834 (BCryptCreateHash.c)
 *     BCryptGetProperty @ 0x14058F8B8 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x14058F938 (BCryptOpenAlgorithmProvider.c)
 *     PcwRegister @ 0x140594E30 (PcwRegister.c)
 *     PcwCreateInstance @ 0x1405B8490 (PcwCreateInstance.c)
 *     PspNetRateControlDispatch @ 0x1406C46E8 (PspNetRateControlDispatch.c)
 *     BCryptGenerateSymmetricKey @ 0x1406D097C (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x1406D0A10 (BCryptSetProperty.c)
 *     LsaCallAuthenticationPackage @ 0x1406D0A7C (LsaCallAuthenticationPackage.c)
 *     LsaLogonUser @ 0x1406D0B14 (LsaLogonUser.c)
 *     PcwUnregister @ 0x1406F87D8 (PcwUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall ExReleaseExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rcx
  unsigned __int64 v2; // rtt

  v1 = a1 + 8;
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 - 2, v2) )
    ExfReleaseRundownProtection(v1);
}
