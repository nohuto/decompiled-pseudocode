/*
 * XREFs of FsRtlLookupReservedPerStreamContext @ 0x1401031B0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlLookupPerStreamContextInternal @ 0x1401E4010 (FsRtlLookupPerStreamContextInternal.c)
 */

PFSRTL_PER_STREAM_CONTEXT __fastcall FsRtlLookupReservedPerStreamContext(__int64 a1, void *a2, void *a3)
{
  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 7) & 0xF0u) >= 0x30 )
    return *(PFSRTL_PER_STREAM_CONTEXT *)(a1 + 96);
  if ( (*(_BYTE *)(a1 + 6) & 2) != 0 && *(_QWORD *)(a1 + 56) != a1 + 56 )
    return FsRtlLookupPerStreamContextInternal((PFSRTL_ADVANCED_FCB_HEADER)a1, a2, a3);
  else
    return 0LL;
}
