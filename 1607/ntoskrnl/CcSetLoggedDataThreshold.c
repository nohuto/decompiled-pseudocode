/*
 * XREFs of CcSetLoggedDataThreshold @ 0x140111F3C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall CcSetLoggedDataThreshold(__int64 a1, int a2)
{
  KIRQL v4; // al
  __int64 i; // r8

  v4 = KeAcquireQueuedSpinLock(5uLL);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( *(_QWORD *)(i + 24) == a1 )
    {
      *(_DWORD *)(i + 132) = a2;
      break;
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v4);
}
