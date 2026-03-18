/*
 * XREFs of ESM_CheckingIfStopEndpontReissueCountReached @ 0x1C003A2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfStopEndpontReissueCountReached(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 960) + 156LL) < 0x14u ? 21 : 33;
}
