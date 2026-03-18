/*
 * XREFs of ExGetExtensionTable @ 0x1400B6E94
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x14006B670 (ExpBoostIoAfterAcquire.c)
 *     IoStopIoRateControl @ 0x1400B6288 (IoStopIoRateControl.c)
 *     IopIoRateStartRateControl @ 0x1400B6D58 (IopIoRateStartRateControl.c)
 *     BCryptCloseAlgorithmProvider @ 0x14013C1B4 (BCryptCloseAlgorithmProvider.c)
 *     PsBoostThreadOutstandingIoQoS @ 0x14020F068 (PsBoostThreadOutstandingIoQoS.c)
 *     BCryptDecrypt @ 0x140219460 (BCryptDecrypt.c)
 *     BCryptDestroyKey @ 0x140219514 (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x14021955C (BCryptEncrypt.c)
 *     BCryptGenRandom @ 0x140219624 (BCryptGenRandom.c)
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
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ExGetExtensionTable(struct _EX_RUNDOWN_REF *a1)
{
  if ( a1 && ExAcquireRundownProtection(a1 + 8) )
    return a1[10].Count;
  else
    return 0LL;
}
