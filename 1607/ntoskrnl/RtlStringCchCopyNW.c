/*
 * XREFs of RtlStringCchCopyNW @ 0x140084FB0
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEED8 (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x140486A70 (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     WmipBuildInstanceSet @ 0x140537360 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x1405426F4 (IopErrorLogThread.c)
 *     IopLogBlockedDriverEvent @ 0x14062200C (IopLogBlockedDriverEvent.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x140085004 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTATUS v4; // r10d

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
LABEL_9:
    *pszDest = 0;
    return v4;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_9;
  }
  return RtlStringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
