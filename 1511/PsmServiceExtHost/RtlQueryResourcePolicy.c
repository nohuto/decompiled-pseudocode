/*
 * XREFs of RtlQueryResourcePolicy @ 0x18002A5F0
 * Callers:
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x180021AD8 (RmpGetResourceManagerRuntimeConfiguration.c)
 * Callees:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18002A648 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180055750 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18005596C (RtlpQueryDiskSpeedPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rcx

  if ( !a3 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0LL, 0LL);
  if ( !a1 )
    return RtlpQueryPhysicalMemoryPolicy(a3);
  v6 = a1 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return RtlpQueryDiskSpeedPolicy(a3);
    else
      return 3221225475LL;
  }
  else
  {
    v7 = (__int64)L"C:\\data\\programs\\windowsapps";
    if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0 )
      v7 = 2147352624LL;
    return RtlpQueryDiskSpacePolicy(v7, a3);
  }
}
