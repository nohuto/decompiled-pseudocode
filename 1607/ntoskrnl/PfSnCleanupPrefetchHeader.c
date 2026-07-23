/*
 * XREFs of PfSnCleanupPrefetchHeader @ 0x1404ED470
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpPrefetchSharedDeref @ 0x1403EF270 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1404D79B4 (PfpPrefetchSharedCleanup.c)
 *     PfpOpenHandleClose @ 0x1404ED298 (PfpOpenHandleClose.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1404ED574 (PfSnCleanupPrefetchSectionInfo.c)
 */

void __fastcall PfSnCleanupPrefetchHeader(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int i; // edi
  __int64 **v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  ULONG_PTR v12; // rcx
  void *v13; // rcx

  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(_QWORD *)a1 )
    {
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 88LL); ++i )
        PfSnCleanupPrefetchSectionInfo((void *)(*(_QWORD *)(a1 + 56) + 56LL * i));
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 56), 0);
  }
  v6 = (__int64 **)(a1 + 40);
  while ( *v6 != (__int64 *)v6 )
  {
    v7 = *v6;
    v8 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    PfpOpenHandleClose(v7 + 8, *(_QWORD *)(a1 + 8));
    PfpOpenHandleClose(v7 + 4, *(_QWORD *)(a1 + 8));
  }
  v9 = *(void **)(a1 + 16);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 80);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  v11 = *(void **)(a1 + 88);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 )
  {
    PfpPrefetchSharedCleanup(v12, a2, a3, a4);
    PfpPrefetchSharedDeref(*(volatile signed __int64 **)(a1 + 8));
  }
  v13 = *(void **)(a1 + 112);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
}
