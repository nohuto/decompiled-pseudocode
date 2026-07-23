/*
 * XREFs of KiAllocateCpuSetData @ 0x14079344C
 * Callers:
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     KiCreateCpuSetForProcessor @ 0x1403D47F0 (KiCreateCpuSetForProcessor.c)
 */

__int64 __fastcall KiAllocateCpuSetData(unsigned int a1)
{
  __int64 result; // rax
  char *v3; // rdi
  __int64 v4; // rcx

  if ( KiMaximumGroups != 1 )
    a1 = (unsigned __int16)KiMaximumGroups << 6;
  result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 32 * a1, 0x2020654Bu);
  v3 = (char *)result;
  if ( result )
  {
    memset((void *)result, 0, 32 * a1);
    KiCpuSetAffinities = v3;
    v4 = 8LL * a1;
    KiCpuSetAffinitiesShadow = &v3[v4];
    KiCpuSetData = (__int64)&v3[v4 + v4];
    LODWORD(KiCpuSetAffinitySize) = 8 * a1;
    KiCreateCpuSetForProcessor(KiProcessorBlock[0]);
    return 1LL;
  }
  return result;
}
