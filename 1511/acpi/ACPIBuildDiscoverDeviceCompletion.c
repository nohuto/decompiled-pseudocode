/*
 * XREFs of ACPIBuildDiscoverDeviceCompletion @ 0x1C0035450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBuildDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v3 + 888) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v3 + 904), 0x4000000uLL);
  }
  return ACPIBuildCompleteGeneric(0LL, a2, 0LL, a1);
}
