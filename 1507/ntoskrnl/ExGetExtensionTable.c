/*
 * XREFs of ExGetExtensionTable @ 0x140120818
 * Callers:
 *     BCryptCloseAlgorithmProvider @ 0x14015E040 (BCryptCloseAlgorithmProvider.c)
 *     IopCreateFlow @ 0x1401F91EC (IopCreateFlow.c)
 *     IopDeleteFlow @ 0x1401F925C (IopDeleteFlow.c)
 *     IopQueryFlowHistory @ 0x1401F9328 (IopQueryFlowHistory.c)
 *     IopQueryFlowInformation @ 0x1401F93A4 (IopQueryFlowInformation.c)
 *     IopSetFlowPolicy @ 0x1401F9470 (IopSetFlowPolicy.c)
 *     IopSetHandleFlow @ 0x1401F94F8 (IopSetHandleFlow.c)
 *     BCryptDecrypt @ 0x14024EF60 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x14024F028 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x14024F088 (BCryptEncrypt.c)
 *     SmCrGenRandom @ 0x140259EF4 (SmCrGenRandom.c)
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
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  unsigned __int64 v3; // rtt

  if ( a1
    && ((v2 = a1 + 8,
         _m_prefetchw(v2),
         v3 = v2->Count & 0xFFFFFFFFFFFFFFFEuLL,
         v3 == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v3 + 2, v3))
     || ExfAcquireRundownProtection(v2)) )
  {
    return a1[10].Count;
  }
  else
  {
    return 0LL;
  }
}
