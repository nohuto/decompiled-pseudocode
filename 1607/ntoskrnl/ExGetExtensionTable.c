/*
 * XREFs of ExGetExtensionTable @ 0x1400B4CBC
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B1F0 (ExpBoostIoAfterAcquire.c)
 *     IoStopIoRateControl @ 0x1400B40B0 (IoStopIoRateControl.c)
 *     IopIoRateStartRateControl @ 0x1400B4B80 (IopIoRateStartRateControl.c)
 *     BCryptCloseAlgorithmProvider @ 0x14013C724 (BCryptCloseAlgorithmProvider.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14020EE94 (PsBoostThreadOutstandingIoQoS.c)
 *     BCryptDecrypt @ 0x14021928C (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x140219340 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x140219388 (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x140219450 (BCryptGenRandom.c)
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
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
