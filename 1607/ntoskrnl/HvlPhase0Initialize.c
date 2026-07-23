/*
 * XREFs of HvlPhase0Initialize @ 0x14057DA80
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     HvlQueryConnection @ 0x14008868C (HvlQueryConnection.c)
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     HvlpTryConfigureInterface @ 0x14014B434 (HvlpTryConfigureInterface.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x1401BB95C (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x1401BC48C (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x1401BF8C4 (HvlpDetermineEnlightenments.c)
 *     HvlpAllocateEarlyPages @ 0x1401BFE14 (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x1401BFED0 (HvlpMapEarlyPages.c)
 *     HviGetHypervisorVersion @ 0x140231DAC (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 EarlyPages; // r8
  unsigned int v6; // ebx
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (HviIsAnyHypervisorPresent() << 12)) & 0x1000;
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
  HvlHypervisorConnected = 1;
  HvlpDetermineEnlightenments();
  if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
    HvlpRootFlags |= 8u;
  if ( (((unsigned int)HvlpFlags >> 1) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2616LL) & 0x2000) != 0 )
  {
    HvlpRootFlags |= 0x400u;
  }
  if ( (HvlEnlightenments & 0x100) != 0 )
  {
    v3 = __readmsr(0x40000021u);
    v4 = v3 | 1;
    if ( (((unsigned int)HvlpFlags >> 1) & 1) != 0 )
    {
      v7 = v3 & 0xFFFFFFFFFFFFF000uLL;
      EarlyPages = HvlpMapEarlyPages(v3 & 0xFFFFFFFFFFFFF000uLL, (unsigned __int64)HIDWORD(v3) << 32, 4LL);
      if ( !EarlyPages )
        return 3221225626LL;
    }
    else
    {
      EarlyPages = HvlpAllocateEarlyPages(a1, 1LL, (__int64)&v7);
      if ( !EarlyPages )
        return 3221225626LL;
      v4 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)v4) & 0xFFF;
    }
    __writemsr(0x40000021u, v4);
    HvlpReferenceTscPage = EarlyPages;
  }
  result = HvlpInitializeBootProcessor(a1);
  v6 = result;
  if ( (int)result >= 0 )
  {
    HviGetHypervisorVersion(HvlpHypervisorVersion);
    return v6;
  }
  return result;
}
