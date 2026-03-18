/*
 * XREFs of ACPIProcessorBuildBootApicIds @ 0x1C006FC24
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C001A890 (ACPIProcessorStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 ACPIProcessorBuildBootApicIds()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( AcpiBootProcessorApicIds )
    return 0LL;
  AcpiBootProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  AcpiBootProcessorApicIds = (__int64)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        4LL * (unsigned int)AcpiBootProcessorCount,
                                        0x4D706341u);
  if ( !AcpiBootProcessorApicIds )
    return 3221225626LL;
  v0 = 0LL;
  if ( !AcpiBootProcessorCount )
    return 0LL;
  while ( 1 )
  {
    result = HalGetProcessorIdByNtNumber((unsigned int)v0, &v2);
    if ( (int)result < 0 )
      break;
    *(_DWORD *)(AcpiBootProcessorApicIds + 4 * v0) = v2;
    v0 = (unsigned int)(v0 + 1);
    if ( (unsigned int)v0 >= AcpiBootProcessorCount )
      return 0LL;
  }
  return result;
}
