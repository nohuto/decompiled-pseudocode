/*
 * XREFs of RtlQueryResourcePolicy @ 0x180020620
 * Callers:
 *     ?RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z @ 0x18001D578 (-RmpGetResourceManagerRuntimeConfiguration@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@@Z.c)
 * Callees:
 *     RtlpQueryPhysicalMemoryPolicy @ 0x180020670 (RtlpQueryPhysicalMemoryPolicy.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800394DC (RtlpQueryDiskSpacePolicy.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x1800396F4 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18003974C (RtlpQueryDiskWriteConstraintPolicy.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  __int64 NtSystemRoot; // rax
  const wchar_t *v9; // rax

  if ( !a3 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&RtlpTestHookInit, RtlpTestHookInitialize, 0LL, 0LL);
  if ( !a1 )
    return RtlpQueryPhysicalMemoryPolicy(a3);
  v6 = a1 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        NtSystemRoot = RtlGetNtSystemRoot();
        return RtlpQueryDiskWriteConstraintPolicy(NtSystemRoot, a3);
      }
      else
      {
        return 3221225475LL;
      }
    }
    else
    {
      return RtlpQueryDiskSpeedPolicy(a3);
    }
  }
  else
  {
    if ( (RtlGetSuiteMask() & 0x10000) != 0 )
      v9 = L"C:\\data\\programs\\windowsapps";
    else
      v9 = (const wchar_t *)RtlGetNtSystemRoot();
    return RtlpQueryDiskSpacePolicy(v9, a3);
  }
}
