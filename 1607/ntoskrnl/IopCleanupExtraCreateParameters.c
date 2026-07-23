/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x140404A70
 * Callers:
 *     NtQueryFullAttributesFile @ 0x140404848 (NtQueryFullAttributesFile.c)
 *     NtDeleteFile @ 0x14057D8D8 (NtDeleteFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x140413ED0 (FsRtlpCleanupEcps.c)
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
