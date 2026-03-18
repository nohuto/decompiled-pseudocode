/*
 * XREFs of sub_140253254 @ 0x140253254
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140253254(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 1616) )
  {
    *(_QWORD *)(a3 + 1640) = 272LL;
    result = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 1648) = a1;
    *(_QWORD *)(a3 + 1632) = 0LL;
    *(_QWORD *)(a3 + 1624) = a3 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a3 + 1616) = 1;
  }
  return result;
}
