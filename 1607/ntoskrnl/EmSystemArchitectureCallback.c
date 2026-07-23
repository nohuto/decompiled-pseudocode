/*
 * XREFs of EmSystemArchitectureCallback @ 0x14061D404
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmSystemArchitectureCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 result; // rax

  result = 0LL;
  if ( a6 != 1 && !a5 )
    return 1LL;
  if ( *a5 == (unsigned __int16)KeProcessorArchitecture )
    return 2LL;
  return result;
}
