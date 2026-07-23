/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800D90F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall ShipAssertGetBufferInfo(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  if ( a1 )
  {
    result = &qword_180154398;
    *a1 = &qword_180154398;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_18014FDF0;
    *a2 = &dword_18014FDF0;
  }
  return result;
}
