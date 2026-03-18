/*
 * XREFs of BvgaSetProgressBarSubset @ 0x140195C1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BvgaSetProgressBarSubset(int a1, int a2)
{
  __int64 result; // rax

  BvgaProgressState = 100 * a1;
  result = (unsigned int)(100 * a2);
  dword_14034CE38 = a2 - a1;
  dword_14034CE34 = 100 * a2;
  return result;
}
