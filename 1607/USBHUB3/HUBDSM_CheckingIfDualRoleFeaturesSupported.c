/*
 * XREFs of HUBDSM_CheckingIfDualRoleFeaturesSupported @ 0x1C0019910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDualRoleFeaturesSupported(__int64 a1)
{
  __int64 result; // rax

  result = 4061LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1616LL) & 0x40000) != 0 )
    return 4089LL;
  return result;
}
