/*
 * XREFs of RtlQueryResourcePolicy @ 0x18001F768
 * Callers:
 *     RmpGetResourceManagerRuntimeConfiguration @ 0x18001B398 (RmpGetResourceManagerRuntimeConfiguration.c)
 * Callees:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18001F7C0 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800395B0 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x1800397CC (RtlpQueryDiskSpeedPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 SuiteMask; // rax
  __int64 v8; // rcx

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
    SuiteMask = RtlGetSuiteMask();
    v8 = (__int64)L"C:\\data\\programs\\windowsapps";
    if ( (SuiteMask & 0x10000) == 0 )
      v8 = 2147352624LL;
    return RtlpQueryDiskSpacePolicy(v8, a3);
  }
}
