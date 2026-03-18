/*
 * XREFs of HviGetHypervisorFeatures @ 0x14014AF24
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14014AEC4 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401BE474 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1401BF9E0 (HvlpDetermineEnlightenments.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401D8E8C (KiIsHyperVCr3RspErrataPresent.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D989C (KiDetectHardwareSpecControlFeatures.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x1406201C0 (HvlQueryDetailInfo.c)
 *     EtwpTraceSystemInitialization @ 0x1407A9CCC (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14014AF54 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
