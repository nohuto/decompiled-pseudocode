/*
 * XREFs of HUBDSM_CheckingIfSetIsochDelayShouldBeSkipped @ 0x1C001AF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfSetIsochDelayShouldBeSkipped(__int64 a1)
{
  __int64 result; // rax

  result = 4061LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1628LL) & 0x1000) != 0 )
    return 4089LL;
  return result;
}
