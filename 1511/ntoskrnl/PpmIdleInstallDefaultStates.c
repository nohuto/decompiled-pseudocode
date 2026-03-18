/*
 * XREFs of PpmIdleInstallDefaultStates @ 0x140139814
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
