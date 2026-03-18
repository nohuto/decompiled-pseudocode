/*
 * XREFs of CalcHorizLineSubpix @ 0x1C02E0000
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall CalcHorizLineSubpix(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  _DWORD *v4; // r10

  v3 = CompDiv(a3[1] - *a3, (a2[1] - *a2) * (__int64)((a1 << 6) - *a3 + 32));
  return (unsigned int)(*v4 + v3);
}
