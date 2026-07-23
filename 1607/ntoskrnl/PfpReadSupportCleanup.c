/*
 * XREFs of PfpReadSupportCleanup @ 0x1404EC1AC
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14042A684 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140668D84 (PfpPrefetchFiles.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
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
    PfpOpenHandleClose(a2 + 8, a1);
}
