/*
 * XREFs of RtlQueryResourcePolicy @ 0x180029F60
 * Callers:
 *     WerpGetProcessSnapshot @ 0x180006C68 (WerpGetProcessSnapshot.c)
 *     RtlpCreateLowFragHeap @ 0x180029C34 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x18007F714 (RtlpHpLfhContextInitialize.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x18002AED8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlGetSuiteMask @ 0x18002CDC0 (RtlGetSuiteMask.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180086C84 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089FD8 (RtlpQueryDiskSpeedPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  int v9; // ebx
  bool v10; // cf
  __int64 v11; // rcx

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0LL, 0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return RtlpQueryPhysicalMemoryPolicy(a3);
    return 3221225485LL;
  }
  v9 = a1 - 1;
  if ( !v9 )
  {
    if ( a4 == 4 )
    {
      v10 = (RtlGetSuiteMask(v7) & 0x10000) != 0;
      v11 = (__int64)L"C:\\data\\programs\\windowsapps";
      if ( !v10 )
        v11 = 2147352624LL;
      return RtlpQueryDiskSpacePolicy(v11, a3);
    }
    return 3221225485LL;
  }
  if ( v9 == 1 )
  {
    if ( a4 == 4 )
      return RtlpQueryDiskSpeedPolicy(a3);
    return 3221225485LL;
  }
  return 3221225475LL;
}
