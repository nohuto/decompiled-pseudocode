/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1405BE5D8
 * Callers:
 *     NtDeleteFile @ 0x1405BE4C0 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14050AD28 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v2; // rcx

  v2 = *(struct _ECP_LIST **)(a1 + 160);
  if ( v2 )
  {
    if ( FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 160) = 0LL;
  }
}
