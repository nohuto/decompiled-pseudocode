/*
 * XREFs of ExGetExtensionTable @ 0x1400E8ED8
 * Callers:
 *     BCryptCloseAlgorithmProvider @ 0x140133C04 (BCryptCloseAlgorithmProvider.c)
 *     IopCreateFlow @ 0x1401BD964 (IopCreateFlow.c)
 *     IopDeleteFlow @ 0x1401BD9BC (IopDeleteFlow.c)
 *     IopQueryFlowHistory @ 0x1401BDA74 (IopQueryFlowHistory.c)
 *     IopQueryFlowInformation @ 0x1401BDADC (IopQueryFlowInformation.c)
 *     IopSetFlowPolicy @ 0x1401BDB94 (IopSetFlowPolicy.c)
 *     IopSetHandleFlow @ 0x1401BDC08 (IopSetHandleFlow.c)
 *     BCryptDecrypt @ 0x1402000A4 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x140200158 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x1402001A0 (BCryptEncrypt.c)
 *     SmCrGenRandom @ 0x14020A9A4 (SmCrGenRandom.c)
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
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
