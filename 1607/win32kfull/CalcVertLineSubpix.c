/*
 * XREFs of CalcVertLineSubpix @ 0x1C00BD860
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall CalcVertLineSubpix(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  _DWORD *v4; // r10

  v3 = CompDiv((unsigned int)(a2[1] - *a2), (a3[1] - *a3) * (__int64)((a1 << 6) - *a2 + 32));
  return (unsigned int)(*v4 + v3);
}
