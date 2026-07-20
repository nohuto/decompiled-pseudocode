/*
 * XREFs of RtlStringCbPrintfW @ 0x1400084FC
 * Callers:
 *     SmpInvokeAutoChk @ 0x140002888 (SmpInvokeAutoChk.c)
 *     SmpParseCommandLine @ 0x140003620 (SmpParseCommandLine.c)
 *     SmpLoadDataFromRegistry @ 0x140005550 (SmpLoadDataFromRegistry.c)
 *     SmpAllocateInitialCommandBuffer @ 0x140007F6C (SmpAllocateInitialCommandBuffer.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140008070 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000986C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpCleanupStalePageFiles @ 0x14000B1A8 (SmpCleanupStalePageFiles.c)
 *     SmpSaveOldPageFiles @ 0x14000B21C (SmpSaveOldPageFiles.c)
 *     SmpCreateTempFile @ 0x1400106CC (SmpCreateTempFile.c)
 *     SmpGetCrashParameters @ 0x140010850 (SmpGetCrashParameters.c)
 *     SmpClearTemporaryFiles @ 0x140011AEC (SmpClearTemporaryFiles.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  NTSTATUS v5; // esi
  unsigned __int64 v6; // rbx
  int v7; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, pszFormat);
  v3 = cbDest >> 1;
  v5 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf_s(pszDest, v3, v3 - 1, pszFormat, va);
    if ( v7 < 0 )
      goto LABEL_9;
    if ( v7 == v6 )
    {
      pszDest[v6] = 0;
      return v5;
    }
    if ( v7 > v6 )
    {
LABEL_9:
      pszDest[v6] = 0;
      return -2147483643;
    }
  }
  return v5;
}
