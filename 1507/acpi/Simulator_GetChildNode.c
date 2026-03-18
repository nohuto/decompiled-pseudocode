/*
 * XREFs of Simulator_GetChildNode @ 0x1C0042CD0
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C00429F0 (Simulator_CallbackWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_GetChildNode(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(v3 + 24);
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return 0LL;
}
