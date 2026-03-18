/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x1401685E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmIdleInstallDefaultStates(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = a1 + 23808;
  return PpmInstallNewIdleStates();
}
