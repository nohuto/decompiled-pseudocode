/*
 * XREFs of RtlStringCchCopyNW @ 0x140002B28
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1401C04F4 (PiDevCfgParsePropertyKeyName.c)
 *     AslPathSplit @ 0x1403B8D2C (AslPathSplit.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     WmipBuildInstanceSet @ 0x140501EDC (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x140503EFC (IopErrorLogThread.c)
 *     IopLogBlockedDriverEvent @ 0x1405F8184 (IopLogBlockedDriverEvent.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 * Callees:
 *     sub_140002B7C @ 0x140002B7C (sub_140002B7C.c)
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
  return sub_140002B7C((_DWORD)pszDest, cchDest, (_DWORD)pszSrc, (_DWORD)pszSrc, cchToCopy);
}
