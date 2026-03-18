/*
 * XREFs of HviGetHypervisorFeatures @ 0x14016F420
 * Callers:
 *     HvlpTryConfigureInterface @ 0x14016F3D8 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401EB3A0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1401EE7C4 (HvlpDetermineEnlightenments.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x140208760 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140209FC8 (KiIsHyperVCr3RspErrataPresent.c)
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x1406703D4 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14016F450 (HviIsHypervisorMicrosoftCompatible.c)
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
