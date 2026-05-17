/*
 * XREFs of RtlQueryResourcePolicy @ 0x180004FE0
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x1800040E8 (RtlpHpLfhContextInitialize.c)
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 * Callees:
 *     RtlpQueryDiskSpeedPolicy @ 0x180003670 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180003720 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryPhysicalMemoryPolicy @ 0x1800050A0 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, _DWORD *a3, __int64 a4)
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
