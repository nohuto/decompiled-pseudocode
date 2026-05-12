/*
 * XREFs of RaidInitializeDeferredQueue @ 0x1C0016158
 * Callers:
 *     RaidAdapterConfigureResources @ 0x1C0015FCC (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C00160D8 (RaidAdapterInitializeWmi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidInitializeDeferredQueue(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a4 < 0x20 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 112) = a5;
  *(_WORD *)(a1 + 2) = a4;
  KeInitializeDpc((PRKDPC)(a1 + 8), RaidDeferredQueueDpcRoutine, a2);
  return RaidAdjustDeferredQueueDepth(a1);
}
