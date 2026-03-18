/*
 * XREFs of Simulator_GetChildNode @ 0x1C0059D90
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0059AB0 (Simulator_CallbackWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_GetChildNode(__int64 a1)
{
  KIRQL v2; // dl
  __int64 v3; // rax
  _QWORD *v4; // rax

  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = (_QWORD *)(v3 + 24);
      if ( (_QWORD *)*v4 == v4 )
        *(_QWORD *)(a1 + 24) = 0LL;
      else
        *(_QWORD *)(a1 + 24) = *v4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return 0LL;
}
