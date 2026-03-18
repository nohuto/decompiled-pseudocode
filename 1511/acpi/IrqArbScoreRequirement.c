/*
 * XREFs of IrqArbScoreRequirement @ 0x1C0072D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbScoreRequirement(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8) + 1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) > 0xFFFE )
    result = 0xFFFFLL;
  if ( *(_DWORD *)(a1 + 12) >= 0x10u )
    return (unsigned int)(result + 5);
  return result;
}
