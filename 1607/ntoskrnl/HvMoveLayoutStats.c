/*
 * XREFs of HvMoveLayoutStats @ 0x14042E93C
 * Callers:
 *     HvCheckBin @ 0x14042DE90 (HvCheckBin.c)
 *     HvCheckHive @ 0x1404F6984 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvMoveLayoutStats(_DWORD *a1)
{
  __int64 result; // rax

  *a1 += a1[2];
  result = (unsigned int)a1[3];
  a1[1] += result;
  a1[3] = 0;
  a1[2] = 0;
  return result;
}
