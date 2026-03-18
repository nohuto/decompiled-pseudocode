/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1400FCA8C
 * Callers:
 *     PfpOpenHandleCreate @ 0x1404D944C (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x1404D95B0 (PfpPrefetchFilesTrickle.c)
 *     PfpVolumePrefetchMetadata @ 0x1404DC308 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1404DC6A4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchPrivatePages @ 0x1404EAEF0 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1404F3380 (PfpPrefetchFiles.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  result = 1;
  if ( !v1 || !*(_DWORD *)(v1 + 4) )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) == 0 )
      return 0;
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) && (*(_DWORD *)(v2 + 68) & 4) == 0 )
      return 0;
  }
  return result;
}
