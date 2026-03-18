/*
 * XREFs of sub_140237994 @ 0x140237994
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140237994(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 1544) )
  {
    *(_QWORD *)(a3 + 1568) = 272LL;
    result = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 1576) = a1;
    *(_QWORD *)(a3 + 1560) = 0LL;
    *(_QWORD *)(a3 + 1552) = a3 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a3 + 1544) = 1;
  }
  return result;
}
