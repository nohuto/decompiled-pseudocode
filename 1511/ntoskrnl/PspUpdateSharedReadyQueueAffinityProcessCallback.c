/*
 * XREFs of PspUpdateSharedReadyQueueAffinityProcessCallback @ 0x1400967B0
 * Callers:
 *     <none>
 * Callees:
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x1400952DC (KeUpdateProcessSharedReadyQueueAffinity.c)
 */

__int64 __fastcall PspUpdateSharedReadyQueueAffinityProcessCallback(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 772) & 8) == 0 )
    KeUpdateProcessSharedReadyQueueAffinity(a1);
  return 0LL;
}
