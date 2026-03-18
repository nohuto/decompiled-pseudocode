/*
 * XREFs of PfpReadSupportCleanup @ 0x14042DB04
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14042DB8C (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1406AF06C (PfpPrefetchFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( (*(_QWORD *)(a2 + 32) & 0x400000000LL) != 0 )
    PfpOpenHandleClose((_QWORD *)(a2 + 8), a1);
}
