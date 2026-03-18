/*
 * XREFs of HUBDSM_CheckingIfSetSelShouldBeSkipped @ 0x1C001AF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfSetSelShouldBeSkipped(__int64 a1)
{
  __int64 result; // rax

  result = 4061LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 960) + 1628LL) & 0x100) != 0 )
    return 4089LL;
  return result;
}
