/*
 * XREFs of sub_140286C08 @ 0x140286C08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140286C08(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a3 + 1536) )
  {
    *(_QWORD *)(a3 + 1560) = 272LL;
    result = a3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a3 + 1568) = a1;
    *(_QWORD *)(a3 + 1552) = 0LL;
    *(_QWORD *)(a3 + 1544) = a3 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a3 + 1536) = 1;
  }
  return result;
}
