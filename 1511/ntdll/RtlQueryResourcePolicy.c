/*
 * XREFs of RtlQueryResourcePolicy @ 0x180053D20
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x180053214 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x18005975C (RtlpHpLfhContextInitialize.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180054CE8 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180083740 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180085BEC (RtlpQueryDiskSpeedPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rcx

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
      v9 = (__int64)L"C:\\data\\programs\\windowsapps";
      if ( (MEMORY[0x7FFE02D0] & 0x10000) == 0 )
        v9 = 2147352624LL;
      return RtlpQueryDiskSpacePolicy(v9, a3);
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
