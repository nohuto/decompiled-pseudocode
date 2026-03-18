/*
 * XREFs of GetPowerTransitionsState @ 0x1C01ECE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPowerTransitionsState(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)gPowerTransitionsState;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&gPowerTransitionsState[4];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&gPowerTransitionsState[8];
  result = (unsigned int)gPowerTransitionsState[12];
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
