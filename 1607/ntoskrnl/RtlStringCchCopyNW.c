/*
 * XREFs of RtlStringCchCopyNW @ 0x14010B264
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401CEC6C (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x140513880 (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 *     WmipBuildInstanceSet @ 0x1405378A0 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 *     IopLogBlockedDriverEvent @ 0x1406220C0 (IopLogBlockedDriverEvent.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x14010B2B8 (RtlStringCopyWorkerW_3.c)
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
  return RtlStringCopyWorkerW_3(pszDest, cchDest, (size_t *)pszSrc, pszSrc, cchToCopy);
}
