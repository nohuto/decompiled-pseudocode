/*
 * XREFs of PfSnPrefetchCacheEntryUpdate @ 0x140454FB0
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x140454D9C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1404FDF8C (PfSnPrefetchCacheEntryGet.c)
 */

void __fastcall PfSnPrefetchCacheEntryUpdate(_DWORD *a1)
{
  const void *v1; // rsi
  unsigned __int8 *v3; // r9
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbx
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax

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
  ExAcquireResourceExclusiveLite(&stru_1403536D0, 1u);
  v8 = qword_1403536C0 - 16;
  if ( !memcmp((const void *)(qword_1403536C0 - 16 + 32), v1, 0x40uLL)
    || (v8 = PfSnPrefetchCacheEntryGet(&unk_1403536A8, v1, v4, 0LL)) != 0 )
  {
    *(_DWORD *)(v8 + 112) = a1[17];
    *(_DWORD *)(v8 + 116) = a1[18];
  }
  ExReleaseResourceLite(&stru_1403536D0);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
