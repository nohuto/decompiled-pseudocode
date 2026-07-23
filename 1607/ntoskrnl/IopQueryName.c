/*
 * XREFs of IopQueryName @ 0x1404ECA68
 * Callers:
 *     <none>
 * Callees:
 *     IopQueryNameInternal @ 0x1404ECAA0 (IopQueryNameInternal.c)
 */

__int64 __fastcall IopQueryName(int a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-28h]

  LODWORD(NumberOfBytes) = a4;
  return IopQueryNameInternal(a1, a2, 0, a3, NumberOfBytes, a5, a6);
}
