/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x140405BB0
 * Callers:
 *     NtQueryFullAttributesFile @ 0x140405988 (NtQueryFullAttributesFile.c)
 *     NtDeleteFile @ 0x14057D42C (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x140415010 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 160);
  if ( v2 )
  {
    if ( (unsigned __int8)FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 160) = 0LL;
  }
}
