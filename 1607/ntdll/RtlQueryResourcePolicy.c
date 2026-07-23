/*
 * XREFs of RtlQueryResourcePolicy @ 0x180029F50
 * Callers:
 *     WerpGetProcessSnapshot @ 0x180006C58 (WerpGetProcessSnapshot.c)
 *     RtlpCreateLowFragHeap @ 0x180029C24 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x18007F704 (RtlpHpLfhContextInitialize.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18002AEC8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlGetSuiteMask @ 0x18002CDB0 (RtlGetSuiteMask.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180086C74 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089FC8 (RtlpQueryDiskSpeedPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  bool v9; // cf
  __int64 v10; // rcx

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0LL, 0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return RtlpQueryPhysicalMemoryPolicy(a3);
    return 3221225485LL;
  }
  v8 = a1 - 1;
  if ( !v8 )
  {
    if ( a4 == 4 )
    {
      v9 = (RtlGetSuiteMask() & 0x10000) != 0;
      v10 = (__int64)L"C:\\data\\programs\\windowsapps";
      if ( !v9 )
        v10 = 2147352624LL;
      return RtlpQueryDiskSpacePolicy(v10, a3);
    }
    return 3221225485LL;
  }
  if ( v8 == 1 )
  {
    if ( a4 == 4 )
      return RtlpQueryDiskSpeedPolicy(a3);
    return 3221225485LL;
  }
  return 3221225475LL;
}
