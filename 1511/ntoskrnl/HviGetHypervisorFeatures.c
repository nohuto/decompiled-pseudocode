/*
 * XREFs of HviGetHypervisorFeatures @ 0x140137088
 * Callers:
 *     HvlpTryConfigureInterface @ 0x140137040 (HvlpTryConfigureInterface.c)
 *     HvlSvmGetSystemCapabilities @ 0x1401B1B28 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1401B3EC0 (HvlpDetermineEnlightenments.c)
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 *     HvlQueryDetailInfo @ 0x1405F6610 (HvlQueryDetailInfo.c)
 *     EtwpTraceSystemInitialization @ 0x140755A0C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1401370B8 (HviIsHypervisorMicrosoftCompatible.c)
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
