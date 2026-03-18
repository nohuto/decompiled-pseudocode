/*
 * XREFs of HvlPhase0Initialize @ 0x140530D90
 * Callers:
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 * Callees:
 *     HvlQueryConnection @ 0x140120354 (HvlQueryConnection.c)
 *     HviIsAnyHypervisorPresent @ 0x140126614 (HviIsAnyHypervisorPresent.c)
 *     HvlpTryConfigureInterface @ 0x140137040 (HvlpTryConfigureInterface.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     HvlpAllocateEarlyPages @ 0x1401AE83C (HvlpAllocateEarlyPages.c)
 *     HvlpMapEarlyPages @ 0x1401AE8F8 (HvlpMapEarlyPages.c)
 *     HvlpInitializeBootProcessor @ 0x1401AF350 (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x1401AFD78 (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x1401B3EC0 (HvlpDetermineEnlightenments.c)
 *     HviGetHypervisorVersion @ 0x140217DA4 (HviGetHypervisorVersion.c)
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
