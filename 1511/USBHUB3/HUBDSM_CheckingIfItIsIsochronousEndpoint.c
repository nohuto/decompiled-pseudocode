/*
 * XREFs of HUBDSM_CheckingIfItIsIsochronousEndpoint @ 0x1C0016E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfItIsIsochronousEndpoint(__int64 a1)
{
  __int64 result; // rax

  result = 4061LL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1640LL) + 32LL) + 3LL) & 3) == 1 )
    return 4089LL;
  return result;
}
