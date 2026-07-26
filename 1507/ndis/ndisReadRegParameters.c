/*
 * XREFs of ndisReadRegParameters @ 0x1C00B12C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisReadRegParameters(__int64 a1, int a2, _DWORD *a3, __int64 a4, int a5, _DWORD *a6)
{
  if ( a2 != 4 || !a3 )
    return 3221225473LL;
  *a6 = *a3;
  return 0LL;
}
