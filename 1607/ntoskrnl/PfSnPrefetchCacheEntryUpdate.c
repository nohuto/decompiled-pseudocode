/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x1403E9BAC
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1403EAEEC (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     memcmp @ 0x14014DE90 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1403E8B24 (PfSnPrefetchCacheEntryGet.c)
 */

__int64 __fastcall PfSnPrefetchCacheEntryUpdate(_DWORD *a1)
{
  _OWORD *v1; // rsi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v1 = a1 + 1;
  v3 = (unsigned __int8 *)(a1 + 1);
  v4 = 314159LL;
  v5 = 8LL;
  do
  {
    v6 = *v3;
    v3 += 8;
    v4 = *(v3 - 1)
       + 37
       * (*(v3 - 2)
        + 37
        * (*(v3 - 3) + 37 * (*(v3 - 4) + 37 * (*(v3 - 5) + 37 * (*(v3 - 6) + 37 * (*(v3 - 7) + 37 * (v6 + 37 * v4)))))));
    --v5;
  }
  while ( v5 );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_140328760, 1u);
  v8 = qword_140328750 - 16;
  if ( !memcmp((const void *)(qword_140328750 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet((__int64)&unk_140328738, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 112) = a1[17];
    *(_DWORD *)(v8 + 116) = a1[18];
  }
  ExReleaseResourceLite(&stru_140328760);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
}
