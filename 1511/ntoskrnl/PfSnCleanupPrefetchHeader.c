/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x1404DB060
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x1404DA474 (PfpOpenHandleClose.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404DB164 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpPrefetchSharedCleanup @ 0x1404DCEB8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedDeref @ 0x1404DD1A0 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1)
{
  unsigned int i; // edi
  __int64 **v3; // rdi
  __int64 *v4; // rsi
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_QWORD *)a1 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 88LL); ++i )
        PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(a1 + 56) + 56LL * i));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
  }
  v3 = (__int64 **)(a1 + 40);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    PfpOpenHandleClose(v4 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v4 + 4, *(_QWORD *)(a1 + 8));
  }
  v6 = *(void **)(a1 + 16);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(a1 + 80);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(void **)(a1 + 88);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( *(_QWORD *)(a1 + 8) )
  {
    PfpPrefetchSharedCleanup();
    PfpPrefetchSharedDeref(*(_QWORD *)(a1 + 8));
  }
  v9 = *(void **)(a1 + 112);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
