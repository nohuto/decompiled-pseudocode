/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x14049DC48
 * Callers:
 *     NtQueryFullAttributesFile @ 0x14049DA10 (NtQueryFullAttributesFile.c)
 *     NtDeleteFile @ 0x140546550 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x140423220 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  _SLIST_ENTRY *v2; // rcx

  v2 = *(_SLIST_ENTRY **)(a1 + 160);
  if ( v2 )
  {
    if ( FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 160) = 0LL;
  }
}
