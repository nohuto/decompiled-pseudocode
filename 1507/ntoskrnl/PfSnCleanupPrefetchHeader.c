/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x14042D1C0
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14042D2D8 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 *     PfpPrefetchSharedCleanup @ 0x140458F0C (PfpPrefetchSharedCleanup.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1)
{
  unsigned int i; // ebx
  __int64 **v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // rax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx

  if ( *(_QWORD *)(a1 + 168) )
  {
    if ( *(_QWORD *)a1 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 88LL); ++i )
        PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(a1 + 168) + 56LL * i));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 168), 0);
  }
  v3 = (__int64 **)(a1 + 152);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    PfpOpenHandleClose(v4 + 8, a1 + 8);
    PfpOpenHandleClose(v4 + 4, a1 + 8);
  }
  v6 = *(void **)(a1 + 128);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  v7 = *(void **)(a1 + 192);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = *(void **)(a1 + 200);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  PfpPrefetchSharedCleanup(a1 + 8);
  v9 = *(void **)(a1 + 224);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
}
