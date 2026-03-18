/*
 * XREFs of ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0035480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBuildDiscoverPowerNodeCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v3 + 136) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v3 + 16), 0x8000uLL);
  }
  return ACPIBuildCompleteGeneric(0LL, a2, 0LL, a1);
}
