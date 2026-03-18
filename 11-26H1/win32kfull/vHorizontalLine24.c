/*
 * XREFs of vHorizontalLine24 @ 0x1401DC590
 * Callers:
 *     vDrawLine @ 0x140187A94 (vDrawLine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vHorizontalLine24(__int64 a1, int a2, int a3, int a4)
{
  unsigned __int64 v4; // r8
  __int64 result; // rax
  unsigned __int64 i; // r10

  v4 = a1 + 3 * a3;
  result = (unsigned int)(3 * a2);
  for ( i = (int)result + a1; i < v4; i += 3LL )
  {
    *(_WORD *)i = a4;
    *(_BYTE *)(i + 2) = BYTE2(a4);
  }
  return result;
}
