/*
 * XREFs of HvlPhase0Initialize @ 0x1405C0150
 * Callers:
 *     KiInitializeKernel @ 0x1403F8DE8 (KiInitializeKernel.c)
 * Callees:
 *     HvlQueryConnection @ 0x1400FED34 (HvlQueryConnection.c)
 *     HviIsAnyHypervisorPresent @ 0x140159E3C (HviIsAnyHypervisorPresent.c)
 *     HvlpTryConfigureInterface @ 0x14016F3D8 (HvlpTryConfigureInterface.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     HvlpAllocateEarlyPages @ 0x1401E57A4 (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x1401E5868 (HvlpMapEarlyPages.c)
 *     HvlpInitializeBootProcessor @ 0x1401E68FC (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x1401E762C (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x1401EE7C4 (HvlpDetermineEnlightenments.c)
 *     HviGetHypervisorVersion @ 0x1402684B0 (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 EarlyPages; // r8
  unsigned int v6; // ebx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (HviIsAnyHypervisorPresent() << 14)) & 0x4000;
  if ( (int)HvlQueryConnection(0LL) < 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -1070264320 )
        return 0LL;
      return result;
    }
  }
  result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
  if ( (int)result < 0 )
    return result;
  HvlpFlags |= 1u;
  HvlpDetermineEnlightenments();
  if ( (HvlpFlags & 4) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
    HvlpRootFlags |= 8u;
  if ( (HvlEnlightenments & 0x100) != 0 )
  {
    v3 = __readmsr(0x40000021u);
    v4 = v3 | 1;
    if ( (HvlpFlags & 4) != 0 )
    {
      v7 = v3 & 0xFFFFFFFFFFFFF000uLL;
      EarlyPages = HvlpMapEarlyPages(v3 & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)HIDWORD(v3) << 32, 4LL);
      if ( EarlyPages )
        goto LABEL_16;
    }
    else
    {
      EarlyPages = HvlpAllocateEarlyPages(a1, 1LL, (__int64)&v7);
      if ( EarlyPages )
      {
        v4 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)v4) & 0xFFF;
LABEL_16:
        __writemsr(0x40000021u, v4);
        HvlpReferenceTscPage = EarlyPages;
        goto LABEL_17;
      }
    }
    return 3221225626LL;
  }
LABEL_17:
  result = HvlpInitializeBootProcessor(a1);
  v6 = result;
  if ( (int)result >= 0 )
  {
    HviGetHypervisorVersion(HvlpHypervisorVersion);
    return v6;
  }
  return result;
}
