/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x14049DC48
 * Callers:
 *     NtQueryFullAttributesFile @ 0x14049DA10 (NtQueryFullAttributesFile.c)
 *     NtDeleteFile @ 0x140546550 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x140423220 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1, _LOOKASIDE_LIST_EX *a2)
{
  struct _SLIST_ENTRY *v3; // rcx

  v3 = *(struct _SLIST_ENTRY **)(a1 + 160);
  if ( v3 )
  {
    if ( FsRtlpCleanupEcps(v3, a2) )
      *(_QWORD *)(a1 + 160) = 0LL;
  }
}
