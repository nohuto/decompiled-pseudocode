/*
 * XREFs of PfpCheckPrefetchAbort @ 0x14001FEA4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1403ED2F4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1403ED670 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x14042B7B4 (PfpPrefetchFilesTrickle.c)
 *     PfpOpenHandleCreate @ 0x14050A388 (PfpOpenHandleCreate.c)
 *     PfpPrefetchPrivatePages @ 0x1405333EC (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x140668CA0 (PfpPrefetchFiles.c)
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
