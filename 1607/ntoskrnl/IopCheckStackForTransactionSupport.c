/*
 * XREFs of IopCheckStackForTransactionSupport @ 0x1401CA408
 * Callers:
 *     IopAllocateFoExtensionsOnCreate @ 0x14046B43C (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x1404B9FD0 (IopRetrieveTransactionParameters.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall IopCheckStackForTransactionSupport(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // dl

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 48) & 0x40000) == 0 )
  {
    v2 = KeAcquireQueuedSpinLock(0xAuLL);
    do
    {
      if ( (*(_DWORD *)(v1 + 48) & 0x40000) != 0 )
        break;
      v1 = *(_QWORD *)(v1 + 312);
      if ( v1 )
        v1 = *(_QWORD *)(v1 + 48);
    }
    while ( v1 );
    KeReleaseQueuedSpinLock(0xAuLL, v2);
  }
  return v1;
}
