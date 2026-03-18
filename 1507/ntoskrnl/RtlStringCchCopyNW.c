/*
 * XREFs of RtlStringCchCopyNW @ 0x140154884
 * Callers:
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 *     WmipBuildInstanceSet @ 0x14057BA68 (WmipBuildInstanceSet.c)
 *     AslPathSplit @ 0x1405AB068 (AslPathSplit.c)
 *     IopLogBlockedDriverEvent @ 0x14067211C (IopLogBlockedDriverEvent.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     SdbQueryDataExTagID @ 0x140701FC4 (SdbQueryDataExTagID.c)
 * Callees:
 *     sub_1401548D8 @ 0x1401548D8 (sub_1401548D8.c)
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
  return sub_1401548D8((_DWORD)pszDest, cchDest, (_DWORD)pszSrc, (_DWORD)pszSrc, cchToCopy);
}
