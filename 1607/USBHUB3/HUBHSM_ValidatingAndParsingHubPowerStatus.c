/*
 * XREFs of HUBHSM_ValidatingAndParsingHubPowerStatus @ 0x1C0008530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_ValidatingAndParsingHubPowerStatus(__int64 a1)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 960) + 84LL) = (*(_BYTE *)(*(_QWORD *)(a1 + 960) + 740LL) & 1) != 0 ? 500 : 100;
  return 2053LL;
}
