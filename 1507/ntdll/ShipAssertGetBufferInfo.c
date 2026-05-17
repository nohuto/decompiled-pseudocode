/*
 * XREFs of ShipAssertGetBufferInfo @ 0x1800C8240
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
    result = &qword_1801485A8;
    *a1 = &qword_1801485A8;
  }
  if ( a2 )
  {
    result = (__int64 *)&dword_180143D54;
    *a2 = &dword_180143D54;
  }
  return result;
}
