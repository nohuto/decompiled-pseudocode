/*
 * XREFs of sub_1800035F0 @ 0x1800035F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800035F0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(result + 8) = 0LL;
    *(_QWORD *)(result + 16) = 0LL;
  }
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
