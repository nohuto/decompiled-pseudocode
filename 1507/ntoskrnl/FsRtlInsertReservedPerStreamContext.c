/*
 * XREFs of FsRtlInsertReservedPerStreamContext @ 0x1401202B8
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlInsertPerStreamContext @ 0x1401E3CD8 (FsRtlInsertPerStreamContext.c)
 */

__int64 __fastcall FsRtlInsertReservedPerStreamContext(__int64 a1, struct _FSRTL_PER_STREAM_CONTEXT *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !a1 || (*(_BYTE *)(a1 + 6) & 2) == 0 )
    return 3221225488LL;
  if ( (*(_BYTE *)(a1 + 7) & 0xF0u) < 0x30 )
    return (unsigned int)FsRtlInsertPerStreamContext((PFSRTL_ADVANCED_FCB_HEADER)a1, a2);
  else
    *(_QWORD *)(a1 + 96) = a2;
  return v2;
}
