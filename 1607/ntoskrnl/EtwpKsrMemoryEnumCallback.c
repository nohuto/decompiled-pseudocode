/*
 * XREFs of EtwpKsrMemoryEnumCallback @ 0x1406A9FA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpKsrMemoryEnumCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = (unsigned int)*a3;
  if ( (unsigned int)v3 >= 0x40 )
    return 3221225507LL;
  *(_QWORD *)&a3[2 * v3 + 2] = a2;
  result = 0LL;
  ++*a3;
  return result;
}
